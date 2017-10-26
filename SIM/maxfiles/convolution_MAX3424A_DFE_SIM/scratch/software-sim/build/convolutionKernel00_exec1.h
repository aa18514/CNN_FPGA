#ifndef CONVOLUTIONKERNEL00_EXEC1_H_
#define CONVOLUTIONKERNEL00_EXEC1_H_

// #include "HWTypes.h"

namespace maxcompilersim {

struct convolutionKernel00Block1Vars {
  HWOffsetFix<1,0,UNSIGNED> id1406out_result;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id793out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id68out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id751out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id52out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id756out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id54out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id761out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id56out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id766out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id58out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id772out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id60out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id777out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id62out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id782out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id64out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id787out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id66out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id667out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id20out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id672out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id22out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id677out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id24out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id682out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id26out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id688out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id28out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id693out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id30out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id698out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id32out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id703out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id34out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id709out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id36out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id714out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id38out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id719out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id40out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id724out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id42out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id730out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id44out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id735out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id46out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id740out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id48out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id745out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id50out_output;
  HWRawBits<32> id1415out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id661out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id619out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id624out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id629out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id634out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id640out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id645out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id650out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id655out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id535out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id540out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id545out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id550out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id556out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id561out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id566out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id571out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id577out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id582out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id587out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id592out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id598out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id603out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id608out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id613out_o;
  HWRawBits<32> id1413out_output;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id529out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id487out_o;
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id492out_o;

};

};

#endif /* CONVOLUTIONKERNEL00_EXEC1_H_ */
