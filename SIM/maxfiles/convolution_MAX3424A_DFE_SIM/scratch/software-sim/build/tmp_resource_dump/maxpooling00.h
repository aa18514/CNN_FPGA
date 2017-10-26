#ifndef MAXPOOLING00_H_
#define MAXPOOLING00_H_

// #include "KernelManagerBlockSync.h"


namespace maxcompilersim {

class maxpooling00 : public KernelManagerBlockSync {
public:
  maxpooling00(const std::string &instance_name);

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
  HWOffsetFix<1,0,UNSIGNED> id519out_value;

  HWOffsetFix<33,0,UNSIGNED> id518out_value;

  HWOffsetFix<32,0,UNSIGNED> id2out_count;
  HWOffsetFix<1,0,UNSIGNED> id2out_wrap;

  HWOffsetFix<33,0,UNSIGNED> id2st_count;

  HWOffsetFix<33,0,UNSIGNED> id517out_value;

  HWOffsetFix<32,0,UNSIGNED> id4out_count;
  HWOffsetFix<1,0,UNSIGNED> id4out_wrap;

  HWOffsetFix<33,0,UNSIGNED> id4st_count;

  HWOffsetFix<33,0,UNSIGNED> id516out_value;

  HWOffsetFix<32,0,UNSIGNED> id6out_count;
  HWOffsetFix<1,0,UNSIGNED> id6out_wrap;

  HWOffsetFix<33,0,UNSIGNED> id6st_count;

  HWOffsetFix<33,0,UNSIGNED> id515out_value;

  HWOffsetFix<32,0,UNSIGNED> id8out_count;
  HWOffsetFix<1,0,UNSIGNED> id8out_wrap;

  HWOffsetFix<33,0,UNSIGNED> id8st_count;

  HWOffsetFix<33,0,UNSIGNED> id514out_value;

  HWOffsetFix<32,0,UNSIGNED> id10out_count;
  HWOffsetFix<1,0,UNSIGNED> id10out_wrap;

  HWOffsetFix<33,0,UNSIGNED> id10st_count;

  HWOffsetFix<32,0,UNSIGNED> id513out_value;

  HWOffsetFix<1,0,UNSIGNED> id12out_result[2];

  HWOffsetFix<32,0,UNSIGNED> id512out_value;

  HWOffsetFix<1,0,UNSIGNED> id14out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id15out_result[2];

  HWOffsetFix<32,0,UNSIGNED> id511out_value;

  HWOffsetFix<1,0,UNSIGNED> id17out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id322out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id18out_result[2];

  HWOffsetFix<32,0,UNSIGNED> id510out_value;

  HWOffsetFix<1,0,UNSIGNED> id20out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id323out_output[3];

  HWOffsetFix<1,0,UNSIGNED> id21out_result[2];

  HWOffsetFix<32,0,UNSIGNED> id509out_value;

  HWOffsetFix<1,0,UNSIGNED> id23out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id324out_output[4];

  HWOffsetFix<1,0,UNSIGNED> id24out_result[2];

  HWOffsetFix<32,0,UNSIGNED> id508out_value;

  HWOffsetFix<1,0,UNSIGNED> id26out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id325out_output[5];

  HWOffsetFix<1,0,UNSIGNED> id27out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id156out_io_y01_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id28out_io_x01_force_disabled;

  HWRawBits<160> id30out_data;

  HWOffsetFix<1,0,UNSIGNED> id30st_read_next_cycle;
  HWRawBits<160> id30st_last_read_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id326out_output[5];

  HWOffsetFix<1,0,UNSIGNED> id140out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id141out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id142out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id328out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id456out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id143out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id330out_output[106];

  HWOffsetFix<1,0,UNSIGNED> id144out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id145out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id146out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id457out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id333out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id147out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id334out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id148out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id149out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id150out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id458out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id337out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id151out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id507out_value;

  HWOffsetFix<1,0,UNSIGNED> id153out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id338out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id506out_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id155out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id339out_output[5];

  HWOffsetFix<1,0,UNSIGNED> id124out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id125out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id126out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id341out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id459out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id127out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id343out_output[106];

  HWOffsetFix<1,0,UNSIGNED> id128out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id129out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id130out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id460out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id346out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id131out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id347out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id132out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id133out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id134out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id461out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id350out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id135out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id505out_value;

  HWOffsetFix<1,0,UNSIGNED> id137out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id351out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id504out_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id139out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id352out_output[5];

  HWOffsetFix<1,0,UNSIGNED> id108out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id109out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id110out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id354out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id462out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id111out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id356out_output[106];

  HWOffsetFix<1,0,UNSIGNED> id112out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id113out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id114out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id463out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id359out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id115out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id360out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id116out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id117out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id118out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id464out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id363out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id119out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id503out_value;

  HWOffsetFix<1,0,UNSIGNED> id121out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id364out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id502out_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id123out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id365out_output[5];

  HWOffsetFix<1,0,UNSIGNED> id92out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id93out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id94out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id367out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id465out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id95out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id369out_output[106];

  HWOffsetFix<1,0,UNSIGNED> id96out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id97out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id98out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id466out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id372out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id99out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id373out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id100out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id101out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id102out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id467out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id376out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id103out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id501out_value;

