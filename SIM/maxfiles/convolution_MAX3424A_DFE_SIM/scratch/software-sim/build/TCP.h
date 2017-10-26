#ifndef TCP_H
#define TCP_H

#include <fstream>
#include <string>
#include <queue>
#include <sys/time.h>

#include "ManagerSync.h"
#include "PushSync.h"
#include "Data.h"
#include "Ethernet.h"


// LWIP forward declarations
struct tcp_pcb;
struct netif;


namespace maxcompilersim {

class TCPSync;
class TCPConnection;
class TCPRxOutput;



class TOEMappedMemory : public AbstractMappedMemory {
private:
	TCPSync& m_tcp;

	std::vector<Data> m_data;

	static const int INTERRUPT_STATUS_LOW_ADDR;
	static const int INTERRUPT_STATUS_HIGH_ADDR;
	static const int INTERRUPT_TOGGLE_LOW_ADDR;
	static const int INTERRUPT_TOGGLE_HIGH_ADDR;

	typedef std::map<int, AbstractMappedMemoryPtr> per_connection_data_t;
	per_connection_data_t m_per_connection_data;

	AbstractMappedMemoryPtr getOrAddConnectionData(int connection_id) const;

	int getSelectorForEntry(uint entry) const;

	void setStateChange(int connection_id, bool changed);
	void clearStateChange(const Data &old_value, const Data &new_value, bool is_low);

public:
	TOEMappedMemory(TCPSync& tcp, uint bit_width, uint depth);
	virtual ~TOEMappedMemory();

	virtual const Data &getData(uint entry) const;
	virtual void setData(uint entry, const Data &value);

	virtual uint64_t get(uint32_t address, bool mec) const;
	virtual void set(uint32_t address, uint64_t value, uint mask, bool mec);

	const Data &getConnectionData(int connection_id, uint entry) const;
	void setConnectionData(int connection_id, uint entry, const Data &value);

	void initGlobalData();
	void initConnectionData(int connection_id);

	void checkForEvents(uint entry);
};




struct QueuedPacket {
	TCPConnection* m_connection;
	uint8_t* m_data;
	int m_length;

	QueuedPacket(TCPConnection* connection, uint8_t* data, int length) :
		m_connection(connection), m_data(data), m_length(length) { }

	~QueuedPacket()	{ if (m_data) { delete[] m_data; m_data = NULL; } }
};




class TCPRxDecoder {
protected:
	TCPSync& m_tcp;

public:
	TCPRxDecoder(TCPSync& tcp)
		: m_tcp( tcp) { }

	virtual ~TCPRxDecoder() { };

	virtual void decode(TCPConnection& connection, uint8_t* data, int length) = 0;
	virtual void reset() = 0;
};




class TCPRxDecoderRaw : public TCPRxDecoder {
private:
	std::deque<uint8_t> m_data;
	int m_alignment;

public:
	TCPRxDecoderRaw(TCPSync& tcp);
	virtual ~TCPRxDecoderRaw();

	virtual void handleRequest(TCPConnection& connection, int size);
	virtual void decode(TCPConnection& connection, uint8_t* data, int length);
	virtual void reset();
};




class TCPRxDecoderFramed : public TCPRxDecoder {
public:
	TCPRxDecoderFramed(TCPSync& tcp);
	virtual ~TCPRxDecoderFramed();

	virtual void decode(TCPConnection& connection, uint8_t* data, int length);
	virtual void reset();
};




class TCPRxDecoderDisabled : public TCPRxDecoder {
public:
	TCPRxDecoderDisabled(TCPSync& tcp);
	virtual ~TCPRxDecoderDisabled();

	virtual void decode(TCPConnection& connection, uint8_t* data, int length);
	virtual void reset();
};




class TCPRxDecoderSizedFIX : public TCPRxDecoder {
private:
	static const int MAX_PACKET_LENGTH;

	bool m_seen_prefix;
	bool m_seen_length;
	int m_packet_length_total;
	int m_packet_length_received;

	uint8_t* m_packet;

	int m_data_stream;

	int decodeInternal(TCPConnection& connection, uint8_t* data, int length);

public:
	TCPRxDecoderSizedFIX(TCPSync& tcp, int data_stream);
	virtual ~TCPRxDecoderSizedFIX();

	virtual void decode(TCPConnection& connection, uint8_t* data, int length);
	virtual void reset();
};




class TCPRxDecoderSizedSoupBinTCP : public TCPRxDecoder {
private:
	static const int MAX_PACKET_LENGTH;

