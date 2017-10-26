#ifndef MAXPOOLING10_H_
#define MAXPOOLING10_H_

// #include "KernelManagerBlockSync.h"


namespace maxcompilersim {

class maxpooling10 : public KernelManagerBlockSync {
public:
  maxpooling10(const std::string &instance_name);

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
  HWOffsetFix<1,0,UNSIGNED> id159out_value;

  HWOffsetFix<33,0,UNSIGNED> id158out_value;

  HWOffsetFix<32,0,UNSIGNED> id2out_count;
  HWOffsetFix<1,0,UNSIGNED> id2out_wrap;

  HWOffsetFix<33,0,UNSIGNED> id2st_count;

  HWOffsetFix<33,0,UNSIGNED> id157out_value;

  HWOffsetFix<32,0,UNSIGNED> id4out_count;
  HWOffsetFix<1,0,UNSIGNED> id4out_wrap;

  HWOffsetFix<33,0,UNSIGNED> id4st_count;

  HWOffsetFix<33,0,UNSIGNED> id156out_value;

  HWOffsetFix<32,0,UNSIGNED> id6out_count;
  HWOffsetFix<1,0,UNSIGNED> id6out_wrap;

  HWOffsetFix<33,0,UNSIGNED> id6st_count;

  HWOffsetFix<33,0,UNSIGNED> id155out_value;

  HWOffsetFix<32,0,UNSIGNED> id8out_count;
  HWOffsetFix<1,0,UNSIGNED> id8out_wrap;

  HWOffsetFix<33,0,UNSIGNED> id8st_count;

  HWOffsetFix<33,0,UNSIGNED> id154out_value;

  HWOffsetFix<32,0,UNSIGNED> id10out_count;
  HWOffsetFix<1,0,UNSIGNED> id10out_wrap;

  HWOffsetFix<33,0,UNSIGNED> id10st_count;

  HWOffsetFix<32,0,UNSIGNED> id153out_value;

  HWOffsetFix<1,0,UNSIGNED> id12out_result[2];

  HWOffsetFix<32,0,UNSIGNED> id152out_value;

  HWOffsetFix<1,0,UNSIGNED> id14out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id15out_result[2];

  HWOffsetFix<32,0,UNSIGNED> id151out_value;

  HWOffsetFix<1,0,UNSIGNED> id17out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id106out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id18out_result[2];

  HWOffsetFix<32,0,UNSIGNED> id150out_value;

  HWOffsetFix<1,0,UNSIGNED> id20out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id107out_output[3];

  HWOffsetFix<1,0,UNSIGNED> id21out_result[2];

  HWOffsetFix<32,0,UNSIGNED> id149out_value;

  HWOffsetFix<1,0,UNSIGNED> id23out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id108out_output[4];

  HWOffsetFix<1,0,UNSIGNED> id24out_result[2];

  HWOffsetFix<32,0,UNSIGNED> id148out_value;

  HWOffsetFix<1,0,UNSIGNED> id26out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id109out_output[5];

  HWOffsetFix<1,0,UNSIGNED> id27out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id56out_io_y01_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id28out_io_x01_force_disabled;

  HWRawBits<32> id30out_data;

  HWOffsetFix<1,0,UNSIGNED> id30st_read_next_cycle;
  HWRawBits<32> id30st_last_read_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id110out_output[51];

  HWOffsetFix<1,0,UNSIGNED> id40out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id41out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id42out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id112out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id136out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id43out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id114out_output[548];

  HWOffsetFix<1,0,UNSIGNED> id44out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id45out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id46out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id137out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id117out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id47out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id118out_output[48];

  HWOffsetFix<1,0,UNSIGNED> id48out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id49out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id50out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id138out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id121out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id51out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id147out_value;

  HWOffsetFix<1,0,UNSIGNED> id53out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id122out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id146out_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id55out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id89out_io_y11_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id61out_io_x11_force_disabled;

  HWRawBits<32> id63out_data;

  HWOffsetFix<1,0,UNSIGNED> id63st_read_next_cycle;
  HWRawBits<32> id63st_last_read_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id123out_output[51];

  HWOffsetFix<1,0,UNSIGNED> id73out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id74out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id75out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id125out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id139out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id76out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id127out_output[548];

  HWOffsetFix<1,0,UNSIGNED> id77out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id78out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id79out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id140out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id130out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id80out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id131out_output[48];

  HWOffsetFix<1,0,UNSIGNED> id81out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id82out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id83out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id141out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id134out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id84out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id145out_value;

  HWOffsetFix<1,0,UNSIGNED> id86out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id135out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id144out_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id88out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id98out_value;

  HWOffsetFix<1,0,UNSIGNED> id143out_value;

  HWOffsetFix<49,0,UNSIGNED> id95out_value;

  HWOffsetFix<48,0,UNSIGNED> id96out_count;
  HWOffsetFix<1,0,UNSIGNED> id96out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id96st_count;

  HWOffsetFix<1,0,UNSIGNED> id142out_value;

  HWOffsetFix<49,0,UNSIGNED> id101out_value;

  HWOffsetFix<48,0,UNSIGNED> id102out_count;
  HWOffsetFix<1,0,UNSIGNED> id102out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id102st_count;

  HWOffsetFix<48,0,UNSIGNED> id104out_run_cycle_count;

  HWOffsetFix<1,0,UNSIGNED> id105out_result[2];

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
  const HWRawBits<32> c_hw_bit_32_undef;
  const HWOffsetFix<32,-24,TWOSCOMPLEMENT> c_hw_fix_32_n24_sgn_undef;
  const HWOffsetFix<32,-24,TWOSCOMPLEMENT> c_hw_fix_32_n24_sgn_bits;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_1;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_2;

  void execute0();
};

}

#endif /* MAXPOOLING10_H_ */
