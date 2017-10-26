#ifndef SLIDING_WINDOW00_H_
#define SLIDING_WINDOW00_H_

// #include "KernelManagerBlockSync.h"
#include "sliding_window00_exec1.h"


namespace maxcompilersim {

class sliding_window00 : public KernelManagerBlockSync {
public:
  sliding_window00(const std::string &instance_name);

protected:
  virtual void runComputationCycle();
  virtual void resetComputation();
  virtual void resetComputationAfterFlush();
          void updateState();
          void preExecute();
  virtual int  getFlushLevelStart();

private:
  t_port_number m_x01;
  t_port_number m_y01;
  t_port_number m_x11;
  t_port_number m_y11;
  HWOffsetFix<1,0,UNSIGNED> id1360out_value;

  HWOffsetFix<33,0,UNSIGNED> id1359out_value;

  HWOffsetFix<32,0,UNSIGNED> id2out_count;
  HWOffsetFix<1,0,UNSIGNED> id2out_wrap;

  HWOffsetFix<33,0,UNSIGNED> id2st_count;

  HWOffsetFix<32,0,UNSIGNED> id1358out_value;

  HWOffsetFix<1,0,UNSIGNED> id4out_result[2];

  HWOffsetFix<17,0,UNSIGNED> id1357out_value;

  HWOffsetFix<16,0,UNSIGNED> id6out_count;
  HWOffsetFix<1,0,UNSIGNED> id6out_wrap;

  HWOffsetFix<17,0,UNSIGNED> id6st_count;

  HWOffsetFix<16,0,UNSIGNED> id1356out_value;

  HWOffsetFix<1,0,UNSIGNED> id26out_result[2];

  HWOffsetFix<17,0,UNSIGNED> id1355out_value;

  HWOffsetFix<16,0,UNSIGNED> id8out_count;
  HWOffsetFix<1,0,UNSIGNED> id8out_wrap;

  HWOffsetFix<17,0,UNSIGNED> id8st_count;

  HWOffsetFix<17,0,UNSIGNED> id1354out_value;

  HWOffsetFix<16,0,UNSIGNED> id10out_count;
  HWOffsetFix<1,0,UNSIGNED> id10out_wrap;

  HWOffsetFix<17,0,UNSIGNED> id10st_count;

  HWOffsetFix<16,0,UNSIGNED> id1353out_value;

  HWOffsetFix<1,0,UNSIGNED> id28out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id29out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1352out_value;

  HWOffsetFix<1,0,UNSIGNED> id31out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id1056out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id32out_result[2];

  HWOffsetFix<32,0,UNSIGNED> id1351out_value;

  HWOffsetFix<1,0,UNSIGNED> id34out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id1057out_output[4];

  HWOffsetFix<1,0,UNSIGNED> id35out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id1058out_output[14];

  HWOffsetFix<1,0,UNSIGNED> id487out_io_y01_force_disabled;

  HWOffsetFix<32,0,UNSIGNED> id1350out_value;

  HWOffsetFix<1,0,UNSIGNED> id12out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id1062out_output[5];

  HWOffsetFix<32,0,UNSIGNED> id1349out_value;

  HWOffsetFix<1,0,UNSIGNED> id14out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id1059out_output[2];

  HWOffsetFix<16,0,UNSIGNED> id1348out_value;

  HWOffsetFix<1,0,UNSIGNED> id16out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id17out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1347out_value;

  HWOffsetFix<1,0,UNSIGNED> id19out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id1060out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id20out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1346out_value;

  HWOffsetFix<1,0,UNSIGNED> id22out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id1061out_output[3];

  HWOffsetFix<1,0,UNSIGNED> id23out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id24out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id1063out_output[12];

  HWOffsetFix<1,0,UNSIGNED> id36out_io_x01_force_disabled;

  HWRawBits<32> id39out_data;