	bool m_seen_length;
	int m_packet_length_total;
	int m_packet_length_received;

	uint8_t* m_packet;

	int m_data_stream;

	int decodeInternal(TCPConnection& connection, uint8_t* data, int length);

public:
	TCPRxDecoderSizedSoupBinTCP(TCPSync& tcp, int data_stream);
	virtual ~TCPRxDecoderSizedSoupBinTCP();

	virtual void decode(TCPConnection& connection, uint8_t* data, int length);
	virtual void reset();
};


class TCPRxDecoderSizedETI : public TCPRxDecoder {
private:
	static const int MAX_PACKET_LENGTH;

	bool m_seen_length;
	int m_packet_length_total;
	int m_packet_length_received;

	uint8_t* m_packet;

	int m_data_stream;

	int decodeInternal(TCPConnection& connection, uint8_t* data, int length);

public:
	TCPRxDecoderSizedETI(TCPSync& tcp, int data_stream);
	virtual ~TCPRxDecoderSizedETI();

	virtual void decode(TCPConnection& connection, uint8_t* data, int length);
	virtual void reset();
};




class TCPRxOutput {
protected:
	TCPSync& m_tcp;
	const t_port_number m_port;

public:
	TCPRxOutput(TCPSync& tcp, const t_port_number port)
		: m_tcp( tcp), m_port(port) { }

	virtual ~TCPRxOutput() { };

	virtual bool hasInFlightPacket(TCPConnection& connection) = 0;
	virtual void clearPackets(TCPConnection& connection, bool keep_in_flight_packets) = 0;

	virtual bool runCycle() = 0;

	virtual void reset() = 0;
};




struct QueuedPacketRawData {
	TCPConnection* m_connection;
	uint8_t* m_data;
	int m_length;
	uint64_t m_cycle_created;

	QueuedPacketRawData(TCPConnection* connection, uint8_t* data, int length, uint64_t cycle_created) :
		m_connection(connection), m_data(data), m_length(length), m_cycle_created(cycle_created) { }

	~QueuedPacketRawData()	{ if (m_data) { delete[] m_data; m_data = NULL; } }
};




class TCPRxOutputRawData : public TCPRxOutput {
private:

	std::queue<QueuedPacketRawData*> m_packet_queue;
	QueuedPacketRawData *m_current_packet;
	int m_current_packet_offs;
	int m_conn_bits;
	int m_event_size_bits;

public:
	explicit TCPRxOutputRawData(TCPSync& tcp, const t_port_number port, int conn_bits, int ev_size_bits);

	void enquePacket(TCPConnection& connection, uint8_t* data, int length);

	bool hasInFlightPacket(TCPConnection& connection);
	void clearPackets(TCPConnection& connection, bool keep_in_flight_packets);

	bool runCycle();

	void reset();
};



struct QueuedPacketRawLevel {
	TCPConnection* m_connection;
	int m_level;
	uint64_t m_cycle_created;

	QueuedPacketRawLevel(TCPConnection* connection, int level, uint64_t cycle_created) :
		m_connection(connection), m_level(level), m_cycle_created(cycle_created) { }
};



class TCPRxOutputRawEvent : public TCPRxOutput {
private:

	std::queue<QueuedPacketRawLevel*> m_packet_queue;

	int m_conn_bits;
	int m_event_size_bits;

public:
	explicit TCPRxOutputRawEvent(TCPSync& tcp, const t_port_number port, int conn_bits, int ev_size_bits);

	void enquePacket(TCPConnection& connection, int level);

	bool hasInFlightPacket(TCPConnection& connection);
	void clearPackets(TCPConnection& connection, bool keep_in_flight_packets);

	bool runCycle();

	void reset();
};


class TCPRxOutputRawLevel : public TCPRxOutput {
private:

	std::queue<QueuedPacketRawLevel*> m_packet_queue;

	int m_conn_bits;
	uint32_t *m_total_bytes_rcvd;

public:
	explicit TCPRxOutputRawLevel(TCPSync& tcp, const t_port_number port, int conn_bits);

	void enquePacket(TCPConnection& connection, int level);

	bool hasInFlightPacket(TCPConnection& connection);
	void clearPackets(TCPConnection& connection, bool keep_in_flight_packets);

	bool runCycle();

	void reset();
};


struct QueuedPacketRawStatus {
	TCPConnection* m_connection;
	int m_status;
	uint64_t m_cycle_created;

