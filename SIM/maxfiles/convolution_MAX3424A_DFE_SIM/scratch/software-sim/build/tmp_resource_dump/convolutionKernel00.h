#ifndef CONVOLUTIONKERNEL00_H_
#define CONVOLUTIONKERNEL00_H_

// #include "KernelManagerBlockSync.h"
#include "convolutionKernel00_exec1.h"
#include "convolutionKernel00_exec2.h"


namespace maxcompilersim {

class convolutionKernel00 : public KernelManagerBlockSync {
public:
  convolutionKernel00(const std::string &instance_name);

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
  HWOffsetFix<1,0,UNSIGNED> id1832out_value;

  HWOffsetFix<17,0,UNSIGNED> id1831out_value;

  HWOffsetFix<16,0,UNSIGNED> id2out_count;
  HWOffsetFix<1,0,UNSIGNED> id2out_wrap;

  HWOffsetFix<17,0,UNSIGNED> id2st_count;

  HWOffsetFix<17,0,UNSIGNED> id1830out_value;

  HWOffsetFix<16,0,UNSIGNED> id4out_count;
  HWOffsetFix<1,0,UNSIGNED> id4out_wrap;

  HWOffsetFix<17,0,UNSIGNED> id4st_count;

  HWOffsetFix<17,0,UNSIGNED> id1829out_value;

  HWOffsetFix<16,0,UNSIGNED> id6out_count;
  HWOffsetFix<1,0,UNSIGNED> id6out_wrap;

  HWOffsetFix<17,0,UNSIGNED> id6st_count;

  HWOffsetFix<16,0,UNSIGNED> id1712out_output[6];

  HWOffsetFix<16,0,UNSIGNED> id1828out_value;

  HWOffsetFix<1,0,UNSIGNED> id126out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1713out_output[5];

  HWOffsetFix<16,0,UNSIGNED> id1827out_value;

  HWOffsetFix<1,0,UNSIGNED> id128out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1826out_value;

  HWOffsetFix<1,0,UNSIGNED> id130out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id131out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id132out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id1723out_output[16];

  HWOffsetFix<1,0,UNSIGNED> id1812out_output[3];

  HWOffsetFix<1,0,UNSIGNED> id1404out_io_y01_force_disabled;

  HWOffsetFix<16,0,UNSIGNED> id1810out_output[2];

  HWOffsetFix<16,0,UNSIGNED> id133out_result[2];

  HWOffsetFix<2,0,UNSIGNED> id1718out_output[6];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1469out_dataa[3];

  HWOffsetFix<16,0,UNSIGNED> id1825out_value;

  HWOffsetFix<1,0,UNSIGNED> id8out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1824out_value;

  HWOffsetFix<1,0,UNSIGNED> id10out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id11out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1719out_output[2];

  HWOffsetFix<16,0,UNSIGNED> id1823out_value;

  HWOffsetFix<1,0,UNSIGNED> id13out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id14out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id15out_io_x01_force_disabled;

  HWRawBits<800> id18out_data;

  HWOffsetFix<1,0,UNSIGNED> id18st_read_next_cycle;
  HWRawBits<800> id18st_last_read_value;

