#ifndef FULLY_CONNECTED11_H_
#define FULLY_CONNECTED11_H_

// #include "KernelManagerBlockSync.h"


namespace maxcompilersim {

class fully_connected11 : public KernelManagerBlockSync {
public:
  fully_connected11(const std::string &instance_name);

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
  HWOffsetFix<1,0,UNSIGNED> id323out_value;

  HWOffsetFix<17,0,UNSIGNED> id322out_value;

  HWOffsetFix<16,0,UNSIGNED> id2out_count;
  HWOffsetFix<1,0,UNSIGNED> id2out_wrap;

  HWOffsetFix<17,0,UNSIGNED> id2st_count;

  HWOffsetFix<1,0,UNSIGNED> id262out_output[4];

  HWOffsetFix<17,0,UNSIGNED> id321out_value;

  HWOffsetFix<16,0,UNSIGNED> id4out_count;
  HWOffsetFix<1,0,UNSIGNED> id4out_wrap;

  HWOffsetFix<17,0,UNSIGNED> id4st_count;

  HWOffsetFix<16,0,UNSIGNED> id320out_value;

  HWOffsetFix<1,0,UNSIGNED> id96out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id319out_value;

  HWOffsetFix<1,0,UNSIGNED> id98out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id99out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id263out_output[24];

  HWOffsetFix<1,0,UNSIGNED> id137out_io_y01_force_disabled;

  HWOffsetFix<16,0,UNSIGNED> id267out_output[2];

  HWOffsetFix<16,0,UNSIGNED> id309out_output[2];

  HWOffsetFix<16,0,UNSIGNED> id318out_value;

  HWOffsetFix<1,0,UNSIGNED> id101out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id265out_output[2];

  HWOffsetFix<16,0,UNSIGNED> id317out_value;

  HWOffsetFix<1,0,UNSIGNED> id103out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id104out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id266out_output[4];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id200out_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id107out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id298out_output[9];

  HWOffsetFix<20,1,UNSIGNED> id205out_result[2];

  HWOffsetFix<21,1,UNSIGNED> id206out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id89out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id186out_dataa[3];

  HWOffsetFix<16,0,UNSIGNED> id316out_value;

  HWOffsetFix<1,0,UNSIGNED> id6out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id7out_io_x01_force_disabled;

  HWRawBits<320> id10out_data;

  HWOffsetFix<1,0,UNSIGNED> id10st_read_next_cycle;
  HWRawBits<320> id10st_last_read_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id116out_result[8];

  HWOffsetFix<20,1,UNSIGNED> id211out_result[2];

  HWOffsetFix<21,1,UNSIGNED> id212out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id93out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id187out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id117out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id122out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id297out_output[3];

  HWOffsetFix<20,1,UNSIGNED> id217out_result[2];

  HWOffsetFix<21,1,UNSIGNED> id218out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id57out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id178out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id108out_result[8];

  HWOffsetFix<20,1,UNSIGNED> id223out_result[2];

  HWOffsetFix<21,1,UNSIGNED> id224out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id61out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id179out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id109out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id118out_result[2];

  HWOffsetFix<20,1,UNSIGNED> id229out_result[2];

  HWOffsetFix<21,1,UNSIGNED> id230out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id65out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id180out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id110out_result[8];

  HWOffsetFix<20,1,UNSIGNED> id235out_result[2];

  HWOffsetFix<21,1,UNSIGNED> id236out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id69out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id181out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id111out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id119out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id123out_result[2];

  HWOffsetFix<20,1,UNSIGNED> id241out_result[2];

  HWOffsetFix<21,1,UNSIGNED> id242out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id73out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id182out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id112out_result[8];

  HWOffsetFix<20,1,UNSIGNED> id247out_result[2];

  HWOffsetFix<21,1,UNSIGNED> id248out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id77out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id183out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id113out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id120out_result[2];

  HWOffsetFix<20,1,UNSIGNED> id253out_result[2];

  HWOffsetFix<21,1,UNSIGNED> id254out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id81out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id184out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id114out_result[8];

  HWOffsetFix<20,1,UNSIGNED> id259out_result[2];

  HWOffsetFix<21,1,UNSIGNED> id260out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id85out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id185out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id115out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id121out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id124out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id125out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id126out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id127out_result[2];

  HWOffsetFix<4,0,UNSIGNED> id301out_output[15];

  HWOffsetFix<4,0,UNSIGNED> id302out_output[15];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id177out_dataa[3];
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id177out_datab[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id130out_result[2];

  HWFloat<8,24> id131out_o[7];

  HWFloat<8,24> id315out_value;

  HWOffsetFix<1,0,UNSIGNED> id133out_result[3];

  HWFloat<8,24> id303out_output[3];

  HWFloat<8,24> id314out_value;

  HWFloat<8,24> id135out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id173out_io_y11_force_disabled;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id201out_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id143out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id307out_output[9];

  HWOffsetFix<1,0,UNSIGNED> id31out_io_x11_force_disabled;

  HWRawBits<320> id34out_data;

  HWOffsetFix<1,0,UNSIGNED> id34st_read_next_cycle;
  HWRawBits<320> id34st_last_read_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id152out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id153out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id158out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id306out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id144out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id145out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id154out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id146out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id147out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id155out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id159out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id148out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id149out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id156out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id150out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id151out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id157out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id160out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id161out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id162out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id163out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id166out_result[2];

  HWFloat<8,24> id167out_o[7];

  HWFloat<8,24> id313out_value;

  HWOffsetFix<1,0,UNSIGNED> id169out_result[3];

  HWFloat<8,24> id308out_output[3];

  HWFloat<8,24> id312out_value;

  HWFloat<8,24> id171out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id192out_value;

  HWOffsetFix<1,0,UNSIGNED> id311out_value;

  HWOffsetFix<49,0,UNSIGNED> id189out_value;

  HWOffsetFix<48,0,UNSIGNED> id190out_count;
  HWOffsetFix<1,0,UNSIGNED> id190out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id190st_count;

  HWOffsetFix<1,0,UNSIGNED> id310out_value;

  HWOffsetFix<49,0,UNSIGNED> id195out_value;

  HWOffsetFix<48,0,UNSIGNED> id196out_count;
  HWOffsetFix<1,0,UNSIGNED> id196out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id196st_count;

  HWOffsetFix<48,0,UNSIGNED> id198out_run_cycle_count;

  HWOffsetFix<1,0,UNSIGNED> id199out_result[2];

  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits_1;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits_2;
  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_undef;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits_3;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_bits;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_bits_1;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_undef;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_bits_2;
  const HWOffsetFix<32,-24,TWOSCOMPLEMENT> c_hw_fix_32_n24_sgn_bits;
  const HWOffsetFix<32,-24,TWOSCOMPLEMENT> c_hw_fix_32_n24_sgn_undef;
  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits_1;
  const HWRawBits<320> c_hw_bit_320_undef;
  const HWOffsetFix<4,0,UNSIGNED> c_hw_fix_4_0_uns_undef;
  const HWFloat<8,24> c_hw_flt_8_24_bits;
  const HWFloat<8,24> c_hw_flt_8_24_undef;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_1;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_2;

  void execute0();
};

}

#endif /* FULLY_CONNECTED11_H_ */