	QueuedPacketRawStatus(TCPConnection* connection, int status, uint64_t cycle_created) :
		m_connection(connection), m_status(status), m_cycle_created(cycle_created) { }
};




class TCPRxOutputRawStatus : public TCPRxOutput {
private:

	std::queue<QueuedPacketRawStatus*> m_packet_queue;

	int m_conn_bits;
	int m_event_size_bits;

public:
	explicit TCPRxOutputRawStatus(TCPSync& tcp, const t_port_number port, int conn_bits, int ev_size_bits);

	void enquePacket(TCPConnection& connection, int status);

	bool hasInFlightPacket(TCPConnection& connection);
	void clearPackets(TCPConnection& connection, bool keep_in_flight_packets);

	bool runCycle();

	void reset();
};




struct QueuedPacketTxWinEvent {
	TCPConnection* m_connection;
	uint32_t m_bytes_free;
	uint64_t m_cycle_created;

	QueuedPacketTxWinEvent(TCPConnection* connection, uint32_t bytes_free, uint64_t cycle_created) :
		m_connection(connection), m_bytes_free(bytes_free), m_cycle_created(cycle_created) { }
};



class TCPRxOutputTxWinEvent : public TCPRxOutput {
private:

	int m_conn_bits;
	int m_bytes_free_width;
	std::queue<QueuedPacketTxWinEvent*> m_packet_queue;

public:
	explicit TCPRxOutputTxWinEvent(TCPSync& tcp, const t_port_number port, int conn_bits, int bytes_free_width);

	void enquePacket(TCPConnection& connection, uint32_t bytes_free);

	bool hasInFlightPacket(TCPConnection& connection);
	void clearPackets(TCPConnection& connection, bool keep_in_flight_packets);

	bool runCycle();

	void reset();
};


class TCPRxOutputTxWinLevel : public TCPRxOutput {
private:

	int m_conn_bits;
	uint32_t *m_total_bytes_sent;
	std::queue<QueuedPacketTxWinEvent*> m_packet_queue;

public:
	explicit TCPRxOutputTxWinLevel(TCPSync& tcp, const t_port_number port, int conn_bits);

	void enquePacket(TCPConnection& connection, uint32_t bytes_free);

	bool hasInFlightPacket(TCPConnection& connection);
	void clearPackets(TCPConnection& connection, bool keep_in_flight_packets);

	bool runCycle();

	void reset();
};




class TCPRxOutputFramedOrSized : public TCPRxOutput {
private:
	int m_packet_queue_length;
	int m_packet_length_received;

	std::queue<QueuedPacket*> m_packet_queue;

public:
	explicit TCPRxOutputFramedOrSized(TCPSync& tcp, const t_port_number port);

	void enquePacket(TCPConnection& connection, uint8_t* data, int length);
	bool hasInFlightPacket(TCPConnection& connection);
	void clearPackets(TCPConnection& connection, bool keep_in_flight_packets);

	bool runCycle();

	void reset();
};



class TCPConnection {
private:
	TCPSync& m_tcp;

	tcp_pcb* m_pcb;

	int m_id;

	uint32_t m_last_snd_win_ack;

	TCPRxDecoder* m_rx_decoder;

	void clearPackets(bool keep_in_flight_packets);

public:

	enum SimSendResult {
		SIM_SEND_OK,
		SIM_SEND_CLOSED,
		SIM_SEND_RETRY
	};

	TCPConnection(TCPSync& tcp, int id);
	~TCPConnection();

	int getID() { return m_id; }

	TCPRxDecoder* getRxDecoder() { return m_rx_decoder; }

	void reset();

	void simListen();
	bool simIsListening();
	void simConnect();
	SimSendResult simSend(uint8_t* data, int length);
	void simClose();
	void simClosed();
	void simAbort(bool send_reset);
	void simConfirmReceived(int length);

	// Methods to be called from LWIP callbacks
	void simAccepted(tcp_pcb *new_pcb);
	void simConnected(tcp_pcb *new_pcb);
	void simReceived(uint8_t* data, int length);

	void setState(int state, bool update_memory = true);

	bool handleTxWinEvents();