  HWOffsetFix<1,0,UNSIGNED> id39st_read_next_cycle;
  HWRawBits<32> id39st_last_read_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id42out_o[7];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id44out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id47out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id50out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id53out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id56out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id59out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id62out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id65out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id68out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id71out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id74out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id77out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id80out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id83out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id86out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id89out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id92out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id95out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id98out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id101out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id104out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id107out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id110out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id113out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id116out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id119out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id122out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id125out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id128out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id131out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id134out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id137out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id140out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id143out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id146out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id149out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id152out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id155out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id158out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id161out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id164out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id167out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id170out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id173out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id176out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id179out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id182out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id185out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id188out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id191out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id194out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id197out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id200out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id203out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id206out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id209out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id212out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id215out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id218out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id221out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id224out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id227out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id230out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id233out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id236out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id239out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id242out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id245out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id248out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id251out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id254out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id257out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id260out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id263out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id266out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id269out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id272out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id275out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id278out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id281out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id284out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id287out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id290out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id293out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id296out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id299out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id302out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id305out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id308out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id311out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id314out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id317out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id320out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id323out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id326out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id329out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id332out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id335out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id338out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id341out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id344out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id347out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id350out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id353out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id356out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id359out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id362out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id365out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id368out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id371out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id374out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id377out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id380out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id383out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id386out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id389out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id392out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id395out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id398out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id401out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id404out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id407out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id410out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id413out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id416out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id419out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id422out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id425out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id428out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id431out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id434out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id437out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id440out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id443out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id446out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id449out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id452out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id455out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id458out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id461out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id991out_io_y11_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id540out_io_x11_force_disabled;

  HWRawBits<32> id543out_data;

  HWOffsetFix<1,0,UNSIGNED> id543st_read_next_cycle;
  HWRawBits<32> id543st_last_read_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id546out_o[7];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id548out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id551out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id554out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id557out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id560out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id563out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id566out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id569out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id572out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id575out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id578out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id581out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id584out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id587out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id590out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id593out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id596out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id599out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id602out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id605out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id608out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id611out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id614out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id617out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id620out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id623out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id626out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id629out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id632out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id635out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id638out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id641out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id644out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id647out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id650out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id653out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id656out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id659out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id662out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id665out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id668out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id671out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id674out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id677out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id680out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id683out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id686out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id689out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id692out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id695out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id698out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id701out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id704out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id707out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id710out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id713out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id716out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id719out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id722out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id725out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id728out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id731out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id734out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id737out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id740out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id743out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id746out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id749out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id752out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id755out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id758out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id761out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id764out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id767out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id770out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id773out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id776out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id779out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id782out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id785out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id788out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id791out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id794out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id797out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id800out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id803out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id806out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id809out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id812out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id815out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id818out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id821out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id824out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id827out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id830out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id833out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id836out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id839out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id842out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id845out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id848out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id851out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id854out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id857out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id860out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id863out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id866out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id869out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id872out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id875out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id878out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id881out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id884out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id887out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id890out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id893out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id896out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id899out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id902out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id905out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id908out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id911out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id914out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id917out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id920out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id923out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id926out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id929out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id932out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id935out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id938out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id941out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id944out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id947out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id950out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id953out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id956out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id959out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id962out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id965out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id1048out_value;

  HWOffsetFix<1,0,UNSIGNED> id1345out_value;

  HWOffsetFix<49,0,UNSIGNED> id1045out_value;

  HWOffsetFix<48,0,UNSIGNED> id1046out_count;
  HWOffsetFix<1,0,UNSIGNED> id1046out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id1046st_count;

  HWOffsetFix<1,0,UNSIGNED> id1344out_value;

  HWOffsetFix<49,0,UNSIGNED> id1051out_value;

  HWOffsetFix<48,0,UNSIGNED> id1052out_count;
  HWOffsetFix<1,0,UNSIGNED> id1052out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id1052st_count;

  HWOffsetFix<48,0,UNSIGNED> id1054out_run_cycle_count;

  HWOffsetFix<1,0,UNSIGNED> id1055out_result[2];

  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits;
  const HWOffsetFix<33,0,UNSIGNED> c_hw_fix_33_0_uns_bits;
  const HWOffsetFix<33,0,UNSIGNED> c_hw_fix_33_0_uns_bits_1;
  const HWOffsetFix<33,0,UNSIGNED> c_hw_fix_33_0_uns_bits_2;
  const HWOffsetFix<32,0,UNSIGNED> c_hw_fix_32_0_uns_bits;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits_1;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_bits;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits_2;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_bits_1;
  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_undef;
  const HWOffsetFix<32,0,UNSIGNED> c_hw_fix_32_0_uns_bits_1;
  const HWOffsetFix<32,0,UNSIGNED> c_hw_fix_32_0_uns_bits_2;
  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits_1;
  const HWRawBits<32> c_hw_bit_32_undef;
  const HWOffsetFix<32,-24,TWOSCOMPLEMENT> c_hw_fix_32_n24_sgn_undef;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_1;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_2;

  sliding_window00Block1Vars execute0();
  void execute1(const sliding_window00Block1Vars &in_vars);
  void execute2();
};

}

#endif /* SLIDING_WINDOW00_H_ */
