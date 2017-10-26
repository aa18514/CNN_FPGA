#ifndef CONVOLUTIONKERNEL10_H_
#define CONVOLUTIONKERNEL10_H_

// #include "KernelManagerBlockSync.h"


namespace maxcompilersim {

class convolutionKernel10 : public KernelManagerBlockSync {
public:
  convolutionKernel10(const std::string &instance_name);

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
  HWOffsetFix<1,0,UNSIGNED> id678out_value;

  HWOffsetFix<17,0,UNSIGNED> id677out_value;

  HWOffsetFix<16,0,UNSIGNED> id2out_count;
  HWOffsetFix<1,0,UNSIGNED> id2out_wrap;

  HWOffsetFix<17,0,UNSIGNED> id2st_count;

  HWOffsetFix<17,0,UNSIGNED> id676out_value;

  HWOffsetFix<16,0,UNSIGNED> id4out_count;
  HWOffsetFix<1,0,UNSIGNED> id4out_wrap;

  HWOffsetFix<17,0,UNSIGNED> id4st_count;

  HWOffsetFix<17,0,UNSIGNED> id675out_value;

  HWOffsetFix<16,0,UNSIGNED> id6out_count;
  HWOffsetFix<1,0,UNSIGNED> id6out_wrap;

  HWOffsetFix<17,0,UNSIGNED> id6st_count;

  HWOffsetFix<16,0,UNSIGNED> id674out_value;

  HWOffsetFix<1,0,UNSIGNED> id306out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id595out_output[2];

  HWOffsetFix<16,0,UNSIGNED> id673out_value;

  HWOffsetFix<1,0,UNSIGNED> id308out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id672out_value;

  HWOffsetFix<1,0,UNSIGNED> id310out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id311out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id312out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id628out_output[20];

  HWOffsetFix<1,0,UNSIGNED> id664out_output[3];

  HWOffsetFix<1,0,UNSIGNED> id528out_io_y01_force_disabled;

  HWOffsetFix<16,0,UNSIGNED> id671out_value;

  HWOffsetFix<16,0,UNSIGNED> id314out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id597out_output[2];

  HWOffsetFix<16,0,UNSIGNED> id317out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id598out_output[2];

  HWOffsetFix<19,3,UNSIGNED> id560out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id320out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id600out_output[5];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id543out_dataa[3];

  HWOffsetFix<16,0,UNSIGNED> id670out_value;

  HWOffsetFix<1,0,UNSIGNED> id184out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id602out_output[8];

  HWOffsetFix<16,0,UNSIGNED> id669out_value;

  HWOffsetFix<1,0,UNSIGNED> id8out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id668out_value;

  HWOffsetFix<1,0,UNSIGNED> id10out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id11out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id667out_value;

  HWOffsetFix<1,0,UNSIGNED> id13out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id14out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id15out_io_x01_force_disabled;

  HWRawBits<1280> id18out_data;

  HWOffsetFix<1,0,UNSIGNED> id18st_read_next_cycle;
  HWRawBits<1280> id18st_last_read_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id283out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id442out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id289out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id443out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id454out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id295out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id444out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id301out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id445out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id455out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id460out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id626out_output[3];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id539out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id187out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id426out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id193out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id427out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id446out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id199out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id428out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id205out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id429out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id447out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id456out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id540out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id211out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id430out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id217out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id431out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id448out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id223out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id432out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id229out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id433out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id449out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id457out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id461out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id541out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id235out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id434out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id241out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id435out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id450out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id247out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id436out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id253out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id437out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id451out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id458out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id542out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id259out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id438out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id265out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id439out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id452out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id271out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id440out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id277out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id441out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id453out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id459out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id462out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id463out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id464out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id627out_output[99];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id512out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id629out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id513out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id663out_output[2];

  HWOffsetFix<19,2,UNSIGNED> id584out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id508out_result[2];

  HWOffsetFix<10,0,UNSIGNED> id636out_output[19];

  HWOffsetFix<19,2,UNSIGNED> id588out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id520out_result[2];

  HWOffsetFix<10,0,UNSIGNED> id637out_output[19];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id538out_dataa[3];
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id538out_datab[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id514out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id533out_io_y11_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id99out_io_x11_force_disabled;

  HWRawBits<1280> id102out_data;

  HWOffsetFix<1,0,UNSIGNED> id102st_read_next_cycle;
  HWRawBits<1280> id102st_last_read_value;

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id286out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id481out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id292out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id482out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id493out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id298out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id483out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id304out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id484out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id494out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id499out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id659out_output[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id190out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id465out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id196out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id466out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id485out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id202out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id467out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id208out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id468out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id486out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id495out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id214out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id469out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id220out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id470out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id487out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id226out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id471out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id232out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id472out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id488out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id496out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id500out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id238out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id473out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id244out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id474out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id489out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id250out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id475out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id256out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id476out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id490out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id497out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id262out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id477out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id268out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id478out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id491out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id274out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id479out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id280out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id480out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id492out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id498out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id501out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id502out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id503out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id660out_output[99];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id524out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id662out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id525out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id526out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id548out_value;

  HWOffsetFix<1,0,UNSIGNED> id666out_value;

  HWOffsetFix<49,0,UNSIGNED> id545out_value;

  HWOffsetFix<48,0,UNSIGNED> id546out_count;
  HWOffsetFix<1,0,UNSIGNED> id546out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id546st_count;

  HWOffsetFix<1,0,UNSIGNED> id665out_value;

  HWOffsetFix<49,0,UNSIGNED> id551out_value;

  HWOffsetFix<48,0,UNSIGNED> id552out_count;
  HWOffsetFix<1,0,UNSIGNED> id552out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id552st_count;

  HWOffsetFix<48,0,UNSIGNED> id554out_run_cycle_count;

  HWOffsetFix<1,0,UNSIGNED> id555out_result[2];

  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits_1;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits_2;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits_3;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits_4;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_bits;
  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_undef;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_bits_1;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_bits_2;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_undef;
  const HWOffsetFix<64,0,TWOSCOMPLEMENT> c_hw_fix_64_0_sgn_undef;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_bits_3;
  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits_1;
  const HWRawBits<1280> c_hw_bit_1280_undef;
  const HWOffsetFix<32,-24,TWOSCOMPLEMENT> c_hw_fix_32_n24_sgn_undef;
  const HWOffsetFix<10,0,UNSIGNED> c_hw_fix_10_0_uns_undef;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_1;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_2;

  void execute0();
};

}

#endif /* CONVOLUTIONKERNEL10_H_ */
