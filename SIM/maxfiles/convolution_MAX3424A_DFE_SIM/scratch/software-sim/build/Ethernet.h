#ifndef PCAPETHERNET_H
#define PCAPETHERNET_H

#include <stdint.h>
#include <string>

#include "ManagerSync.h"
#include "PushSync.h"
#include "PullSync.h"

#define ETHERNET_MTU 9000

namespace maxcompilersim {

class Ethernet :
	public PushSourceSync,
	public PullSinkSync
{
	const uint32_t m_num_ports;
	const uint32_t m_tx_enabled;
	const uint32_t m_rx_enabled;

	uint8_t (*m_rx_packet_buffer)[ETHERNET_MTU];
	int     *m_rx_packet_length;
	int     *m_rx_packet_pos;

	uint8_t (*m_tx_packet_buffer)[ETHERNET_MTU];
	int     *m_tx_packet_pos;
	bool    *m_tx_packet_started;

	int *m_fd;

	t_port_number *m_tx_port;
	t_port_number *m_rx_port;

	static const int MAC_MEM_WIDTH;
	static const int MAC_MEM_DEPTH;

	AbstractMappedMemoryPtr m_mac_mem;
	bool rx_en(int port) {
		uint32_t mask = 1<<port;
		uint32_t res = m_rx_enabled & mask;
		return res!=0;
	}
	bool tx_en(int port) {
		uint32_t mask = 1<<port;
		uint32_t res = m_tx_enabled & mask;
		return res!=0;
	}

public:
	explicit Ethernet(
		const std::string &name,
		const std::string &simulated_system_name,
		const std::string &connection_name,
		uint32_t num_ports,
		const std::string &port_name,
		uint32_t tx_enabled,
		uint32_t rx_enabled);

	virtual ~Ethernet();

	/*
	 * From ManagerBlockSync
	 */
	virtual void setSimParameter(const std::string &name, const std::string &value);
	virtual bool runCycle();
	virtual void reset();
};

} // namespace maxcompilersim

#endif // PCAPETHERNET_H
