#ifndef FULLY_CONNECTED01_H_
#define FULLY_CONNECTED01_H_

// #include "KernelManagerBlockSync.h"


namespace maxcompilersim {

class fully_connected01 : public KernelManagerBlockSync {
public:
  fully_connected01(const std::string &instance_name);

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
  HWOffsetFix<1,0,UNSIGNED> id287out_value;

  HWOffsetFix<17,0,UNSIGNED> id286out_value;

  HWOffsetFix<16,0,UNSIGNED> id2out_count;
  HWOffsetFix<1,0,UNSIGNED> id2out_wrap;

  HWOffsetFix<17,0,UNSIGNED> id2st_count;

  HWOffsetFix<1,0,UNSIGNED> id239out_output[4];

  HWOffsetFix<17,0,UNSIGNED> id285out_value;

  HWOffsetFix<16,0,UNSIGNED> id4out_count;
  HWOffsetFix<1,0,UNSIGNED> id4out_wrap;

  HWOffsetFix<17,0,UNSIGNED> id4st_count;

  HWOffsetFix<16,0,UNSIGNED> id284out_value;

  HWOffsetFix<1,0,UNSIGNED> id96out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id240out_output[18];

  HWOffsetFix<1,0,UNSIGNED> id134out_io_y01_force_disabled;

  HWOffsetFix<16,0,UNSIGNED> id243out_output[3];

  HWOffsetFix<16,0,UNSIGNED> id273out_output[2];

  HWOffsetFix<16,0,UNSIGNED> id283out_value;

  HWOffsetFix<1,0,UNSIGNED> id98out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id282out_value;

  HWOffsetFix<1,0,UNSIGNED> id100out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id101out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id242out_output[488];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id197out_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id104out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id264out_output[12];

  HWOffsetFix<19,4,UNSIGNED> id201out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id89out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id183out_dataa[3];

  HWOffsetFix<16,0,UNSIGNED> id281out_value;

  HWOffsetFix<1,0,UNSIGNED> id6out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id7out_io_x01_force_disabled;

  HWRawBits<320> id10out_data;

  HWOffsetFix<1,0,UNSIGNED> id10st_read_next_cycle;
  HWRawBits<320> id10st_last_read_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id113out_result[8];

  HWOffsetFix<19,4,UNSIGNED> id205out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id93out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id184out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id114out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id119out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id263out_output[3];

  HWOffsetFix<19,4,UNSIGNED> id209out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id57out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id175out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id105out_result[8];

  HWOffsetFix<19,4,UNSIGNED> id213out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id61out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id176out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id106out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id115out_result[2];

  HWOffsetFix<19,4,UNSIGNED> id217out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id65out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id177out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id107out_result[8];

  HWOffsetFix<19,4,UNSIGNED> id221out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id69out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id178out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id108out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id116out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id120out_result[2];

  HWOffsetFix<19,4,UNSIGNED> id225out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id73out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id179out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id109out_result[8];

  HWOffsetFix<19,4,UNSIGNED> id229out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id77out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id180out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id110out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id117out_result[2];

  HWOffsetFix<19,4,UNSIGNED> id233out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id81out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id181out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id111out_result[8];

  HWOffsetFix<19,4,UNSIGNED> id237out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id85out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id182out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id112out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id118out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id121out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id122out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id123out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id124out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id274out_output[14];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id174out_dataa[3];
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id174out_datab[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id127out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id280out_value;

  HWOffsetFix<1,0,UNSIGNED> id130out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id267out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id279out_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id132out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id170out_io_y11_force_disabled;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id269out_output[488];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id198out_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id140out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id271out_output[12];

  HWOffsetFix<1,0,UNSIGNED> id31out_io_x11_force_disabled;

  HWRawBits<320> id34out_data;

  HWOffsetFix<1,0,UNSIGNED> id34st_read_next_cycle;
  HWRawBits<320> id34st_last_read_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id149out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id150out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id155out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id270out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id141out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id142out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id151out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id143out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id144out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id152out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id156out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id145out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id146out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id153out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id147out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id148out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id154out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id157out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id158out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id159out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id160out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id163out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id278out_value;

  HWOffsetFix<1,0,UNSIGNED> id166out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id272out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id277out_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id168out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id189out_value;

  HWOffsetFix<1,0,UNSIGNED> id276out_value;

  HWOffsetFix<49,0,UNSIGNED> id186out_value;

  HWOffsetFix<48,0,UNSIGNED> id187out_count;
  HWOffsetFix<1,0,UNSIGNED> id187out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id187st_count;

  HWOffsetFix<1,0,UNSIGNED> id275out_value;

  HWOffsetFix<49,0,UNSIGNED> id192out_value;

  HWOffsetFix<48,0,UNSIGNED> id193out_count;
  HWOffsetFix<1,0,UNSIGNED> id193out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id193st_count;

  HWOffsetFix<48,0,UNSIGNED> id195out_run_cycle_count;

  HWOffsetFix<1,0,UNSIGNED> id196out_result[2];

  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits_1;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits_2;
  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_undef;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits_3;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_bits;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_undef;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_bits_1;
  const HWOffsetFix<32,-24,TWOSCOMPLEMENT> c_hw_fix_32_n24_sgn_undef;
  const HWOffsetFix<32,-24,TWOSCOMPLEMENT> c_hw_fix_32_n24_sgn_bits;
  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits_1;
  const HWRawBits<320> c_hw_bit_320_undef;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_1;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_2;

  void execute0();
};

}

#endif /* FULLY_CONNECTED01_H_ */