	bool operator==(const TCPConnection &rhs) const;
	bool operator!=(const TCPConnection &rhs) const;
};


typedef boost::shared_ptr<TOEMappedMemory> TOEMappedMemoryPtr;
typedef boost::shared_ptr<TCPRxOutput> TCPRxOutputPtr;


class TCPSync :
	public PushSinkSync,
	public PushSourceSync
{
public:
	enum RxMode {
		RX_MODE_RAW,
		RX_MODE_FRAMED,
		RX_MODE_SIZED_MESSAGE,
		RX_MODE_SIZED_STATIC_FIX_4_2,
		RX_MODE_SIZED_STATIC_SOUPBINTCP,
		RX_MODE_SIZED_STATIC_ETI
	};

private:
	uint64_t m_cycle;

	const t_port_number m_tx_port;

	typedef std::tr1::unordered_map<std::string, TCPRxOutputPtr> rx_outputs_t;
	rx_outputs_t m_rx_outputs;

	typedef std::tr1::unordered_map<int, std::string> rx_output_id_to_name_map_t;
	rx_output_id_to_name_map_t m_rx_output_id_to_name_map;

	const t_port_number m_net_mac_rx_port;
	const t_port_number m_net_mac_tx_port;

	const t_port_number m_up_mac_tx_port;
	const t_port_number m_up_mac_rx_port;

	static const int TOE_MEM_WIDTH;
	static const int TOE_MEM_DEPTH;

	static const int RX_DECODE_MEM_WIDTH;
	static const int RX_DECODE_MEM_DEPTH;


	TOEMappedMemoryPtr m_toe_mem;
	AbstractMappedMemoryPtr m_rx_decoder_mem;

	RxMode m_rx_mode;
	int m_num_connections;

	typedef std::map<int, TCPConnection*> tcp_connections_t;
	tcp_connections_t m_connections;


	// MAC
	bool m_got_net_mac_rx_raw_data;
	Data m_net_mac_rx_raw_data;

	bool m_got_up_mac_tx_raw_data;
	Data m_up_mac_tx_raw_data;

	bool m_net_mac_rx_sof_seen;
	int m_net_mac_rx_length_received;
	uint8_t m_net_mac_rx_frame_data[ETHERNET_MTU];


	static const int NET_MAC_TX_MAX_QUEUE_LENGTH;
	int m_net_mac_tx_queue_length;
	std::queue<QueuedPacket*> m_net_mac_tx_queue;
	int m_net_mac_tx_length_sent;

	// TCP
	bool m_tx_sof_seen;
	bool m_got_tx_raw_data;
	Data m_tx_raw_data;
	int m_tx_packet_lenght;
	uint8_t m_tx_packet_data[ETHERNET_MTU];

	t_port_number m_rx_raw_req_port;
	bool m_got_rx_raw_req_data;
	Data m_rx_raw_req_data;

	// TOE data
	int m_if_version;
	int m_conn_bits;
	int m_event_size_bits;


	// LWIP
	static bool m_lwip_initialised;

	bool m_network_if_initialised;

	netif* m_network_if;

	timeval m_last_tcp_tick_time;
	timeval m_last_arp_tick_time;
	timeval m_last_ip_reass_tick_time;


	void initMappedMemory();

	void addRxOutput(const std::string &name, TCPRxOutput* output);

	TCPConnection* getOrAddConnection(int tx_con_id);
	TCPConnection* getConnection(int con_id);

	bool handleNetMacTx();
	bool handleNetAndUpMacRx();

	bool handleRxRawReq();

	bool handleUpMacTx();

	bool handleTx();

	bool handleTxWinEvents();

	void initNetworkIf();
	void tickTimers();
	void passNetMacRxToLWIP();

public:
	explicit TCPSync(const std::string &name, RxMode rx_mode, int if_version, int conn_bits, int event_bits);
	virtual ~TCPSync();

	uint64_t getCycle() {return m_cycle; }

	// Allow access to protected pushOutput
	void pushOutput(t_port_number port_number, const Data &data);

	virtual void pushInput(const t_port_number port_number, const Data &data);
	virtual bool isPushInputStalled(const t_port_number port_number) const;
	virtual bool runCycle();
	virtual void reset();

	virtual void setSimParameter(const std::string &name, const std::string &value);

	void addRxSizedOutput(const std::string &name, int stream_id);

	TCPRxDecoder* makeRxDecoder(TCPConnection& connection);

	RxMode getRxMode();

	TCPRxOutputPtr getRxOutput(const std::string& output);
	TCPRxOutputPtr getRxOutput(int output);

	bool hasInFlightRxPackets(TCPConnection& connection);
	void clearRxPackets(TCPConnection& connection, bool keep_in_flight_packets);

	void enqueNetMacTxPacket(uint8_t* data, int length);

	TOEMappedMemoryPtr getTOEMemory();
	void dispatchMappedMemoryEvents();

	netif* getNetworkIf() { return m_network_if; }

};

} // namespace maxcompilersim

#endif // TCP_H