  HWOffsetFix<1,0,UNSIGNED> id105out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id377out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id500out_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id107out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id378out_output[5];

  HWOffsetFix<1,0,UNSIGNED> id76out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id77out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id78out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id380out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id468out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id79out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id382out_output[106];

  HWOffsetFix<1,0,UNSIGNED> id80out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id81out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id82out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id469out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id385out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id83out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id386out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id84out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id85out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id86out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id470out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id389out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id87out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id499out_value;

  HWOffsetFix<1,0,UNSIGNED> id89out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id390out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id498out_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id91out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id297out_io_y11_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id169out_io_x11_force_disabled;

  HWRawBits<160> id171out_data;

  HWOffsetFix<1,0,UNSIGNED> id171st_read_next_cycle;
  HWRawBits<160> id171st_last_read_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id391out_output[5];

  HWOffsetFix<1,0,UNSIGNED> id281out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id282out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id283out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id393out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id471out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id284out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id395out_output[106];

  HWOffsetFix<1,0,UNSIGNED> id285out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id286out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id287out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id472out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id398out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id288out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id399out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id289out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id290out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id291out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id473out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id402out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id292out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id497out_value;

  HWOffsetFix<1,0,UNSIGNED> id294out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id403out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id496out_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id296out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id404out_output[5];

  HWOffsetFix<1,0,UNSIGNED> id265out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id266out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id267out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id406out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id474out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id268out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id408out_output[106];

  HWOffsetFix<1,0,UNSIGNED> id269out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id270out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id271out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id475out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id411out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id272out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id412out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id273out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id274out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id275out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id476out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id415out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id276out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id495out_value;

  HWOffsetFix<1,0,UNSIGNED> id278out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id416out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id494out_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id280out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id417out_output[5];

  HWOffsetFix<1,0,UNSIGNED> id249out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id250out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id251out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id419out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id477out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id252out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id421out_output[106];

  HWOffsetFix<1,0,UNSIGNED> id253out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id254out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id255out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id478out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id424out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id256out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id425out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id257out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id258out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id259out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id479out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id428out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id260out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id493out_value;

  HWOffsetFix<1,0,UNSIGNED> id262out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id429out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id492out_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id264out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id430out_output[5];

  HWOffsetFix<1,0,UNSIGNED> id233out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id234out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id235out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id432out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id480out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id236out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id434out_output[106];

  HWOffsetFix<1,0,UNSIGNED> id237out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id238out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id239out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id481out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id437out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id240out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id438out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id241out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id242out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id243out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id482out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id441out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id244out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id491out_value;

  HWOffsetFix<1,0,UNSIGNED> id246out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id442out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id490out_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id248out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id443out_output[5];

  HWOffsetFix<1,0,UNSIGNED> id217out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id218out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id219out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id445out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id483out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id220out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id447out_output[106];

  HWOffsetFix<1,0,UNSIGNED> id221out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id222out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id223out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id484out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id450out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id224out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id451out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id225out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id226out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id227out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id485out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id454out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id228out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id489out_value;

  HWOffsetFix<1,0,UNSIGNED> id230out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id455out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id488out_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id232out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id314out_value;

  HWOffsetFix<1,0,UNSIGNED> id487out_value;

  HWOffsetFix<49,0,UNSIGNED> id311out_value;

  HWOffsetFix<48,0,UNSIGNED> id312out_count;
  HWOffsetFix<1,0,UNSIGNED> id312out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id312st_count;

  HWOffsetFix<1,0,UNSIGNED> id486out_value;

  HWOffsetFix<49,0,UNSIGNED> id317out_value;

  HWOffsetFix<48,0,UNSIGNED> id318out_count;
  HWOffsetFix<1,0,UNSIGNED> id318out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id318st_count;

  HWOffsetFix<48,0,UNSIGNED> id320out_run_cycle_count;

  HWOffsetFix<1,0,UNSIGNED> id321out_result[2];

  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits;
  const HWOffsetFix<33,0,UNSIGNED> c_hw_fix_33_0_uns_bits;
  const HWOffsetFix<33,0,UNSIGNED> c_hw_fix_33_0_uns_bits_1;
  const HWOffsetFix<33,0,UNSIGNED> c_hw_fix_33_0_uns_bits_2;
  const HWOffsetFix<33,0,UNSIGNED> c_hw_fix_33_0_uns_bits_3;
  const HWOffsetFix<33,0,UNSIGNED> c_hw_fix_33_0_uns_bits_4;
  const HWOffsetFix<32,0,UNSIGNED> c_hw_fix_32_0_uns_bits;
  const HWOffsetFix<32,0,UNSIGNED> c_hw_fix_32_0_uns_bits_1;
  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_undef;
  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits_1;
  const HWRawBits<160> c_hw_bit_160_undef;
  const HWOffsetFix<32,-24,TWOSCOMPLEMENT> c_hw_fix_32_n24_sgn_undef;
  const HWOffsetFix<32,-24,TWOSCOMPLEMENT> c_hw_fix_32_n24_sgn_bits;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_1;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_2;

  void execute0();
};

}

#endif /* MAXPOOLING00_H_ */