  HWRawBits<32> id1720out_output[6];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1210out_result[8];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1467out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1202out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1203out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1219out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1204out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1205out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1220out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1227out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1468out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1206out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1207out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1221out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1208out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1209out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1222out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1228out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1231out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1721out_output[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1463out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1186out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1187out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1211out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1188out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1189out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1212out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1223out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1464out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1190out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1191out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1213out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1192out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1193out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1214out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1224out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1229out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1465out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1194out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1195out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1215out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1196out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1197out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1216out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1225out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1466out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1198out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1199out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1217out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1200out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1201out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1218out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1226out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1230out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1232out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1233out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1234out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1722out_output[4];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1388out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1724out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1389out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1811out_output[14];

  HWOffsetFix<19,0,UNSIGNED> id1508out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1809out_output[18];

  HWOffsetFix<19,2,UNSIGNED> id1512out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1384out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1822out_value;

  HWOffsetFix<16,0,UNSIGNED> id1386out_result[2];

  HWOffsetFix<19,0,UNSIGNED> id1515out_result[2];

  HWOffsetFix<19,2,UNSIGNED> id1519out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1396out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1821out_value;

  HWOffsetFix<16,0,UNSIGNED> id1398out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1434out_dataa[3];
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1434out_datab[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1390out_result[2];

  HWOffsetFix<2,0,UNSIGNED> id1733out_output[6];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1462out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1112out_result[8];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1460out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1104out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1105out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1121out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1106out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1107out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1122out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1129out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1461out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1108out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1109out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1123out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1110out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1111out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1124out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1130out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1133out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1734out_output[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1456out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1088out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1089out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1113out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1090out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1091out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1114out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1125out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1457out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1092out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1093out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1115out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1094out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1095out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1116out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1126out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1131out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1458out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1096out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1097out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1117out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1098out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1099out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1118out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1127out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1459out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1100out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1101out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1119out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1102out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1103out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1120out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1128out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1132out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1134out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1135out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1136out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1735out_output[4];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1364out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1737out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1365out_result[2];

  HWOffsetFix<19,0,UNSIGNED> id1547out_result[2];

  HWOffsetFix<19,2,UNSIGNED> id1551out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1360out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1820out_value;

  HWOffsetFix<16,0,UNSIGNED> id1362out_result[2];

  HWOffsetFix<19,0,UNSIGNED> id1554out_result[2];

  HWOffsetFix<19,2,UNSIGNED> id1558out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1372out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1819out_value;

  HWOffsetFix<16,0,UNSIGNED> id1374out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1433out_dataa[3];
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1433out_datab[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1366out_result[2];

  HWOffsetFix<2,0,UNSIGNED> id1746out_output[6];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1455out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1014out_result[8];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1453out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1006out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1007out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1023out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1008out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1009out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1024out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1031out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1454out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1010out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1011out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1025out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1012out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1013out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1026out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1032out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1035out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1747out_output[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1449out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id990out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id991out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1015out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id992out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id993out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1016out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1027out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1450out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id994out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id995out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1017out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id996out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id997out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1018out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1028out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1033out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1451out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id998out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id999out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1019out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1000out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1001out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1020out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1029out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1452out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1002out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1003out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1021out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1004out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1005out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1022out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1030out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1034out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1036out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1037out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1038out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1748out_output[4];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1340out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1750out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1341out_result[2];

  HWOffsetFix<19,0,UNSIGNED> id1586out_result[2];

  HWOffsetFix<19,2,UNSIGNED> id1590out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1336out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1818out_value;

  HWOffsetFix<16,0,UNSIGNED> id1338out_result[2];

  HWOffsetFix<19,0,UNSIGNED> id1593out_result[2];

  HWOffsetFix<19,2,UNSIGNED> id1597out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1348out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1817out_value;

  HWOffsetFix<16,0,UNSIGNED> id1350out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1432out_dataa[3];
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1432out_datab[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1342out_result[2];

  HWOffsetFix<2,0,UNSIGNED> id1759out_output[6];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1448out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id916out_result[8];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1446out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id908out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id909out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id925out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id910out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id911out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id926out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id933out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1447out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id912out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id913out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id927out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id914out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id915out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id928out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id934out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id937out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1760out_output[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1442out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id892out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id893out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id917out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id894out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id895out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id918out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id929out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1443out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id896out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id897out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id919out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id898out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id899out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id920out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id930out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id935out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1444out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id900out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id901out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id921out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id902out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id903out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id922out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id931out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1445out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id904out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id905out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id923out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id906out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id907out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id924out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id932out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id936out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id938out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id939out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id940out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1761out_output[4];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1316out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1763out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1317out_result[2];

  HWOffsetFix<19,0,UNSIGNED> id1625out_result[2];

  HWOffsetFix<19,2,UNSIGNED> id1629out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1312out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1816out_value;

  HWOffsetFix<16,0,UNSIGNED> id1314out_result[2];

  HWOffsetFix<19,0,UNSIGNED> id1632out_result[2];

  HWOffsetFix<19,2,UNSIGNED> id1636out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1324out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1815out_value;

  HWOffsetFix<16,0,UNSIGNED> id1326out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1431out_dataa[3];
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1431out_datab[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1318out_result[2];

  HWOffsetFix<2,0,UNSIGNED> id1772out_output[6];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1441out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id818out_result[8];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1439out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id810out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id811out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id827out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id812out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id813out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id828out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id835out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1440out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id814out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id815out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id829out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id816out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id817out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id830out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id836out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id839out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1773out_output[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1435out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id794out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id795out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id819out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id796out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id797out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id820out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id831out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1436out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id798out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id799out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id821out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id800out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id801out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id822out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id832out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id837out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1437out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id802out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id803out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id823out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id804out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id805out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id824out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id833out_result[2];

  HWOffsetFix<64,0,TWOSCOMPLEMENT> id1438out_dataa[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id806out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id807out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id825out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id808out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id809out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id826out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id834out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id838out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id840out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id841out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id842out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1774out_output[4];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1292out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1776out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1293out_result[2];

  HWOffsetFix<19,0,UNSIGNED> id1664out_result[2];

  HWOffsetFix<19,2,UNSIGNED> id1668out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1288out_result[2];

  HWOffsetFix<5,0,UNSIGNED> id1785out_output[2];

  HWOffsetFix<19,0,UNSIGNED> id1671out_result[2];

  HWOffsetFix<19,2,UNSIGNED> id1675out_result[2];

  HWOffsetFix<16,0,UNSIGNED> id1300out_result[2];

  HWOffsetFix<5,0,UNSIGNED> id1786out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1430out_dataa[3];
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1430out_datab[3];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1294out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id1417out_io_y11_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id69out_io_x11_force_disabled;

  HWRawBits<800> id72out_data;

  HWOffsetFix<1,0,UNSIGNED> id72st_read_next_cycle;
  HWRawBits<800> id72st_last_read_value;

  HWRawBits<32> id1788out_output[6];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1259out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1251out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1252out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1268out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1253out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1254out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1269out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1276out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1255out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1256out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1270out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1257out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1258out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1271out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1277out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1280out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1789out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1235out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1236out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1260out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1237out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1238out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1261out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1272out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1239out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1240out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1262out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1241out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1242out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1263out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1273out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1278out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1243out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1244out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1264out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1245out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1246out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1265out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1274out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1247out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1248out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1266out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1249out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1250out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1267out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1275out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1279out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1281out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1282out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1283out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1790out_output[4];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1400out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1792out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1401out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1402out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1161out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1153out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1154out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1170out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1155out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1156out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1171out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1178out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1157out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1158out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1172out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1159out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1160out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1173out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1179out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1182out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1793out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1137out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1138out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1162out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1139out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1140out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1163out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1174out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1141out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1142out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1164out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1143out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1144out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1165out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1175out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1180out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1145out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1146out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1166out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1147out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1148out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1167out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1176out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1149out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1150out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1168out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1151out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1152out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1169out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1177out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1181out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1183out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1184out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1185out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1794out_output[4];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1376out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1796out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1377out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1378out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1063out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1055out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1056out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1072out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1057out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1058out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1073out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1080out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1059out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1060out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1074out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1061out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1062out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1075out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1081out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1084out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1797out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1039out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1040out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1064out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1041out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1042out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1065out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1076out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1043out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1044out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1066out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1045out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1046out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1067out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1077out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1082out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1047out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1048out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1068out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1049out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1050out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1069out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1078out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1051out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1052out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1070out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1053out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1054out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1071out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1079out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1083out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1085out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1086out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1087out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1798out_output[4];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1352out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1800out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1353out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1354out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id965out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id957out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id958out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id974out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id959out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id960out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id975out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id982out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id961out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id962out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id976out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id963out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id964out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id977out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id983out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id986out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1801out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id941out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id942out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id966out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id943out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id944out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id967out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id978out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id945out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id946out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id968out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id947out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id948out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id969out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id979out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id984out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id949out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id950out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id970out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id951out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id952out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id971out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id980out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id953out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id954out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id972out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id955out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id956out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id973out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id981out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id985out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id987out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id988out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id989out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1802out_output[4];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1328out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1804out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1329out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1330out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id867out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id859out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id860out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id876out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id861out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id862out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id877out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id884out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id863out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id864out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id878out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id865out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id866out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id879out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id885out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id888out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1805out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id843out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id844out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id868out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id845out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id846out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id869out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id880out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id847out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id848out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id870out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id849out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id850out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id871out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id881out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id886out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id851out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id852out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id872out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id853out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id854out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id873out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id882out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id855out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id856out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id874out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id857out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id858out_result[8];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id875out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id883out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id887out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id889out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id890out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id891out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1806out_output[4];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1304out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1808out_output[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1305out_result[2];

  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1306out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id1474out_value;

  HWOffsetFix<1,0,UNSIGNED> id1814out_value;

  HWOffsetFix<49,0,UNSIGNED> id1471out_value;

  HWOffsetFix<48,0,UNSIGNED> id1472out_count;
  HWOffsetFix<1,0,UNSIGNED> id1472out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id1472st_count;

  HWOffsetFix<1,0,UNSIGNED> id1813out_value;

  HWOffsetFix<49,0,UNSIGNED> id1477out_value;

  HWOffsetFix<48,0,UNSIGNED> id1478out_count;
  HWOffsetFix<1,0,UNSIGNED> id1478out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id1478st_count;

  HWOffsetFix<48,0,UNSIGNED> id1480out_run_cycle_count;

  HWOffsetFix<1,0,UNSIGNED> id1481out_result[2];

  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits_1;
  const HWOffsetFix<17,0,UNSIGNED> c_hw_fix_17_0_uns_bits_2;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_undef;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_bits;
  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_undef;
  const HWOffsetFix<2,0,UNSIGNED> c_hw_fix_2_0_uns_undef;
  const HWOffsetFix<64,0,TWOSCOMPLEMENT> c_hw_fix_64_0_sgn_undef;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_bits_1;
  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits_1;
  const HWRawBits<800> c_hw_bit_800_undef;
  const HWRawBits<32> c_hw_bit_32_undef;
  const HWOffsetFix<32,-24,TWOSCOMPLEMENT> c_hw_fix_32_n24_sgn_undef;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_bits_2;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_bits_3;
  const HWOffsetFix<16,0,UNSIGNED> c_hw_fix_16_0_uns_bits_4;
  const HWOffsetFix<5,0,UNSIGNED> c_hw_fix_5_0_uns_undef;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_1;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_2;

  convolutionKernel00Block1Vars execute0();
  convolutionKernel00Block2Vars execute1(const convolutionKernel00Block1Vars &in_vars);
  void execute2(const convolutionKernel00Block2Vars &in_vars);
};

}

#endif /* CONVOLUTIONKERNEL00_H_ */
