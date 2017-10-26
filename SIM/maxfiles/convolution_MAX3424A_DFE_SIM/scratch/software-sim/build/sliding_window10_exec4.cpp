#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "sliding_window10_exec4.h"
//#include "sliding_window10_exec5.h"
//#include "sliding_window10.h"

namespace maxcompilersim {

sliding_window10Block5Vars sliding_window10::execute4(const sliding_window10Block4Vars &in_vars) {
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1218out_output;

  { // Node ID: 1218 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1218in_input = id1217out_result[getCycle()%2];

    id1218out_output = id1218in_input;
  }
  { // Node ID: 1220 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1220in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1220in_option0 = in_vars.id1219out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1220in_option1 = id1218out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1220x_1;

    switch((id1220in_sel.getValueAsLong())) {
      case 0l:
        id1220x_1 = id1220in_option0;
        break;
      case 1l:
        id1220x_1 = id1220in_option1;
        break;
      default:
        id1220x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1220out_result[(getCycle()+1)%2] = (id1220x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1221out_output;

  { // Node ID: 1221 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1221in_input = id1220out_result[getCycle()%2];

    id1221out_output = id1221in_input;
  }
  { // Node ID: 1223 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1223in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1223in_option0 = in_vars.id1222out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1223in_option1 = id1221out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1223x_1;

    switch((id1223in_sel.getValueAsLong())) {
      case 0l:
        id1223x_1 = id1223in_option0;
        break;
      case 1l:
        id1223x_1 = id1223in_option1;
        break;
      default:
        id1223x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1223out_result[(getCycle()+1)%2] = (id1223x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1224out_output;

  { // Node ID: 1224 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1224in_input = id1223out_result[getCycle()%2];

    id1224out_output = id1224in_input;
  }
  { // Node ID: 1226 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1226in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1226in_option0 = in_vars.id1225out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1226in_option1 = id1224out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1226x_1;

    switch((id1226in_sel.getValueAsLong())) {
      case 0l:
        id1226x_1 = id1226in_option0;
        break;
      case 1l:
        id1226x_1 = id1226in_option1;
        break;
      default:
        id1226x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1226out_result[(getCycle()+1)%2] = (id1226x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1227out_output;

  { // Node ID: 1227 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1227in_input = id1226out_result[getCycle()%2];

    id1227out_output = id1227in_input;
  }
  { // Node ID: 1229 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1229in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1229in_option0 = in_vars.id1228out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1229in_option1 = id1227out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1229x_1;

    switch((id1229in_sel.getValueAsLong())) {
      case 0l:
        id1229x_1 = id1229in_option0;
        break;
      case 1l:
        id1229x_1 = id1229in_option1;
        break;
      default:
        id1229x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1229out_result[(getCycle()+1)%2] = (id1229x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1230out_output;

  { // Node ID: 1230 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1230in_input = id1229out_result[getCycle()%2];

    id1230out_output = id1230in_input;
  }
  { // Node ID: 1232 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1232in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1232in_option0 = in_vars.id1231out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1232in_option1 = id1230out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1232x_1;

    switch((id1232in_sel.getValueAsLong())) {
      case 0l:
        id1232x_1 = id1232in_option0;
        break;
      case 1l:
        id1232x_1 = id1232in_option1;
        break;
      default:
        id1232x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1232out_result[(getCycle()+1)%2] = (id1232x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1233out_output;

  { // Node ID: 1233 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1233in_input = id1232out_result[getCycle()%2];

    id1233out_output = id1233in_input;
  }
  { // Node ID: 1235 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1235in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1235in_option0 = in_vars.id1234out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1235in_option1 = id1233out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1235x_1;

    switch((id1235in_sel.getValueAsLong())) {
      case 0l:
        id1235x_1 = id1235in_option0;
        break;
      case 1l:
        id1235x_1 = id1235in_option1;
        break;
      default:
        id1235x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1235out_result[(getCycle()+1)%2] = (id1235x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1236out_output;

  { // Node ID: 1236 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1236in_input = id1235out_result[getCycle()%2];

    id1236out_output = id1236in_input;
  }
  { // Node ID: 1238 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1238in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1238in_option0 = in_vars.id1237out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1238in_option1 = id1236out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1238x_1;

    switch((id1238in_sel.getValueAsLong())) {
      case 0l:
        id1238x_1 = id1238in_option0;
        break;
      case 1l:
        id1238x_1 = id1238in_option1;
        break;
      default:
        id1238x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1238out_result[(getCycle()+1)%2] = (id1238x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1239out_output;

  { // Node ID: 1239 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1239in_input = id1238out_result[getCycle()%2];

    id1239out_output = id1239in_input;
  }
  { // Node ID: 1241 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1241in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1241in_option0 = in_vars.id1240out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1241in_option1 = id1239out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1241x_1;

    switch((id1241in_sel.getValueAsLong())) {
      case 0l:
        id1241x_1 = id1241in_option0;
        break;
      case 1l:
        id1241x_1 = id1241in_option1;
        break;
      default:
        id1241x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1241out_result[(getCycle()+1)%2] = (id1241x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1242out_output;

  { // Node ID: 1242 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1242in_input = id1241out_result[getCycle()%2];

    id1242out_output = id1242in_input;
  }
  { // Node ID: 1244 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1244in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1244in_option0 = in_vars.id1243out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1244in_option1 = id1242out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1244x_1;

    switch((id1244in_sel.getValueAsLong())) {
      case 0l:
        id1244x_1 = id1244in_option0;
        break;
      case 1l:
        id1244x_1 = id1244in_option1;
        break;
      default:
        id1244x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1244out_result[(getCycle()+1)%2] = (id1244x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1245out_output;

  { // Node ID: 1245 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1245in_input = id1244out_result[getCycle()%2];

    id1245out_output = id1245in_input;
  }
  { // Node ID: 1247 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1247in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1247in_option0 = in_vars.id1246out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1247in_option1 = id1245out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1247x_1;

    switch((id1247in_sel.getValueAsLong())) {
      case 0l:
        id1247x_1 = id1247in_option0;
        break;
      case 1l:
        id1247x_1 = id1247in_option1;
        break;
      default:
        id1247x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1247out_result[(getCycle()+1)%2] = (id1247x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1248out_output;

  { // Node ID: 1248 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1248in_input = id1247out_result[getCycle()%2];

    id1248out_output = id1248in_input;
  }
  { // Node ID: 1250 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1250in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1250in_option0 = in_vars.id1249out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1250in_option1 = id1248out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1250x_1;

    switch((id1250in_sel.getValueAsLong())) {
      case 0l:
        id1250x_1 = id1250in_option0;
        break;
      case 1l:
        id1250x_1 = id1250in_option1;
        break;
      default:
        id1250x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1250out_result[(getCycle()+1)%2] = (id1250x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1251out_output;

  { // Node ID: 1251 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1251in_input = id1250out_result[getCycle()%2];

    id1251out_output = id1251in_input;
  }
  { // Node ID: 1253 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1253in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1253in_option0 = in_vars.id1252out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1253in_option1 = id1251out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1253x_1;

    switch((id1253in_sel.getValueAsLong())) {
      case 0l:
        id1253x_1 = id1253in_option0;
        break;
      case 1l:
        id1253x_1 = id1253in_option1;
        break;
      default:
        id1253x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1253out_result[(getCycle()+1)%2] = (id1253x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1254out_output;

  { // Node ID: 1254 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1254in_input = id1253out_result[getCycle()%2];

    id1254out_output = id1254in_input;
  }
  { // Node ID: 1256 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1256in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1256in_option0 = in_vars.id1255out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1256in_option1 = id1254out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1256x_1;

    switch((id1256in_sel.getValueAsLong())) {
      case 0l:
        id1256x_1 = id1256in_option0;
        break;
      case 1l:
        id1256x_1 = id1256in_option1;
        break;
      default:
        id1256x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1256out_result[(getCycle()+1)%2] = (id1256x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1257out_output;

  { // Node ID: 1257 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1257in_input = id1256out_result[getCycle()%2];

    id1257out_output = id1257in_input;
  }
  { // Node ID: 1259 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1259in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1259in_option0 = in_vars.id1258out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1259in_option1 = id1257out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1259x_1;

    switch((id1259in_sel.getValueAsLong())) {
      case 0l:
        id1259x_1 = id1259in_option0;
        break;
      case 1l:
        id1259x_1 = id1259in_option1;
        break;
      default:
        id1259x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1259out_result[(getCycle()+1)%2] = (id1259x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1260out_output;

  { // Node ID: 1260 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1260in_input = id1259out_result[getCycle()%2];

    id1260out_output = id1260in_input;
  }
  { // Node ID: 1262 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1262in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1262in_option0 = in_vars.id1261out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1262in_option1 = id1260out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1262x_1;

    switch((id1262in_sel.getValueAsLong())) {
      case 0l:
        id1262x_1 = id1262in_option0;
        break;
      case 1l:
        id1262x_1 = id1262in_option1;
        break;
      default:
        id1262x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1262out_result[(getCycle()+1)%2] = (id1262x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1263out_output;

  { // Node ID: 1263 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1263in_input = id1262out_result[getCycle()%2];

    id1263out_output = id1263in_input;
  }
  { // Node ID: 1265 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1265in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1265in_option0 = in_vars.id1264out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1265in_option1 = id1263out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1265x_1;

    switch((id1265in_sel.getValueAsLong())) {
      case 0l:
        id1265x_1 = id1265in_option0;
        break;
      case 1l:
        id1265x_1 = id1265in_option1;
        break;
      default:
        id1265x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1265out_result[(getCycle()+1)%2] = (id1265x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1266out_output;

  { // Node ID: 1266 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1266in_input = id1265out_result[getCycle()%2];

    id1266out_output = id1266in_input;
  }
  { // Node ID: 1268 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1268in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1268in_option0 = in_vars.id1267out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1268in_option1 = id1266out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1268x_1;

    switch((id1268in_sel.getValueAsLong())) {
      case 0l:
        id1268x_1 = id1268in_option0;
        break;
      case 1l:
        id1268x_1 = id1268in_option1;
        break;
      default:
        id1268x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1268out_result[(getCycle()+1)%2] = (id1268x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1269out_output;

  { // Node ID: 1269 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1269in_input = id1268out_result[getCycle()%2];

    id1269out_output = id1269in_input;
  }
  { // Node ID: 1271 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1271in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1271in_option0 = in_vars.id1270out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1271in_option1 = id1269out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1271x_1;

    switch((id1271in_sel.getValueAsLong())) {
      case 0l:
        id1271x_1 = id1271in_option0;
        break;
      case 1l:
        id1271x_1 = id1271in_option1;
        break;
      default:
        id1271x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1271out_result[(getCycle()+1)%2] = (id1271x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1272out_output;

  { // Node ID: 1272 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1272in_input = id1271out_result[getCycle()%2];

    id1272out_output = id1272in_input;
  }
  { // Node ID: 1274 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1274in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1274in_option0 = in_vars.id1273out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1274in_option1 = id1272out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1274x_1;

    switch((id1274in_sel.getValueAsLong())) {
      case 0l:
        id1274x_1 = id1274in_option0;
        break;
      case 1l:
        id1274x_1 = id1274in_option1;
        break;
      default:
        id1274x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1274out_result[(getCycle()+1)%2] = (id1274x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1275out_output;

  { // Node ID: 1275 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1275in_input = id1274out_result[getCycle()%2];

    id1275out_output = id1275in_input;
  }
  { // Node ID: 1277 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1277in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1277in_option0 = in_vars.id1276out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1277in_option1 = id1275out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1277x_1;

    switch((id1277in_sel.getValueAsLong())) {
      case 0l:
        id1277x_1 = id1277in_option0;
        break;
      case 1l:
        id1277x_1 = id1277in_option1;
        break;
      default:
        id1277x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1277out_result[(getCycle()+1)%2] = (id1277x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1278out_output;

  { // Node ID: 1278 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1278in_input = id1277out_result[getCycle()%2];

    id1278out_output = id1278in_input;
  }
  { // Node ID: 1280 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1280in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1280in_option0 = in_vars.id1279out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1280in_option1 = id1278out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1280x_1;

    switch((id1280in_sel.getValueAsLong())) {
      case 0l:
        id1280x_1 = id1280in_option0;
        break;
      case 1l:
        id1280x_1 = id1280in_option1;
        break;
      default:
        id1280x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1280out_result[(getCycle()+1)%2] = (id1280x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1281out_output;

  { // Node ID: 1281 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1281in_input = id1280out_result[getCycle()%2];

    id1281out_output = id1281in_input;
  }
  { // Node ID: 1283 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1283in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1283in_option0 = in_vars.id1282out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1283in_option1 = id1281out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1283x_1;

    switch((id1283in_sel.getValueAsLong())) {
      case 0l:
        id1283x_1 = id1283in_option0;
        break;
      case 1l:
        id1283x_1 = id1283in_option1;
        break;
      default:
        id1283x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1283out_result[(getCycle()+1)%2] = (id1283x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1284out_output;

  { // Node ID: 1284 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1284in_input = id1283out_result[getCycle()%2];

    id1284out_output = id1284in_input;
  }
  { // Node ID: 1286 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1286in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1286in_option0 = in_vars.id1285out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1286in_option1 = id1284out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1286x_1;

    switch((id1286in_sel.getValueAsLong())) {
      case 0l:
        id1286x_1 = id1286in_option0;
        break;
      case 1l:
        id1286x_1 = id1286in_option1;
        break;
      default:
        id1286x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1286out_result[(getCycle()+1)%2] = (id1286x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1287out_output;

  { // Node ID: 1287 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1287in_input = id1286out_result[getCycle()%2];

    id1287out_output = id1287in_input;
  }
  { // Node ID: 1289 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1289in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1289in_option0 = in_vars.id1288out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1289in_option1 = id1287out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1289x_1;

    switch((id1289in_sel.getValueAsLong())) {
      case 0l:
        id1289x_1 = id1289in_option0;
        break;
      case 1l:
        id1289x_1 = id1289in_option1;
        break;
      default:
        id1289x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1289out_result[(getCycle()+1)%2] = (id1289x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1290out_output;

  { // Node ID: 1290 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1290in_input = id1289out_result[getCycle()%2];

    id1290out_output = id1290in_input;
  }
  { // Node ID: 1292 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1292in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1292in_option0 = in_vars.id1291out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1292in_option1 = id1290out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1292x_1;

    switch((id1292in_sel.getValueAsLong())) {
      case 0l:
        id1292x_1 = id1292in_option0;
        break;
      case 1l:
        id1292x_1 = id1292in_option1;
        break;
      default:
        id1292x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1292out_result[(getCycle()+1)%2] = (id1292x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1293out_output;

  { // Node ID: 1293 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1293in_input = id1292out_result[getCycle()%2];

    id1293out_output = id1293in_input;
  }
  { // Node ID: 1295 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1295in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1295in_option0 = in_vars.id1294out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1295in_option1 = id1293out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1295x_1;

    switch((id1295in_sel.getValueAsLong())) {
      case 0l:
        id1295x_1 = id1295in_option0;
        break;
      case 1l:
        id1295x_1 = id1295in_option1;
        break;
      default:
        id1295x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1295out_result[(getCycle()+1)%2] = (id1295x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1296out_output;

  { // Node ID: 1296 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1296in_input = id1295out_result[getCycle()%2];

    id1296out_output = id1296in_input;
  }
  { // Node ID: 1298 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1298in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1298in_option0 = in_vars.id1297out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1298in_option1 = id1296out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1298x_1;

    switch((id1298in_sel.getValueAsLong())) {
      case 0l:
        id1298x_1 = id1298in_option0;
        break;
      case 1l:
        id1298x_1 = id1298in_option1;
        break;
      default:
        id1298x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1298out_result[(getCycle()+1)%2] = (id1298x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1299out_output;

  { // Node ID: 1299 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1299in_input = id1298out_result[getCycle()%2];

    id1299out_output = id1299in_input;
  }
  { // Node ID: 1301 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1301in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1301in_option0 = in_vars.id1300out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1301in_option1 = id1299out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1301x_1;

    switch((id1301in_sel.getValueAsLong())) {
      case 0l:
        id1301x_1 = id1301in_option0;
        break;
      case 1l:
        id1301x_1 = id1301in_option1;
        break;
      default:
        id1301x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1301out_result[(getCycle()+1)%2] = (id1301x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1302out_output;

  { // Node ID: 1302 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1302in_input = id1301out_result[getCycle()%2];

    id1302out_output = id1302in_input;
  }
  { // Node ID: 1304 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1304in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1304in_option0 = in_vars.id1303out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1304in_option1 = id1302out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1304x_1;

    switch((id1304in_sel.getValueAsLong())) {
      case 0l:
        id1304x_1 = id1304in_option0;
        break;
      case 1l:
        id1304x_1 = id1304in_option1;
        break;
      default:
        id1304x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1304out_result[(getCycle()+1)%2] = (id1304x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1305out_output;

  { // Node ID: 1305 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1305in_input = id1304out_result[getCycle()%2];

    id1305out_output = id1305in_input;
  }
  { // Node ID: 1307 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1307in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1307in_option0 = in_vars.id1306out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1307in_option1 = id1305out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1307x_1;

    switch((id1307in_sel.getValueAsLong())) {
      case 0l:
        id1307x_1 = id1307in_option0;
        break;
      case 1l:
        id1307x_1 = id1307in_option1;
        break;
      default:
        id1307x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1307out_result[(getCycle()+1)%2] = (id1307x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1308out_output;

  { // Node ID: 1308 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1308in_input = id1307out_result[getCycle()%2];

    id1308out_output = id1308in_input;
  }
  { // Node ID: 1310 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1310in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1310in_option0 = in_vars.id1309out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1310in_option1 = id1308out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1310x_1;

    switch((id1310in_sel.getValueAsLong())) {
      case 0l:
        id1310x_1 = id1310in_option0;
        break;
      case 1l:
        id1310x_1 = id1310in_option1;
        break;
      default:
        id1310x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1310out_result[(getCycle()+1)%2] = (id1310x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1311out_output;

  { // Node ID: 1311 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1311in_input = id1310out_result[getCycle()%2];

    id1311out_output = id1311in_input;
  }
  { // Node ID: 1313 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1313in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1313in_option0 = in_vars.id1312out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1313in_option1 = id1311out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1313x_1;

    switch((id1313in_sel.getValueAsLong())) {
      case 0l:
        id1313x_1 = id1313in_option0;
        break;
      case 1l:
        id1313x_1 = id1313in_option1;
        break;
      default:
        id1313x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1313out_result[(getCycle()+1)%2] = (id1313x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1314out_output;

  { // Node ID: 1314 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1314in_input = id1313out_result[getCycle()%2];

    id1314out_output = id1314in_input;
  }
  { // Node ID: 1316 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1316in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1316in_option0 = in_vars.id1315out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1316in_option1 = id1314out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1316x_1;

    switch((id1316in_sel.getValueAsLong())) {
      case 0l:
        id1316x_1 = id1316in_option0;
        break;
      case 1l:
        id1316x_1 = id1316in_option1;
        break;
      default:
        id1316x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1316out_result[(getCycle()+1)%2] = (id1316x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1317out_output;

  { // Node ID: 1317 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1317in_input = id1316out_result[getCycle()%2];

    id1317out_output = id1317in_input;
  }
  { // Node ID: 1319 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1319in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1319in_option0 = in_vars.id1318out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1319in_option1 = id1317out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1319x_1;

    switch((id1319in_sel.getValueAsLong())) {
      case 0l:
        id1319x_1 = id1319in_option0;
        break;
      case 1l:
        id1319x_1 = id1319in_option1;
        break;
      default:
        id1319x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1319out_result[(getCycle()+1)%2] = (id1319x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1320out_output;

  { // Node ID: 1320 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1320in_input = id1319out_result[getCycle()%2];

    id1320out_output = id1320in_input;
  }
  { // Node ID: 1322 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1322in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1322in_option0 = in_vars.id1321out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1322in_option1 = id1320out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1322x_1;

    switch((id1322in_sel.getValueAsLong())) {
      case 0l:
        id1322x_1 = id1322in_option0;
        break;
      case 1l:
        id1322x_1 = id1322in_option1;
        break;
      default:
        id1322x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1322out_result[(getCycle()+1)%2] = (id1322x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1323out_output;

  { // Node ID: 1323 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1323in_input = id1322out_result[getCycle()%2];

    id1323out_output = id1323in_input;
  }
  { // Node ID: 1325 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1325in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1325in_option0 = in_vars.id1324out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1325in_option1 = id1323out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1325x_1;

    switch((id1325in_sel.getValueAsLong())) {
      case 0l:
        id1325x_1 = id1325in_option0;
        break;
      case 1l:
        id1325x_1 = id1325in_option1;
        break;
      default:
        id1325x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1325out_result[(getCycle()+1)%2] = (id1325x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1326out_output;

  { // Node ID: 1326 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1326in_input = id1325out_result[getCycle()%2];

    id1326out_output = id1326in_input;
  }
  { // Node ID: 1328 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1328in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1328in_option0 = in_vars.id1327out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1328in_option1 = id1326out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1328x_1;

    switch((id1328in_sel.getValueAsLong())) {
      case 0l:
        id1328x_1 = id1328in_option0;
        break;
      case 1l:
        id1328x_1 = id1328in_option1;
        break;
      default:
        id1328x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1328out_result[(getCycle()+1)%2] = (id1328x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1329out_output;

  { // Node ID: 1329 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1329in_input = id1328out_result[getCycle()%2];

    id1329out_output = id1329in_input;
  }
  { // Node ID: 1331 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1331in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1331in_option0 = in_vars.id1330out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1331in_option1 = id1329out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1331x_1;

    switch((id1331in_sel.getValueAsLong())) {
      case 0l:
        id1331x_1 = id1331in_option0;
        break;
      case 1l:
        id1331x_1 = id1331in_option1;
        break;
      default:
        id1331x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1331out_result[(getCycle()+1)%2] = (id1331x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1332out_output;

  { // Node ID: 1332 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1332in_input = id1331out_result[getCycle()%2];

    id1332out_output = id1332in_input;
  }
  { // Node ID: 1334 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1334in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1334in_option0 = in_vars.id1333out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1334in_option1 = id1332out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1334x_1;

    switch((id1334in_sel.getValueAsLong())) {
      case 0l:
        id1334x_1 = id1334in_option0;
        break;
      case 1l:
        id1334x_1 = id1334in_option1;
        break;
      default:
        id1334x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1334out_result[(getCycle()+1)%2] = (id1334x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1335out_output;

  { // Node ID: 1335 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1335in_input = id1334out_result[getCycle()%2];

    id1335out_output = id1335in_input;
  }
  { // Node ID: 1337 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1337in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1337in_option0 = in_vars.id1336out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1337in_option1 = id1335out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1337x_1;

    switch((id1337in_sel.getValueAsLong())) {
      case 0l:
        id1337x_1 = id1337in_option0;
        break;
      case 1l:
        id1337x_1 = id1337in_option1;
        break;
      default:
        id1337x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1337out_result[(getCycle()+1)%2] = (id1337x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1338out_output;

  { // Node ID: 1338 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1338in_input = id1337out_result[getCycle()%2];

    id1338out_output = id1338in_input;
  }
  { // Node ID: 1340 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1340in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1340in_option0 = in_vars.id1339out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1340in_option1 = id1338out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1340x_1;

    switch((id1340in_sel.getValueAsLong())) {
      case 0l:
        id1340x_1 = id1340in_option0;
        break;
      case 1l:
        id1340x_1 = id1340in_option1;
        break;
      default:
        id1340x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1340out_result[(getCycle()+1)%2] = (id1340x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1341out_output;

  { // Node ID: 1341 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1341in_input = id1340out_result[getCycle()%2];

    id1341out_output = id1341in_input;
  }
  { // Node ID: 1343 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1343in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1343in_option0 = in_vars.id1342out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1343in_option1 = id1341out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1343x_1;

    switch((id1343in_sel.getValueAsLong())) {
      case 0l:
        id1343x_1 = id1343in_option0;
        break;
      case 1l:
        id1343x_1 = id1343in_option1;
        break;
      default:
        id1343x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1343out_result[(getCycle()+1)%2] = (id1343x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1344out_output;

  { // Node ID: 1344 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1344in_input = id1343out_result[getCycle()%2];

    id1344out_output = id1344in_input;
  }
  { // Node ID: 1346 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1346in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1346in_option0 = in_vars.id1345out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1346in_option1 = id1344out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1346x_1;

    switch((id1346in_sel.getValueAsLong())) {
      case 0l:
        id1346x_1 = id1346in_option0;
        break;
      case 1l:
        id1346x_1 = id1346in_option1;
        break;
      default:
        id1346x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1346out_result[(getCycle()+1)%2] = (id1346x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1347out_output;

  { // Node ID: 1347 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1347in_input = id1346out_result[getCycle()%2];

    id1347out_output = id1347in_input;
  }
  { // Node ID: 1349 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1349in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1349in_option0 = in_vars.id1348out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1349in_option1 = id1347out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1349x_1;

    switch((id1349in_sel.getValueAsLong())) {
      case 0l:
        id1349x_1 = id1349in_option0;
        break;
      case 1l:
        id1349x_1 = id1349in_option1;
        break;
      default:
        id1349x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1349out_result[(getCycle()+1)%2] = (id1349x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1350out_output;

  { // Node ID: 1350 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1350in_input = id1349out_result[getCycle()%2];

    id1350out_output = id1350in_input;
  }
  { // Node ID: 1352 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1352in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1352in_option0 = in_vars.id1351out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1352in_option1 = id1350out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1352x_1;

    switch((id1352in_sel.getValueAsLong())) {
      case 0l:
        id1352x_1 = id1352in_option0;
        break;
      case 1l:
        id1352x_1 = id1352in_option1;
        break;
      default:
        id1352x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1352out_result[(getCycle()+1)%2] = (id1352x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1353out_output;

  { // Node ID: 1353 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1353in_input = id1352out_result[getCycle()%2];

    id1353out_output = id1353in_input;
  }
  { // Node ID: 1355 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1355in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1355in_option0 = in_vars.id1354out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1355in_option1 = id1353out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1355x_1;

    switch((id1355in_sel.getValueAsLong())) {
      case 0l:
        id1355x_1 = id1355in_option0;
        break;
      case 1l:
        id1355x_1 = id1355in_option1;
        break;
      default:
        id1355x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1355out_result[(getCycle()+1)%2] = (id1355x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1356out_output;

  { // Node ID: 1356 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1356in_input = id1355out_result[getCycle()%2];

    id1356out_output = id1356in_input;
  }
  { // Node ID: 1358 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1358in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1358in_option0 = in_vars.id1357out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1358in_option1 = id1356out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1358x_1;

    switch((id1358in_sel.getValueAsLong())) {
      case 0l:
        id1358x_1 = id1358in_option0;
        break;
      case 1l:
        id1358x_1 = id1358in_option1;
        break;
      default:
        id1358x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1358out_result[(getCycle()+1)%2] = (id1358x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1359out_output;

  { // Node ID: 1359 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1359in_input = id1358out_result[getCycle()%2];

    id1359out_output = id1359in_input;
  }
  { // Node ID: 1361 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1361in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1361in_option0 = in_vars.id1360out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1361in_option1 = id1359out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1361x_1;

    switch((id1361in_sel.getValueAsLong())) {
      case 0l:
        id1361x_1 = id1361in_option0;
        break;
      case 1l:
        id1361x_1 = id1361in_option1;
        break;
      default:
        id1361x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1361out_result[(getCycle()+1)%2] = (id1361x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1362out_output;

  { // Node ID: 1362 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1362in_input = id1361out_result[getCycle()%2];

    id1362out_output = id1362in_input;
  }
  { // Node ID: 1364 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1364in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1364in_option0 = in_vars.id1363out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1364in_option1 = id1362out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1364x_1;

    switch((id1364in_sel.getValueAsLong())) {
      case 0l:
        id1364x_1 = id1364in_option0;
        break;
      case 1l:
        id1364x_1 = id1364in_option1;
        break;
      default:
        id1364x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1364out_result[(getCycle()+1)%2] = (id1364x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1365out_output;

  { // Node ID: 1365 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1365in_input = id1364out_result[getCycle()%2];

    id1365out_output = id1365in_input;
  }
  { // Node ID: 1367 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1367in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1367in_option0 = in_vars.id1366out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1367in_option1 = id1365out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1367x_1;

    switch((id1367in_sel.getValueAsLong())) {
      case 0l:
        id1367x_1 = id1367in_option0;
        break;
      case 1l:
        id1367x_1 = id1367in_option1;
        break;
      default:
        id1367x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1367out_result[(getCycle()+1)%2] = (id1367x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1368out_output;

  { // Node ID: 1368 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1368in_input = id1367out_result[getCycle()%2];

    id1368out_output = id1368in_input;
  }
  { // Node ID: 1370 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1370in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1370in_option0 = in_vars.id1369out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1370in_option1 = id1368out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1370x_1;

    switch((id1370in_sel.getValueAsLong())) {
      case 0l:
        id1370x_1 = id1370in_option0;
        break;
      case 1l:
        id1370x_1 = id1370in_option1;
        break;
      default:
        id1370x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1370out_result[(getCycle()+1)%2] = (id1370x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1371out_output;

  { // Node ID: 1371 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1371in_input = id1370out_result[getCycle()%2];

    id1371out_output = id1371in_input;
  }
  { // Node ID: 1373 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1373in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1373in_option0 = in_vars.id1372out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1373in_option1 = id1371out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1373x_1;

    switch((id1373in_sel.getValueAsLong())) {
      case 0l:
        id1373x_1 = id1373in_option0;
        break;
      case 1l:
        id1373x_1 = id1373in_option1;
        break;
      default:
        id1373x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1373out_result[(getCycle()+1)%2] = (id1373x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1374out_output;

  { // Node ID: 1374 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1374in_input = id1373out_result[getCycle()%2];

    id1374out_output = id1374in_input;
  }
  { // Node ID: 1376 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1376in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1376in_option0 = in_vars.id1375out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1376in_option1 = id1374out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1376x_1;

    switch((id1376in_sel.getValueAsLong())) {
      case 0l:
        id1376x_1 = id1376in_option0;
        break;
      case 1l:
        id1376x_1 = id1376in_option1;
        break;
      default:
        id1376x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1376out_result[(getCycle()+1)%2] = (id1376x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1377out_output;

  { // Node ID: 1377 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1377in_input = id1376out_result[getCycle()%2];

    id1377out_output = id1377in_input;
  }
  { // Node ID: 1379 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1379in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1379in_option0 = in_vars.id1378out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1379in_option1 = id1377out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1379x_1;

    switch((id1379in_sel.getValueAsLong())) {
      case 0l:
        id1379x_1 = id1379in_option0;
        break;
      case 1l:
        id1379x_1 = id1379in_option1;
        break;
      default:
        id1379x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1379out_result[(getCycle()+1)%2] = (id1379x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1380out_output;

  { // Node ID: 1380 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1380in_input = id1379out_result[getCycle()%2];

    id1380out_output = id1380in_input;
  }
  { // Node ID: 1382 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1382in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1382in_option0 = in_vars.id1381out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1382in_option1 = id1380out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1382x_1;

    switch((id1382in_sel.getValueAsLong())) {
      case 0l:
        id1382x_1 = id1382in_option0;
        break;
      case 1l:
        id1382x_1 = id1382in_option1;
        break;
      default:
        id1382x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1382out_result[(getCycle()+1)%2] = (id1382x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1383out_output;

  { // Node ID: 1383 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1383in_input = id1382out_result[getCycle()%2];

    id1383out_output = id1383in_input;
  }
  { // Node ID: 1385 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1385in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1385in_option0 = in_vars.id1384out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1385in_option1 = id1383out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1385x_1;

    switch((id1385in_sel.getValueAsLong())) {
      case 0l:
        id1385x_1 = id1385in_option0;
        break;
      case 1l:
        id1385x_1 = id1385in_option1;
        break;
      default:
        id1385x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1385out_result[(getCycle()+1)%2] = (id1385x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1386out_output;

  { // Node ID: 1386 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1386in_input = id1385out_result[getCycle()%2];

    id1386out_output = id1386in_input;
  }
  { // Node ID: 1388 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1388in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1388in_option0 = in_vars.id1387out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1388in_option1 = id1386out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1388x_1;

    switch((id1388in_sel.getValueAsLong())) {
      case 0l:
        id1388x_1 = id1388in_option0;
        break;
      case 1l:
        id1388x_1 = id1388in_option1;
        break;
      default:
        id1388x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1388out_result[(getCycle()+1)%2] = (id1388x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1389out_output;

  { // Node ID: 1389 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1389in_input = id1388out_result[getCycle()%2];

    id1389out_output = id1389in_input;
  }
  { // Node ID: 1391 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1391in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1391in_option0 = in_vars.id1390out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1391in_option1 = id1389out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1391x_1;

    switch((id1391in_sel.getValueAsLong())) {
      case 0l:
        id1391x_1 = id1391in_option0;
        break;
      case 1l:
        id1391x_1 = id1391in_option1;
        break;
      default:
        id1391x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1391out_result[(getCycle()+1)%2] = (id1391x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1392out_output;

  { // Node ID: 1392 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1392in_input = id1391out_result[getCycle()%2];

    id1392out_output = id1392in_input;
  }
  { // Node ID: 1394 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1394in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1394in_option0 = in_vars.id1393out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1394in_option1 = id1392out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1394x_1;

    switch((id1394in_sel.getValueAsLong())) {
      case 0l:
        id1394x_1 = id1394in_option0;
        break;
      case 1l:
        id1394x_1 = id1394in_option1;
        break;
      default:
        id1394x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1394out_result[(getCycle()+1)%2] = (id1394x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1395out_output;

  { // Node ID: 1395 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1395in_input = id1394out_result[getCycle()%2];

    id1395out_output = id1395in_input;
  }
  { // Node ID: 1397 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1397in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1397in_option0 = in_vars.id1396out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1397in_option1 = id1395out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1397x_1;

    switch((id1397in_sel.getValueAsLong())) {
      case 0l:
        id1397x_1 = id1397in_option0;
        break;
      case 1l:
        id1397x_1 = id1397in_option1;
        break;
      default:
        id1397x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1397out_result[(getCycle()+1)%2] = (id1397x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1398out_output;

  { // Node ID: 1398 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1398in_input = id1397out_result[getCycle()%2];

    id1398out_output = id1398in_input;
  }
  { // Node ID: 1400 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1400in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1400in_option0 = in_vars.id1399out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1400in_option1 = id1398out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1400x_1;

    switch((id1400in_sel.getValueAsLong())) {
      case 0l:
        id1400x_1 = id1400in_option0;
        break;
      case 1l:
        id1400x_1 = id1400in_option1;
        break;
      default:
        id1400x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1400out_result[(getCycle()+1)%2] = (id1400x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1401out_output;

  { // Node ID: 1401 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1401in_input = id1400out_result[getCycle()%2];

    id1401out_output = id1401in_input;
  }
  { // Node ID: 1403 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1403in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1403in_option0 = in_vars.id1402out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1403in_option1 = id1401out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1403x_1;

    switch((id1403in_sel.getValueAsLong())) {
      case 0l:
        id1403x_1 = id1403in_option0;
        break;
      case 1l:
        id1403x_1 = id1403in_option1;
        break;
      default:
        id1403x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1403out_result[(getCycle()+1)%2] = (id1403x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1404out_output;

  { // Node ID: 1404 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1404in_input = id1403out_result[getCycle()%2];

    id1404out_output = id1404in_input;
  }
  { // Node ID: 1406 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1406in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1406in_option0 = in_vars.id1405out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1406in_option1 = id1404out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1406x_1;

    switch((id1406in_sel.getValueAsLong())) {
      case 0l:
        id1406x_1 = id1406in_option0;
        break;
      case 1l:
        id1406x_1 = id1406in_option1;
        break;
      default:
        id1406x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1406out_result[(getCycle()+1)%2] = (id1406x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1407out_output;

  { // Node ID: 1407 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1407in_input = id1406out_result[getCycle()%2];

    id1407out_output = id1407in_input;
  }
  { // Node ID: 1409 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1409in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1409in_option0 = in_vars.id1408out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1409in_option1 = id1407out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1409x_1;

    switch((id1409in_sel.getValueAsLong())) {
      case 0l:
        id1409x_1 = id1409in_option0;
        break;
      case 1l:
        id1409x_1 = id1409in_option1;
        break;
      default:
        id1409x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1409out_result[(getCycle()+1)%2] = (id1409x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1410out_output;

  { // Node ID: 1410 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1410in_input = id1409out_result[getCycle()%2];

    id1410out_output = id1410in_input;
  }
  { // Node ID: 1412 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1412in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1412in_option0 = in_vars.id1411out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1412in_option1 = id1410out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1412x_1;

    switch((id1412in_sel.getValueAsLong())) {
      case 0l:
        id1412x_1 = id1412in_option0;
        break;
      case 1l:
        id1412x_1 = id1412in_option1;
        break;
      default:
        id1412x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1412out_result[(getCycle()+1)%2] = (id1412x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1413out_output;

  { // Node ID: 1413 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1413in_input = id1412out_result[getCycle()%2];

    id1413out_output = id1413in_input;
  }
  { // Node ID: 1415 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1415in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1415in_option0 = in_vars.id1414out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1415in_option1 = id1413out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1415x_1;

    switch((id1415in_sel.getValueAsLong())) {
      case 0l:
        id1415x_1 = id1415in_option0;
        break;
      case 1l:
        id1415x_1 = id1415in_option1;
        break;
      default:
        id1415x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1415out_result[(getCycle()+1)%2] = (id1415x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1416out_output;

  { // Node ID: 1416 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1416in_input = id1415out_result[getCycle()%2];

    id1416out_output = id1416in_input;
  }
  { // Node ID: 1418 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1418in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1418in_option0 = in_vars.id1417out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1418in_option1 = id1416out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1418x_1;

    switch((id1418in_sel.getValueAsLong())) {
      case 0l:
        id1418x_1 = id1418in_option0;
        break;
      case 1l:
        id1418x_1 = id1418in_option1;
        break;
      default:
        id1418x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1418out_result[(getCycle()+1)%2] = (id1418x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1419out_output;

  { // Node ID: 1419 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1419in_input = id1418out_result[getCycle()%2];

    id1419out_output = id1419in_input;
  }
  { // Node ID: 1421 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1421in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1421in_option0 = in_vars.id1420out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1421in_option1 = id1419out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1421x_1;

    switch((id1421in_sel.getValueAsLong())) {
      case 0l:
        id1421x_1 = id1421in_option0;
        break;
      case 1l:
        id1421x_1 = id1421in_option1;
        break;
      default:
        id1421x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1421out_result[(getCycle()+1)%2] = (id1421x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1422out_output;

  { // Node ID: 1422 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1422in_input = id1421out_result[getCycle()%2];

    id1422out_output = id1422in_input;
  }
  { // Node ID: 1424 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1424in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1424in_option0 = in_vars.id1423out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1424in_option1 = id1422out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1424x_1;

    switch((id1424in_sel.getValueAsLong())) {
      case 0l:
        id1424x_1 = id1424in_option0;
        break;
      case 1l:
        id1424x_1 = id1424in_option1;
        break;
      default:
        id1424x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1424out_result[(getCycle()+1)%2] = (id1424x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1425out_output;

  { // Node ID: 1425 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1425in_input = id1424out_result[getCycle()%2];

    id1425out_output = id1425in_input;
  }
  { // Node ID: 1427 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1427in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1427in_option0 = in_vars.id1426out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1427in_option1 = id1425out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1427x_1;

    switch((id1427in_sel.getValueAsLong())) {
      case 0l:
        id1427x_1 = id1427in_option0;
        break;
      case 1l:
        id1427x_1 = id1427in_option1;
        break;
      default:
        id1427x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1427out_result[(getCycle()+1)%2] = (id1427x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1428out_output;

  { // Node ID: 1428 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1428in_input = id1427out_result[getCycle()%2];

    id1428out_output = id1428in_input;
  }
  { // Node ID: 1430 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1430in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1430in_option0 = in_vars.id1429out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1430in_option1 = id1428out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1430x_1;

    switch((id1430in_sel.getValueAsLong())) {
      case 0l:
        id1430x_1 = id1430in_option0;
        break;
      case 1l:
        id1430x_1 = id1430in_option1;
        break;
      default:
        id1430x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1430out_result[(getCycle()+1)%2] = (id1430x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1431out_output;

  { // Node ID: 1431 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1431in_input = id1430out_result[getCycle()%2];

    id1431out_output = id1431in_input;
  }
  { // Node ID: 1433 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1433in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1433in_option0 = in_vars.id1432out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1433in_option1 = id1431out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1433x_1;

    switch((id1433in_sel.getValueAsLong())) {
      case 0l:
        id1433x_1 = id1433in_option0;
        break;
      case 1l:
        id1433x_1 = id1433in_option1;
        break;
      default:
        id1433x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1433out_result[(getCycle()+1)%2] = (id1433x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1434out_output;

  { // Node ID: 1434 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1434in_input = id1433out_result[getCycle()%2];

    id1434out_output = id1434in_input;
  }
  { // Node ID: 1436 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1436in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1436in_option0 = in_vars.id1435out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1436in_option1 = id1434out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1436x_1;

    switch((id1436in_sel.getValueAsLong())) {
      case 0l:
        id1436x_1 = id1436in_option0;
        break;
      case 1l:
        id1436x_1 = id1436in_option1;
        break;
      default:
        id1436x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1436out_result[(getCycle()+1)%2] = (id1436x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1437out_output;

  { // Node ID: 1437 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1437in_input = id1436out_result[getCycle()%2];

    id1437out_output = id1437in_input;
  }
  { // Node ID: 1439 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1439in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1439in_option0 = in_vars.id1438out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1439in_option1 = id1437out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1439x_1;

    switch((id1439in_sel.getValueAsLong())) {
      case 0l:
        id1439x_1 = id1439in_option0;
        break;
      case 1l:
        id1439x_1 = id1439in_option1;
        break;
      default:
        id1439x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1439out_result[(getCycle()+1)%2] = (id1439x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1440out_output;

  { // Node ID: 1440 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1440in_input = id1439out_result[getCycle()%2];

    id1440out_output = id1440in_input;
  }
  { // Node ID: 1442 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1442in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1442in_option0 = in_vars.id1441out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1442in_option1 = id1440out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1442x_1;

    switch((id1442in_sel.getValueAsLong())) {
      case 0l:
        id1442x_1 = id1442in_option0;
        break;
      case 1l:
        id1442x_1 = id1442in_option1;
        break;
      default:
        id1442x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1442out_result[(getCycle()+1)%2] = (id1442x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1443out_output;

  { // Node ID: 1443 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1443in_input = id1442out_result[getCycle()%2];

    id1443out_output = id1443in_input;
  }
  { // Node ID: 1445 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1445in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1445in_option0 = in_vars.id1444out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1445in_option1 = id1443out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1445x_1;

    switch((id1445in_sel.getValueAsLong())) {
      case 0l:
        id1445x_1 = id1445in_option0;
        break;
      case 1l:
        id1445x_1 = id1445in_option1;
        break;
      default:
        id1445x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1445out_result[(getCycle()+1)%2] = (id1445x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1446out_output;

  { // Node ID: 1446 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1446in_input = id1445out_result[getCycle()%2];

    id1446out_output = id1446in_input;
  }
  { // Node ID: 1448 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1448in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1448in_option0 = in_vars.id1447out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1448in_option1 = id1446out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1448x_1;

    switch((id1448in_sel.getValueAsLong())) {
      case 0l:
        id1448x_1 = id1448in_option0;
        break;
      case 1l:
        id1448x_1 = id1448in_option1;
        break;
      default:
        id1448x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1448out_result[(getCycle()+1)%2] = (id1448x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1449out_output;

  { // Node ID: 1449 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1449in_input = id1448out_result[getCycle()%2];

    id1449out_output = id1449in_input;
  }
  { // Node ID: 1451 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1451in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1451in_option0 = in_vars.id1450out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1451in_option1 = id1449out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1451x_1;

    switch((id1451in_sel.getValueAsLong())) {
      case 0l:
        id1451x_1 = id1451in_option0;
        break;
      case 1l:
        id1451x_1 = id1451in_option1;
        break;
      default:
        id1451x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1451out_result[(getCycle()+1)%2] = (id1451x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1452out_output;

  { // Node ID: 1452 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1452in_input = id1451out_result[getCycle()%2];

    id1452out_output = id1452in_input;
  }
  { // Node ID: 1454 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1454in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1454in_option0 = in_vars.id1453out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1454in_option1 = id1452out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1454x_1;

    switch((id1454in_sel.getValueAsLong())) {
      case 0l:
        id1454x_1 = id1454in_option0;
        break;
      case 1l:
        id1454x_1 = id1454in_option1;
        break;
      default:
        id1454x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1454out_result[(getCycle()+1)%2] = (id1454x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1455out_output;

  { // Node ID: 1455 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1455in_input = id1454out_result[getCycle()%2];

    id1455out_output = id1455in_input;
  }
  { // Node ID: 1457 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1457in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1457in_option0 = in_vars.id1456out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1457in_option1 = id1455out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1457x_1;

    switch((id1457in_sel.getValueAsLong())) {
      case 0l:
        id1457x_1 = id1457in_option0;
        break;
      case 1l:
        id1457x_1 = id1457in_option1;
        break;
      default:
        id1457x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1457out_result[(getCycle()+1)%2] = (id1457x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1458out_output;

  { // Node ID: 1458 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1458in_input = id1457out_result[getCycle()%2];

    id1458out_output = id1458in_input;
  }
  { // Node ID: 1460 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1460in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1460in_option0 = in_vars.id1459out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1460in_option1 = id1458out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1460x_1;

    switch((id1460in_sel.getValueAsLong())) {
      case 0l:
        id1460x_1 = id1460in_option0;
        break;
      case 1l:
        id1460x_1 = id1460in_option1;
        break;
      default:
        id1460x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1460out_result[(getCycle()+1)%2] = (id1460x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1461out_output;

  { // Node ID: 1461 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1461in_input = id1460out_result[getCycle()%2];

    id1461out_output = id1461in_input;
  }
  { // Node ID: 1463 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1463in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1463in_option0 = in_vars.id1462out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1463in_option1 = id1461out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1463x_1;

    switch((id1463in_sel.getValueAsLong())) {
      case 0l:
        id1463x_1 = id1463in_option0;
        break;
      case 1l:
        id1463x_1 = id1463in_option1;
        break;
      default:
        id1463x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1463out_result[(getCycle()+1)%2] = (id1463x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1464out_output;

  { // Node ID: 1464 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1464in_input = id1463out_result[getCycle()%2];

    id1464out_output = id1464in_input;
  }
  { // Node ID: 1466 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1466in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1466in_option0 = in_vars.id1465out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1466in_option1 = id1464out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1466x_1;

    switch((id1466in_sel.getValueAsLong())) {
      case 0l:
        id1466x_1 = id1466in_option0;
        break;
      case 1l:
        id1466x_1 = id1466in_option1;
        break;
      default:
        id1466x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1466out_result[(getCycle()+1)%2] = (id1466x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1467out_output;

  { // Node ID: 1467 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1467in_input = id1466out_result[getCycle()%2];

    id1467out_output = id1467in_input;
  }
  { // Node ID: 1469 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1469in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1469in_option0 = in_vars.id1468out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1469in_option1 = id1467out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1469x_1;

    switch((id1469in_sel.getValueAsLong())) {
      case 0l:
        id1469x_1 = id1469in_option0;
        break;
      case 1l:
        id1469x_1 = id1469in_option1;
        break;
      default:
        id1469x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1469out_result[(getCycle()+1)%2] = (id1469x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1470out_output;

  { // Node ID: 1470 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1470in_input = id1469out_result[getCycle()%2];

    id1470out_output = id1470in_input;
  }
  { // Node ID: 1472 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1472in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1472in_option0 = in_vars.id1471out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1472in_option1 = id1470out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1472x_1;

    switch((id1472in_sel.getValueAsLong())) {
      case 0l:
        id1472x_1 = id1472in_option0;
        break;
      case 1l:
        id1472x_1 = id1472in_option1;
        break;
      default:
        id1472x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1472out_result[(getCycle()+1)%2] = (id1472x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1473out_output;

  { // Node ID: 1473 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1473in_input = id1472out_result[getCycle()%2];

    id1473out_output = id1473in_input;
  }
  { // Node ID: 1475 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1475in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1475in_option0 = in_vars.id1474out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1475in_option1 = id1473out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1475x_1;

    switch((id1475in_sel.getValueAsLong())) {
      case 0l:
        id1475x_1 = id1475in_option0;
        break;
      case 1l:
        id1475x_1 = id1475in_option1;
        break;
      default:
        id1475x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1475out_result[(getCycle()+1)%2] = (id1475x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1476out_output;

  { // Node ID: 1476 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1476in_input = id1475out_result[getCycle()%2];

    id1476out_output = id1476in_input;
  }
  { // Node ID: 1478 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1478in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1478in_option0 = in_vars.id1477out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1478in_option1 = id1476out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1478x_1;

    switch((id1478in_sel.getValueAsLong())) {
      case 0l:
        id1478x_1 = id1478in_option0;
        break;
      case 1l:
        id1478x_1 = id1478in_option1;
        break;
      default:
        id1478x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1478out_result[(getCycle()+1)%2] = (id1478x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1479out_output;

  { // Node ID: 1479 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1479in_input = id1478out_result[getCycle()%2];

    id1479out_output = id1479in_input;
  }
  { // Node ID: 1481 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1481in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1481in_option0 = in_vars.id1480out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1481in_option1 = id1479out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1481x_1;

    switch((id1481in_sel.getValueAsLong())) {
      case 0l:
        id1481x_1 = id1481in_option0;
        break;
      case 1l:
        id1481x_1 = id1481in_option1;
        break;
      default:
        id1481x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1481out_result[(getCycle()+1)%2] = (id1481x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1482out_output;

  { // Node ID: 1482 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1482in_input = id1481out_result[getCycle()%2];

    id1482out_output = id1482in_input;
  }
  { // Node ID: 1484 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1484in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1484in_option0 = in_vars.id1483out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1484in_option1 = id1482out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1484x_1;

    switch((id1484in_sel.getValueAsLong())) {
      case 0l:
        id1484x_1 = id1484in_option0;
        break;
      case 1l:
        id1484x_1 = id1484in_option1;
        break;
      default:
        id1484x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1484out_result[(getCycle()+1)%2] = (id1484x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1485out_output;

  { // Node ID: 1485 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1485in_input = id1484out_result[getCycle()%2];

    id1485out_output = id1485in_input;
  }
  { // Node ID: 1487 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1487in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1487in_option0 = in_vars.id1486out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1487in_option1 = id1485out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1487x_1;

    switch((id1487in_sel.getValueAsLong())) {
      case 0l:
        id1487x_1 = id1487in_option0;
        break;
      case 1l:
        id1487x_1 = id1487in_option1;
        break;
      default:
        id1487x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1487out_result[(getCycle()+1)%2] = (id1487x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1488out_output;

  { // Node ID: 1488 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1488in_input = id1487out_result[getCycle()%2];

    id1488out_output = id1488in_input;
  }
  { // Node ID: 1490 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1490in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1490in_option0 = in_vars.id1489out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1490in_option1 = id1488out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1490x_1;

    switch((id1490in_sel.getValueAsLong())) {
      case 0l:
        id1490x_1 = id1490in_option0;
        break;
      case 1l:
        id1490x_1 = id1490in_option1;
        break;
      default:
        id1490x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1490out_result[(getCycle()+1)%2] = (id1490x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1491out_output;

  { // Node ID: 1491 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1491in_input = id1490out_result[getCycle()%2];

    id1491out_output = id1491in_input;
  }
  { // Node ID: 1493 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1493in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1493in_option0 = in_vars.id1492out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1493in_option1 = id1491out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1493x_1;

    switch((id1493in_sel.getValueAsLong())) {
      case 0l:
        id1493x_1 = id1493in_option0;
        break;
      case 1l:
        id1493x_1 = id1493in_option1;
        break;
      default:
        id1493x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1493out_result[(getCycle()+1)%2] = (id1493x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1494out_output;

  { // Node ID: 1494 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1494in_input = id1493out_result[getCycle()%2];

    id1494out_output = id1494in_input;
  }
  { // Node ID: 1496 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1496in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1496in_option0 = in_vars.id1495out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1496in_option1 = id1494out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1496x_1;

    switch((id1496in_sel.getValueAsLong())) {
      case 0l:
        id1496x_1 = id1496in_option0;
        break;
      case 1l:
        id1496x_1 = id1496in_option1;
        break;
      default:
        id1496x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1496out_result[(getCycle()+1)%2] = (id1496x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1497out_output;

  { // Node ID: 1497 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1497in_input = id1496out_result[getCycle()%2];

    id1497out_output = id1497in_input;
  }
  { // Node ID: 1499 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1499in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1499in_option0 = in_vars.id1498out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1499in_option1 = id1497out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1499x_1;

    switch((id1499in_sel.getValueAsLong())) {
      case 0l:
        id1499x_1 = id1499in_option0;
        break;
      case 1l:
        id1499x_1 = id1499in_option1;
        break;
      default:
        id1499x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1499out_result[(getCycle()+1)%2] = (id1499x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1500out_output;

  { // Node ID: 1500 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1500in_input = id1499out_result[getCycle()%2];

    id1500out_output = id1500in_input;
  }
  { // Node ID: 1502 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1502in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1502in_option0 = in_vars.id1501out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1502in_option1 = id1500out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1502x_1;

    switch((id1502in_sel.getValueAsLong())) {
      case 0l:
        id1502x_1 = id1502in_option0;
        break;
      case 1l:
        id1502x_1 = id1502in_option1;
        break;
      default:
        id1502x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1502out_result[(getCycle()+1)%2] = (id1502x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1503out_output;

  { // Node ID: 1503 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1503in_input = id1502out_result[getCycle()%2];

    id1503out_output = id1503in_input;
  }
  { // Node ID: 1505 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1505in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1505in_option0 = in_vars.id1504out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1505in_option1 = id1503out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1505x_1;

    switch((id1505in_sel.getValueAsLong())) {
      case 0l:
        id1505x_1 = id1505in_option0;
        break;
      case 1l:
        id1505x_1 = id1505in_option1;
        break;
      default:
        id1505x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1505out_result[(getCycle()+1)%2] = (id1505x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1506out_output;

  { // Node ID: 1506 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1506in_input = id1505out_result[getCycle()%2];

    id1506out_output = id1506in_input;
  }
  { // Node ID: 1508 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1508in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1508in_option0 = in_vars.id1507out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1508in_option1 = id1506out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1508x_1;

    switch((id1508in_sel.getValueAsLong())) {
      case 0l:
        id1508x_1 = id1508in_option0;
        break;
      case 1l:
        id1508x_1 = id1508in_option1;
        break;
      default:
        id1508x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1508out_result[(getCycle()+1)%2] = (id1508x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1509out_output;

  { // Node ID: 1509 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1509in_input = id1508out_result[getCycle()%2];

    id1509out_output = id1509in_input;
  }
  { // Node ID: 1511 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1511in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1511in_option0 = in_vars.id1510out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1511in_option1 = id1509out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1511x_1;

    switch((id1511in_sel.getValueAsLong())) {
      case 0l:
        id1511x_1 = id1511in_option0;
        break;
      case 1l:
        id1511x_1 = id1511in_option1;
        break;
      default:
        id1511x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1511out_result[(getCycle()+1)%2] = (id1511x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1512out_output;

  { // Node ID: 1512 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1512in_input = id1511out_result[getCycle()%2];

    id1512out_output = id1512in_input;
  }
  { // Node ID: 1514 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1514in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1514in_option0 = in_vars.id1513out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1514in_option1 = id1512out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1514x_1;

    switch((id1514in_sel.getValueAsLong())) {
      case 0l:
        id1514x_1 = id1514in_option0;
        break;
      case 1l:
        id1514x_1 = id1514in_option1;
        break;
      default:
        id1514x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1514out_result[(getCycle()+1)%2] = (id1514x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1515out_output;

  { // Node ID: 1515 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1515in_input = id1514out_result[getCycle()%2];

    id1515out_output = id1515in_input;
  }
  { // Node ID: 1517 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1517in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1517in_option0 = in_vars.id1516out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1517in_option1 = id1515out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1517x_1;

    switch((id1517in_sel.getValueAsLong())) {
      case 0l:
        id1517x_1 = id1517in_option0;
        break;
      case 1l:
        id1517x_1 = id1517in_option1;
        break;
      default:
        id1517x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1517out_result[(getCycle()+1)%2] = (id1517x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1518out_output;

  { // Node ID: 1518 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1518in_input = id1517out_result[getCycle()%2];

    id1518out_output = id1518in_input;
  }
  { // Node ID: 1520 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1520in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1520in_option0 = in_vars.id1519out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1520in_option1 = id1518out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1520x_1;

    switch((id1520in_sel.getValueAsLong())) {
      case 0l:
        id1520x_1 = id1520in_option0;
        break;
      case 1l:
        id1520x_1 = id1520in_option1;
        break;
      default:
        id1520x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1520out_result[(getCycle()+1)%2] = (id1520x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1521out_output;

  { // Node ID: 1521 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1521in_input = id1520out_result[getCycle()%2];

    id1521out_output = id1521in_input;
  }
  { // Node ID: 1523 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1523in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1523in_option0 = in_vars.id1522out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1523in_option1 = id1521out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1523x_1;

    switch((id1523in_sel.getValueAsLong())) {
      case 0l:
        id1523x_1 = id1523in_option0;
        break;
      case 1l:
        id1523x_1 = id1523in_option1;
        break;
      default:
        id1523x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1523out_result[(getCycle()+1)%2] = (id1523x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1524out_output;

  { // Node ID: 1524 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1524in_input = id1523out_result[getCycle()%2];

    id1524out_output = id1524in_input;
  }
  { // Node ID: 1526 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1526in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1526in_option0 = in_vars.id1525out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1526in_option1 = id1524out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1526x_1;

    switch((id1526in_sel.getValueAsLong())) {
      case 0l:
        id1526x_1 = id1526in_option0;
        break;
      case 1l:
        id1526x_1 = id1526in_option1;
        break;
      default:
        id1526x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1526out_result[(getCycle()+1)%2] = (id1526x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1527out_output;

  { // Node ID: 1527 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1527in_input = id1526out_result[getCycle()%2];

    id1527out_output = id1527in_input;
  }
  { // Node ID: 1529 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1529in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1529in_option0 = in_vars.id1528out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1529in_option1 = id1527out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1529x_1;

    switch((id1529in_sel.getValueAsLong())) {
      case 0l:
        id1529x_1 = id1529in_option0;
        break;
      case 1l:
        id1529x_1 = id1529in_option1;
        break;
      default:
        id1529x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1529out_result[(getCycle()+1)%2] = (id1529x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1530out_output;

  { // Node ID: 1530 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1530in_input = id1529out_result[getCycle()%2];

    id1530out_output = id1530in_input;
  }
  { // Node ID: 1532 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1532in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1532in_option0 = in_vars.id1531out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1532in_option1 = id1530out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1532x_1;

    switch((id1532in_sel.getValueAsLong())) {
      case 0l:
        id1532x_1 = id1532in_option0;
        break;
      case 1l:
        id1532x_1 = id1532in_option1;
        break;
      default:
        id1532x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1532out_result[(getCycle()+1)%2] = (id1532x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1533out_output;

  { // Node ID: 1533 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1533in_input = id1532out_result[getCycle()%2];

    id1533out_output = id1533in_input;
  }
  { // Node ID: 1535 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1535in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1535in_option0 = in_vars.id1534out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1535in_option1 = id1533out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1535x_1;

    switch((id1535in_sel.getValueAsLong())) {
      case 0l:
        id1535x_1 = id1535in_option0;
        break;
      case 1l:
        id1535x_1 = id1535in_option1;
        break;
      default:
        id1535x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1535out_result[(getCycle()+1)%2] = (id1535x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1536out_output;

  { // Node ID: 1536 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1536in_input = id1535out_result[getCycle()%2];

    id1536out_output = id1536in_input;
  }
  { // Node ID: 1538 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1538in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1538in_option0 = in_vars.id1537out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1538in_option1 = id1536out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1538x_1;

    switch((id1538in_sel.getValueAsLong())) {
      case 0l:
        id1538x_1 = id1538in_option0;
        break;
      case 1l:
        id1538x_1 = id1538in_option1;
        break;
      default:
        id1538x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1538out_result[(getCycle()+1)%2] = (id1538x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1539out_output;

  { // Node ID: 1539 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1539in_input = id1538out_result[getCycle()%2];

    id1539out_output = id1539in_input;
  }
  { // Node ID: 1541 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1541in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1541in_option0 = in_vars.id1540out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1541in_option1 = id1539out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1541x_1;

    switch((id1541in_sel.getValueAsLong())) {
      case 0l:
        id1541x_1 = id1541in_option0;
        break;
      case 1l:
        id1541x_1 = id1541in_option1;
        break;
      default:
        id1541x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1541out_result[(getCycle()+1)%2] = (id1541x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1542out_output;

  { // Node ID: 1542 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1542in_input = id1541out_result[getCycle()%2];

    id1542out_output = id1542in_input;
  }
  { // Node ID: 1544 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1544in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1544in_option0 = in_vars.id1543out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1544in_option1 = id1542out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1544x_1;

    switch((id1544in_sel.getValueAsLong())) {
      case 0l:
        id1544x_1 = id1544in_option0;
        break;
      case 1l:
        id1544x_1 = id1544in_option1;
        break;
      default:
        id1544x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1544out_result[(getCycle()+1)%2] = (id1544x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1545out_output;

  { // Node ID: 1545 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1545in_input = id1544out_result[getCycle()%2];

    id1545out_output = id1545in_input;
  }
  { // Node ID: 1547 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1547in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1547in_option0 = in_vars.id1546out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1547in_option1 = id1545out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1547x_1;

    switch((id1547in_sel.getValueAsLong())) {
      case 0l:
        id1547x_1 = id1547in_option0;
        break;
      case 1l:
        id1547x_1 = id1547in_option1;
        break;
      default:
        id1547x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1547out_result[(getCycle()+1)%2] = (id1547x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1548out_output;

  { // Node ID: 1548 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1548in_input = id1547out_result[getCycle()%2];

    id1548out_output = id1548in_input;
  }
  { // Node ID: 1550 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1550in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1550in_option0 = in_vars.id1549out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1550in_option1 = id1548out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1550x_1;

    switch((id1550in_sel.getValueAsLong())) {
      case 0l:
        id1550x_1 = id1550in_option0;
        break;
      case 1l:
        id1550x_1 = id1550in_option1;
        break;
      default:
        id1550x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1550out_result[(getCycle()+1)%2] = (id1550x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1551out_output;

  { // Node ID: 1551 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1551in_input = id1550out_result[getCycle()%2];

    id1551out_output = id1551in_input;
  }
  { // Node ID: 1553 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1553in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1553in_option0 = in_vars.id1552out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1553in_option1 = id1551out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1553x_1;

    switch((id1553in_sel.getValueAsLong())) {
      case 0l:
        id1553x_1 = id1553in_option0;
        break;
      case 1l:
        id1553x_1 = id1553in_option1;
        break;
      default:
        id1553x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1553out_result[(getCycle()+1)%2] = (id1553x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1554out_output;

  { // Node ID: 1554 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1554in_input = id1553out_result[getCycle()%2];

    id1554out_output = id1554in_input;
  }
  { // Node ID: 1556 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1556in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1556in_option0 = in_vars.id1555out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1556in_option1 = id1554out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1556x_1;

    switch((id1556in_sel.getValueAsLong())) {
      case 0l:
        id1556x_1 = id1556in_option0;
        break;
      case 1l:
        id1556x_1 = id1556in_option1;
        break;
      default:
        id1556x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1556out_result[(getCycle()+1)%2] = (id1556x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1557out_output;

  { // Node ID: 1557 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1557in_input = id1556out_result[getCycle()%2];

    id1557out_output = id1557in_input;
  }
  { // Node ID: 1559 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1559in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1559in_option0 = in_vars.id1558out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1559in_option1 = id1557out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1559x_1;

    switch((id1559in_sel.getValueAsLong())) {
      case 0l:
        id1559x_1 = id1559in_option0;
        break;
      case 1l:
        id1559x_1 = id1559in_option1;
        break;
      default:
        id1559x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1559out_result[(getCycle()+1)%2] = (id1559x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1560out_output;

  { // Node ID: 1560 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1560in_input = id1559out_result[getCycle()%2];

    id1560out_output = id1560in_input;
  }
  { // Node ID: 1562 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1562in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1562in_option0 = in_vars.id1561out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1562in_option1 = id1560out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1562x_1;

    switch((id1562in_sel.getValueAsLong())) {
      case 0l:
        id1562x_1 = id1562in_option0;
        break;
      case 1l:
        id1562x_1 = id1562in_option1;
        break;
      default:
        id1562x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1562out_result[(getCycle()+1)%2] = (id1562x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1563out_output;

  { // Node ID: 1563 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1563in_input = id1562out_result[getCycle()%2];

    id1563out_output = id1563in_input;
  }
  { // Node ID: 1565 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1565in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1565in_option0 = in_vars.id1564out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1565in_option1 = id1563out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1565x_1;

    switch((id1565in_sel.getValueAsLong())) {
      case 0l:
        id1565x_1 = id1565in_option0;
        break;
      case 1l:
        id1565x_1 = id1565in_option1;
        break;
      default:
        id1565x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1565out_result[(getCycle()+1)%2] = (id1565x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1566out_output;

  { // Node ID: 1566 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1566in_input = id1565out_result[getCycle()%2];

    id1566out_output = id1566in_input;
  }
  { // Node ID: 1568 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1568in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1568in_option0 = in_vars.id1567out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1568in_option1 = id1566out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1568x_1;

    switch((id1568in_sel.getValueAsLong())) {
      case 0l:
        id1568x_1 = id1568in_option0;
        break;
      case 1l:
        id1568x_1 = id1568in_option1;
        break;
      default:
        id1568x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1568out_result[(getCycle()+1)%2] = (id1568x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1569out_output;

  { // Node ID: 1569 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1569in_input = id1568out_result[getCycle()%2];

    id1569out_output = id1569in_input;
  }
  { // Node ID: 1571 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1571in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1571in_option0 = in_vars.id1570out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1571in_option1 = id1569out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1571x_1;

    switch((id1571in_sel.getValueAsLong())) {
      case 0l:
        id1571x_1 = id1571in_option0;
        break;
      case 1l:
        id1571x_1 = id1571in_option1;
        break;
      default:
        id1571x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1571out_result[(getCycle()+1)%2] = (id1571x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1572out_output;

  { // Node ID: 1572 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1572in_input = id1571out_result[getCycle()%2];

    id1572out_output = id1572in_input;
  }
  { // Node ID: 1574 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1574in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1574in_option0 = in_vars.id1573out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1574in_option1 = id1572out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1574x_1;

    switch((id1574in_sel.getValueAsLong())) {
      case 0l:
        id1574x_1 = id1574in_option0;
        break;
      case 1l:
        id1574x_1 = id1574in_option1;
        break;
      default:
        id1574x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1574out_result[(getCycle()+1)%2] = (id1574x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1575out_output;

  { // Node ID: 1575 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1575in_input = id1574out_result[getCycle()%2];

    id1575out_output = id1575in_input;
  }
  { // Node ID: 1577 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1577in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1577in_option0 = in_vars.id1576out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1577in_option1 = id1575out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1577x_1;

    switch((id1577in_sel.getValueAsLong())) {
      case 0l:
        id1577x_1 = id1577in_option0;
        break;
      case 1l:
        id1577x_1 = id1577in_option1;
        break;
      default:
        id1577x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1577out_result[(getCycle()+1)%2] = (id1577x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1578out_output;

  { // Node ID: 1578 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1578in_input = id1577out_result[getCycle()%2];

    id1578out_output = id1578in_input;
  }
  { // Node ID: 1580 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1580in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1580in_option0 = in_vars.id1579out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1580in_option1 = id1578out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1580x_1;

    switch((id1580in_sel.getValueAsLong())) {
      case 0l:
        id1580x_1 = id1580in_option0;
        break;
      case 1l:
        id1580x_1 = id1580in_option1;
        break;
      default:
        id1580x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1580out_result[(getCycle()+1)%2] = (id1580x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1581out_output;

  { // Node ID: 1581 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1581in_input = id1580out_result[getCycle()%2];

    id1581out_output = id1581in_input;
  }
  { // Node ID: 1583 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1583in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1583in_option0 = in_vars.id1582out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1583in_option1 = id1581out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1583x_1;

    switch((id1583in_sel.getValueAsLong())) {
      case 0l:
        id1583x_1 = id1583in_option0;
        break;
      case 1l:
        id1583x_1 = id1583in_option1;
        break;
      default:
        id1583x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1583out_result[(getCycle()+1)%2] = (id1583x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1584out_output;

  { // Node ID: 1584 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1584in_input = id1583out_result[getCycle()%2];

    id1584out_output = id1584in_input;
  }
  { // Node ID: 1586 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1586in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1586in_option0 = in_vars.id1585out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1586in_option1 = id1584out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1586x_1;

    switch((id1586in_sel.getValueAsLong())) {
      case 0l:
        id1586x_1 = id1586in_option0;
        break;
      case 1l:
        id1586x_1 = id1586in_option1;
        break;
      default:
        id1586x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1586out_result[(getCycle()+1)%2] = (id1586x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1587out_output;

  { // Node ID: 1587 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1587in_input = id1586out_result[getCycle()%2];

    id1587out_output = id1587in_input;
  }
  { // Node ID: 1589 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1589in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1589in_option0 = in_vars.id1588out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1589in_option1 = id1587out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1589x_1;

    switch((id1589in_sel.getValueAsLong())) {
      case 0l:
        id1589x_1 = id1589in_option0;
        break;
      case 1l:
        id1589x_1 = id1589in_option1;
        break;
      default:
        id1589x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1589out_result[(getCycle()+1)%2] = (id1589x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1590out_output;

  { // Node ID: 1590 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1590in_input = id1589out_result[getCycle()%2];

    id1590out_output = id1590in_input;
  }
  { // Node ID: 1592 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1592in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1592in_option0 = in_vars.id1591out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1592in_option1 = id1590out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1592x_1;

    switch((id1592in_sel.getValueAsLong())) {
      case 0l:
        id1592x_1 = id1592in_option0;
        break;
      case 1l:
        id1592x_1 = id1592in_option1;
        break;
      default:
        id1592x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1592out_result[(getCycle()+1)%2] = (id1592x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1593out_output;

  { // Node ID: 1593 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1593in_input = id1592out_result[getCycle()%2];

    id1593out_output = id1593in_input;
  }
  { // Node ID: 1595 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1595in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1595in_option0 = in_vars.id1594out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1595in_option1 = id1593out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1595x_1;

    switch((id1595in_sel.getValueAsLong())) {
      case 0l:
        id1595x_1 = id1595in_option0;
        break;
      case 1l:
        id1595x_1 = id1595in_option1;
        break;
      default:
        id1595x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1595out_result[(getCycle()+1)%2] = (id1595x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1596out_output;

  { // Node ID: 1596 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1596in_input = id1595out_result[getCycle()%2];

    id1596out_output = id1596in_input;
  }
  { // Node ID: 1598 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1598in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1598in_option0 = in_vars.id1597out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1598in_option1 = id1596out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1598x_1;

    switch((id1598in_sel.getValueAsLong())) {
      case 0l:
        id1598x_1 = id1598in_option0;
        break;
      case 1l:
        id1598x_1 = id1598in_option1;
        break;
      default:
        id1598x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1598out_result[(getCycle()+1)%2] = (id1598x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1599out_output;

  { // Node ID: 1599 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1599in_input = id1598out_result[getCycle()%2];

    id1599out_output = id1599in_input;
  }
  { // Node ID: 1601 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1601in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1601in_option0 = in_vars.id1600out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1601in_option1 = id1599out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1601x_1;

    switch((id1601in_sel.getValueAsLong())) {
      case 0l:
        id1601x_1 = id1601in_option0;
        break;
      case 1l:
        id1601x_1 = id1601in_option1;
        break;
      default:
        id1601x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1601out_result[(getCycle()+1)%2] = (id1601x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1602out_output;

  { // Node ID: 1602 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1602in_input = id1601out_result[getCycle()%2];

    id1602out_output = id1602in_input;
  }
  { // Node ID: 1604 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1604in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1604in_option0 = in_vars.id1603out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1604in_option1 = id1602out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1604x_1;

    switch((id1604in_sel.getValueAsLong())) {
      case 0l:
        id1604x_1 = id1604in_option0;
        break;
      case 1l:
        id1604x_1 = id1604in_option1;
        break;
      default:
        id1604x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1604out_result[(getCycle()+1)%2] = (id1604x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1605out_output;

  { // Node ID: 1605 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1605in_input = id1604out_result[getCycle()%2];

    id1605out_output = id1605in_input;
  }
  { // Node ID: 1607 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1607in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1607in_option0 = in_vars.id1606out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1607in_option1 = id1605out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1607x_1;

    switch((id1607in_sel.getValueAsLong())) {
      case 0l:
        id1607x_1 = id1607in_option0;
        break;
      case 1l:
        id1607x_1 = id1607in_option1;
        break;
      default:
        id1607x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1607out_result[(getCycle()+1)%2] = (id1607x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1608out_output;

  { // Node ID: 1608 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1608in_input = id1607out_result[getCycle()%2];

    id1608out_output = id1608in_input;
  }
  { // Node ID: 1610 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1610in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1610in_option0 = in_vars.id1609out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1610in_option1 = id1608out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1610x_1;

    switch((id1610in_sel.getValueAsLong())) {
      case 0l:
        id1610x_1 = id1610in_option0;
        break;
      case 1l:
        id1610x_1 = id1610in_option1;
        break;
      default:
        id1610x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1610out_result[(getCycle()+1)%2] = (id1610x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1611out_output;

  { // Node ID: 1611 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1611in_input = id1610out_result[getCycle()%2];

    id1611out_output = id1611in_input;
  }
  { // Node ID: 1613 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1613in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1613in_option0 = in_vars.id1612out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1613in_option1 = id1611out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1613x_1;

    switch((id1613in_sel.getValueAsLong())) {
      case 0l:
        id1613x_1 = id1613in_option0;
        break;
      case 1l:
        id1613x_1 = id1613in_option1;
        break;
      default:
        id1613x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1613out_result[(getCycle()+1)%2] = (id1613x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1614out_output;

  { // Node ID: 1614 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1614in_input = id1613out_result[getCycle()%2];

    id1614out_output = id1614in_input;
  }
  { // Node ID: 1616 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1616in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1616in_option0 = in_vars.id1615out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1616in_option1 = id1614out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1616x_1;

    switch((id1616in_sel.getValueAsLong())) {
      case 0l:
        id1616x_1 = id1616in_option0;
        break;
      case 1l:
        id1616x_1 = id1616in_option1;
        break;
      default:
        id1616x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1616out_result[(getCycle()+1)%2] = (id1616x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1617out_output;

  { // Node ID: 1617 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1617in_input = id1616out_result[getCycle()%2];

    id1617out_output = id1617in_input;
  }
  { // Node ID: 1619 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1619in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1619in_option0 = in_vars.id1618out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1619in_option1 = id1617out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1619x_1;

    switch((id1619in_sel.getValueAsLong())) {
      case 0l:
        id1619x_1 = id1619in_option0;
        break;
      case 1l:
        id1619x_1 = id1619in_option1;
        break;
      default:
        id1619x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1619out_result[(getCycle()+1)%2] = (id1619x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1620out_output;

  { // Node ID: 1620 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1620in_input = id1619out_result[getCycle()%2];

    id1620out_output = id1620in_input;
  }
  { // Node ID: 1622 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1622in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1622in_option0 = in_vars.id1621out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1622in_option1 = id1620out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1622x_1;

    switch((id1622in_sel.getValueAsLong())) {
      case 0l:
        id1622x_1 = id1622in_option0;
        break;
      case 1l:
        id1622x_1 = id1622in_option1;
        break;
      default:
        id1622x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1622out_result[(getCycle()+1)%2] = (id1622x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1623out_output;

  { // Node ID: 1623 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1623in_input = id1622out_result[getCycle()%2];

    id1623out_output = id1623in_input;
  }
  { // Node ID: 1625 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1625in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1625in_option0 = in_vars.id1624out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1625in_option1 = id1623out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1625x_1;

    switch((id1625in_sel.getValueAsLong())) {
      case 0l:
        id1625x_1 = id1625in_option0;
        break;
      case 1l:
        id1625x_1 = id1625in_option1;
        break;
      default:
        id1625x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1625out_result[(getCycle()+1)%2] = (id1625x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1626out_output;

  { // Node ID: 1626 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1626in_input = id1625out_result[getCycle()%2];

    id1626out_output = id1626in_input;
  }
  { // Node ID: 1628 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1628in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1628in_option0 = in_vars.id1627out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1628in_option1 = id1626out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1628x_1;

    switch((id1628in_sel.getValueAsLong())) {
      case 0l:
        id1628x_1 = id1628in_option0;
        break;
      case 1l:
        id1628x_1 = id1628in_option1;
        break;
      default:
        id1628x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1628out_result[(getCycle()+1)%2] = (id1628x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1629out_output;

  { // Node ID: 1629 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1629in_input = id1628out_result[getCycle()%2];

    id1629out_output = id1629in_input;
  }
  { // Node ID: 1631 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1631in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1631in_option0 = in_vars.id1630out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1631in_option1 = id1629out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1631x_1;

    switch((id1631in_sel.getValueAsLong())) {
      case 0l:
        id1631x_1 = id1631in_option0;
        break;
      case 1l:
        id1631x_1 = id1631in_option1;
        break;
      default:
        id1631x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1631out_result[(getCycle()+1)%2] = (id1631x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1632out_output;

  { // Node ID: 1632 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1632in_input = id1631out_result[getCycle()%2];

    id1632out_output = id1632in_input;
  }
  { // Node ID: 1634 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1634in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1634in_option0 = in_vars.id1633out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1634in_option1 = id1632out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1634x_1;

    switch((id1634in_sel.getValueAsLong())) {
      case 0l:
        id1634x_1 = id1634in_option0;
        break;
      case 1l:
        id1634x_1 = id1634in_option1;
        break;
      default:
        id1634x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1634out_result[(getCycle()+1)%2] = (id1634x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1635out_output;

  { // Node ID: 1635 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1635in_input = id1634out_result[getCycle()%2];

    id1635out_output = id1635in_input;
  }
  { // Node ID: 1637 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1637in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1637in_option0 = in_vars.id1636out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1637in_option1 = id1635out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1637x_1;

    switch((id1637in_sel.getValueAsLong())) {
      case 0l:
        id1637x_1 = id1637in_option0;
        break;
      case 1l:
        id1637x_1 = id1637in_option1;
        break;
      default:
        id1637x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1637out_result[(getCycle()+1)%2] = (id1637x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1638out_output;

  { // Node ID: 1638 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1638in_input = id1637out_result[getCycle()%2];

    id1638out_output = id1638in_input;
  }
  { // Node ID: 1640 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1640in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1640in_option0 = in_vars.id1639out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1640in_option1 = id1638out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1640x_1;

    switch((id1640in_sel.getValueAsLong())) {
      case 0l:
        id1640x_1 = id1640in_option0;
        break;
      case 1l:
        id1640x_1 = id1640in_option1;
        break;
      default:
        id1640x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1640out_result[(getCycle()+1)%2] = (id1640x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1641out_output;

  { // Node ID: 1641 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1641in_input = id1640out_result[getCycle()%2];

    id1641out_output = id1641in_input;
  }
  { // Node ID: 1643 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1643in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1643in_option0 = in_vars.id1642out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1643in_option1 = id1641out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1643x_1;

    switch((id1643in_sel.getValueAsLong())) {
      case 0l:
        id1643x_1 = id1643in_option0;
        break;
      case 1l:
        id1643x_1 = id1643in_option1;
        break;
      default:
        id1643x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1643out_result[(getCycle()+1)%2] = (id1643x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1644out_output;

  { // Node ID: 1644 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1644in_input = id1643out_result[getCycle()%2];

    id1644out_output = id1644in_input;
  }
  { // Node ID: 1646 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1646in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1646in_option0 = in_vars.id1645out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1646in_option1 = id1644out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1646x_1;

    switch((id1646in_sel.getValueAsLong())) {
      case 0l:
        id1646x_1 = id1646in_option0;
        break;
      case 1l:
        id1646x_1 = id1646in_option1;
        break;
      default:
        id1646x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1646out_result[(getCycle()+1)%2] = (id1646x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1647out_output;

  { // Node ID: 1647 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1647in_input = id1646out_result[getCycle()%2];

    id1647out_output = id1647in_input;
  }
  { // Node ID: 1649 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1649in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1649in_option0 = in_vars.id1648out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1649in_option1 = id1647out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1649x_1;

    switch((id1649in_sel.getValueAsLong())) {
      case 0l:
        id1649x_1 = id1649in_option0;
        break;
      case 1l:
        id1649x_1 = id1649in_option1;
        break;
      default:
        id1649x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1649out_result[(getCycle()+1)%2] = (id1649x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1650out_output;

  { // Node ID: 1650 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1650in_input = id1649out_result[getCycle()%2];

    id1650out_output = id1650in_input;
  }
  { // Node ID: 1652 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1652in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1652in_option0 = in_vars.id1651out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1652in_option1 = id1650out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1652x_1;

    switch((id1652in_sel.getValueAsLong())) {
      case 0l:
        id1652x_1 = id1652in_option0;
        break;
      case 1l:
        id1652x_1 = id1652in_option1;
        break;
      default:
        id1652x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1652out_result[(getCycle()+1)%2] = (id1652x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1653out_output;

  { // Node ID: 1653 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1653in_input = id1652out_result[getCycle()%2];

    id1653out_output = id1653in_input;
  }
  { // Node ID: 1655 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1655in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1655in_option0 = in_vars.id1654out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1655in_option1 = id1653out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1655x_1;

    switch((id1655in_sel.getValueAsLong())) {
      case 0l:
        id1655x_1 = id1655in_option0;
        break;
      case 1l:
        id1655x_1 = id1655in_option1;
        break;
      default:
        id1655x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1655out_result[(getCycle()+1)%2] = (id1655x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1656out_output;

  { // Node ID: 1656 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1656in_input = id1655out_result[getCycle()%2];

    id1656out_output = id1656in_input;
  }
  { // Node ID: 1658 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1658in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1658in_option0 = in_vars.id1657out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1658in_option1 = id1656out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1658x_1;

    switch((id1658in_sel.getValueAsLong())) {
      case 0l:
        id1658x_1 = id1658in_option0;
        break;
      case 1l:
        id1658x_1 = id1658in_option1;
        break;
      default:
        id1658x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1658out_result[(getCycle()+1)%2] = (id1658x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1659out_output;

  { // Node ID: 1659 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1659in_input = id1658out_result[getCycle()%2];

    id1659out_output = id1659in_input;
  }
  { // Node ID: 1661 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1661in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1661in_option0 = in_vars.id1660out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1661in_option1 = id1659out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1661x_1;

    switch((id1661in_sel.getValueAsLong())) {
      case 0l:
        id1661x_1 = id1661in_option0;
        break;
      case 1l:
        id1661x_1 = id1661in_option1;
        break;
      default:
        id1661x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1661out_result[(getCycle()+1)%2] = (id1661x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1662out_output;

  { // Node ID: 1662 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1662in_input = id1661out_result[getCycle()%2];

    id1662out_output = id1662in_input;
  }
  { // Node ID: 1664 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1664in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1664in_option0 = in_vars.id1663out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1664in_option1 = id1662out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1664x_1;

    switch((id1664in_sel.getValueAsLong())) {
      case 0l:
        id1664x_1 = id1664in_option0;
        break;
      case 1l:
        id1664x_1 = id1664in_option1;
        break;
      default:
        id1664x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1664out_result[(getCycle()+1)%2] = (id1664x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1665out_output;

  { // Node ID: 1665 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1665in_input = id1664out_result[getCycle()%2];

    id1665out_output = id1665in_input;
  }
  { // Node ID: 1667 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1667in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1667in_option0 = in_vars.id1666out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1667in_option1 = id1665out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1667x_1;

    switch((id1667in_sel.getValueAsLong())) {
      case 0l:
        id1667x_1 = id1667in_option0;
        break;
      case 1l:
        id1667x_1 = id1667in_option1;
        break;
      default:
        id1667x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1667out_result[(getCycle()+1)%2] = (id1667x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1668out_output;

  { // Node ID: 1668 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1668in_input = id1667out_result[getCycle()%2];

    id1668out_output = id1668in_input;
  }
  { // Node ID: 1670 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1670in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1670in_option0 = in_vars.id1669out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1670in_option1 = id1668out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1670x_1;

    switch((id1670in_sel.getValueAsLong())) {
      case 0l:
        id1670x_1 = id1670in_option0;
        break;
      case 1l:
        id1670x_1 = id1670in_option1;
        break;
      default:
        id1670x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1670out_result[(getCycle()+1)%2] = (id1670x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1671out_output;

  { // Node ID: 1671 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1671in_input = id1670out_result[getCycle()%2];

    id1671out_output = id1671in_input;
  }
  { // Node ID: 1673 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1673in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1673in_option0 = in_vars.id1672out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1673in_option1 = id1671out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1673x_1;

    switch((id1673in_sel.getValueAsLong())) {
      case 0l:
        id1673x_1 = id1673in_option0;
        break;
      case 1l:
        id1673x_1 = id1673in_option1;
        break;
      default:
        id1673x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1673out_result[(getCycle()+1)%2] = (id1673x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1674out_output;

  { // Node ID: 1674 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1674in_input = id1673out_result[getCycle()%2];

    id1674out_output = id1674in_input;
  }
  { // Node ID: 1676 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1676in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1676in_option0 = in_vars.id1675out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1676in_option1 = id1674out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1676x_1;

    switch((id1676in_sel.getValueAsLong())) {
      case 0l:
        id1676x_1 = id1676in_option0;
        break;
      case 1l:
        id1676x_1 = id1676in_option1;
        break;
      default:
        id1676x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1676out_result[(getCycle()+1)%2] = (id1676x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1677out_output;

  { // Node ID: 1677 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1677in_input = id1676out_result[getCycle()%2];

    id1677out_output = id1677in_input;
  }
  { // Node ID: 1679 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1679in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1679in_option0 = in_vars.id1678out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1679in_option1 = id1677out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1679x_1;

    switch((id1679in_sel.getValueAsLong())) {
      case 0l:
        id1679x_1 = id1679in_option0;
        break;
      case 1l:
        id1679x_1 = id1679in_option1;
        break;
      default:
        id1679x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1679out_result[(getCycle()+1)%2] = (id1679x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1680out_output;

  { // Node ID: 1680 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1680in_input = id1679out_result[getCycle()%2];

    id1680out_output = id1680in_input;
  }
  { // Node ID: 1682 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1682in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1682in_option0 = in_vars.id1681out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1682in_option1 = id1680out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1682x_1;

    switch((id1682in_sel.getValueAsLong())) {
      case 0l:
        id1682x_1 = id1682in_option0;
        break;
      case 1l:
        id1682x_1 = id1682in_option1;
        break;
      default:
        id1682x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1682out_result[(getCycle()+1)%2] = (id1682x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1683out_output;

  { // Node ID: 1683 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1683in_input = id1682out_result[getCycle()%2];

    id1683out_output = id1683in_input;
  }
  { // Node ID: 1685 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1685in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1685in_option0 = in_vars.id1684out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1685in_option1 = id1683out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1685x_1;

    switch((id1685in_sel.getValueAsLong())) {
      case 0l:
        id1685x_1 = id1685in_option0;
        break;
      case 1l:
        id1685x_1 = id1685in_option1;
        break;
      default:
        id1685x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1685out_result[(getCycle()+1)%2] = (id1685x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1686out_output;

  { // Node ID: 1686 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1686in_input = id1685out_result[getCycle()%2];

    id1686out_output = id1686in_input;
  }
  { // Node ID: 1688 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1688in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1688in_option0 = in_vars.id1687out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1688in_option1 = id1686out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1688x_1;

    switch((id1688in_sel.getValueAsLong())) {
      case 0l:
        id1688x_1 = id1688in_option0;
        break;
      case 1l:
        id1688x_1 = id1688in_option1;
        break;
      default:
        id1688x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1688out_result[(getCycle()+1)%2] = (id1688x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1689out_output;

  { // Node ID: 1689 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1689in_input = id1688out_result[getCycle()%2];

    id1689out_output = id1689in_input;
  }
  { // Node ID: 1691 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1691in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1691in_option0 = in_vars.id1690out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1691in_option1 = id1689out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1691x_1;

    switch((id1691in_sel.getValueAsLong())) {
      case 0l:
        id1691x_1 = id1691in_option0;
        break;
      case 1l:
        id1691x_1 = id1691in_option1;
        break;
      default:
        id1691x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1691out_result[(getCycle()+1)%2] = (id1691x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1692out_output;

  { // Node ID: 1692 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1692in_input = id1691out_result[getCycle()%2];

    id1692out_output = id1692in_input;
  }
  { // Node ID: 1694 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1694in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1694in_option0 = in_vars.id1693out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1694in_option1 = id1692out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1694x_1;

    switch((id1694in_sel.getValueAsLong())) {
      case 0l:
        id1694x_1 = id1694in_option0;
        break;
      case 1l:
        id1694x_1 = id1694in_option1;
        break;
      default:
        id1694x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1694out_result[(getCycle()+1)%2] = (id1694x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1695out_output;

  { // Node ID: 1695 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1695in_input = id1694out_result[getCycle()%2];

    id1695out_output = id1695in_input;
  }
  { // Node ID: 1697 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1697in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1697in_option0 = in_vars.id1696out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1697in_option1 = id1695out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1697x_1;

    switch((id1697in_sel.getValueAsLong())) {
      case 0l:
        id1697x_1 = id1697in_option0;
        break;
      case 1l:
        id1697x_1 = id1697in_option1;
        break;
      default:
        id1697x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1697out_result[(getCycle()+1)%2] = (id1697x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1698out_output;

  { // Node ID: 1698 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1698in_input = id1697out_result[getCycle()%2];

    id1698out_output = id1698in_input;
  }
  { // Node ID: 1700 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1700in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1700in_option0 = in_vars.id1699out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1700in_option1 = id1698out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1700x_1;

    switch((id1700in_sel.getValueAsLong())) {
      case 0l:
        id1700x_1 = id1700in_option0;
        break;
      case 1l:
        id1700x_1 = id1700in_option1;
        break;
      default:
        id1700x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1700out_result[(getCycle()+1)%2] = (id1700x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1701out_output;

  { // Node ID: 1701 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1701in_input = id1700out_result[getCycle()%2];

    id1701out_output = id1701in_input;
  }
  { // Node ID: 1703 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1703in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1703in_option0 = in_vars.id1702out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1703in_option1 = id1701out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1703x_1;

    switch((id1703in_sel.getValueAsLong())) {
      case 0l:
        id1703x_1 = id1703in_option0;
        break;
      case 1l:
        id1703x_1 = id1703in_option1;
        break;
      default:
        id1703x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1703out_result[(getCycle()+1)%2] = (id1703x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1704out_output;

  { // Node ID: 1704 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1704in_input = id1703out_result[getCycle()%2];

    id1704out_output = id1704in_input;
  }
  { // Node ID: 1706 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1706in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1706in_option0 = in_vars.id1705out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1706in_option1 = id1704out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1706x_1;

    switch((id1706in_sel.getValueAsLong())) {
      case 0l:
        id1706x_1 = id1706in_option0;
        break;
      case 1l:
        id1706x_1 = id1706in_option1;
        break;
      default:
        id1706x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1706out_result[(getCycle()+1)%2] = (id1706x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1707out_output;

  { // Node ID: 1707 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1707in_input = id1706out_result[getCycle()%2];

    id1707out_output = id1707in_input;
  }
  { // Node ID: 1709 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1709in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1709in_option0 = in_vars.id1708out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1709in_option1 = id1707out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1709x_1;

    switch((id1709in_sel.getValueAsLong())) {
      case 0l:
        id1709x_1 = id1709in_option0;
        break;
      case 1l:
        id1709x_1 = id1709in_option1;
        break;
      default:
        id1709x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1709out_result[(getCycle()+1)%2] = (id1709x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1710out_output;

  { // Node ID: 1710 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1710in_input = id1709out_result[getCycle()%2];

    id1710out_output = id1710in_input;
  }
  { // Node ID: 1712 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1712in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1712in_option0 = in_vars.id1711out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1712in_option1 = id1710out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1712x_1;

    switch((id1712in_sel.getValueAsLong())) {
      case 0l:
        id1712x_1 = id1712in_option0;
        break;
      case 1l:
        id1712x_1 = id1712in_option1;
        break;
      default:
        id1712x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1712out_result[(getCycle()+1)%2] = (id1712x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1713out_output;

  { // Node ID: 1713 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1713in_input = id1712out_result[getCycle()%2];

    id1713out_output = id1713in_input;
  }
  { // Node ID: 1715 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1715in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1715in_option0 = in_vars.id1714out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1715in_option1 = id1713out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1715x_1;

    switch((id1715in_sel.getValueAsLong())) {
      case 0l:
        id1715x_1 = id1715in_option0;
        break;
      case 1l:
        id1715x_1 = id1715in_option1;
        break;
      default:
        id1715x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1715out_result[(getCycle()+1)%2] = (id1715x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1716out_output;

  { // Node ID: 1716 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1716in_input = id1715out_result[getCycle()%2];

    id1716out_output = id1716in_input;
  }
  { // Node ID: 1718 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1718in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1718in_option0 = in_vars.id1717out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1718in_option1 = id1716out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1718x_1;

    switch((id1718in_sel.getValueAsLong())) {
      case 0l:
        id1718x_1 = id1718in_option0;
        break;
      case 1l:
        id1718x_1 = id1718in_option1;
        break;
      default:
        id1718x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1718out_result[(getCycle()+1)%2] = (id1718x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1719out_output;

  { // Node ID: 1719 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1719in_input = id1718out_result[getCycle()%2];

    id1719out_output = id1719in_input;
  }
  { // Node ID: 1721 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1721in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1721in_option0 = in_vars.id1720out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1721in_option1 = id1719out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1721x_1;

    switch((id1721in_sel.getValueAsLong())) {
      case 0l:
        id1721x_1 = id1721in_option0;
        break;
      case 1l:
        id1721x_1 = id1721in_option1;
        break;
      default:
        id1721x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1721out_result[(getCycle()+1)%2] = (id1721x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1722out_output;

  { // Node ID: 1722 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1722in_input = id1721out_result[getCycle()%2];

    id1722out_output = id1722in_input;
  }
  { // Node ID: 1724 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1724in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1724in_option0 = in_vars.id1723out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1724in_option1 = id1722out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1724x_1;

    switch((id1724in_sel.getValueAsLong())) {
      case 0l:
        id1724x_1 = id1724in_option0;
        break;
      case 1l:
        id1724x_1 = id1724in_option1;
        break;
      default:
        id1724x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1724out_result[(getCycle()+1)%2] = (id1724x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1725out_output;

  { // Node ID: 1725 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1725in_input = id1724out_result[getCycle()%2];

    id1725out_output = id1725in_input;
  }
  { // Node ID: 1727 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1727in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1727in_option0 = in_vars.id1726out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1727in_option1 = id1725out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1727x_1;

    switch((id1727in_sel.getValueAsLong())) {
      case 0l:
        id1727x_1 = id1727in_option0;
        break;
      case 1l:
        id1727x_1 = id1727in_option1;
        break;
      default:
        id1727x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1727out_result[(getCycle()+1)%2] = (id1727x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1728out_output;

  { // Node ID: 1728 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1728in_input = id1727out_result[getCycle()%2];

    id1728out_output = id1728in_input;
  }
  { // Node ID: 1730 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1730in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1730in_option0 = in_vars.id1729out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1730in_option1 = id1728out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1730x_1;

    switch((id1730in_sel.getValueAsLong())) {
      case 0l:
        id1730x_1 = id1730in_option0;
        break;
      case 1l:
        id1730x_1 = id1730in_option1;
        break;
      default:
        id1730x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1730out_result[(getCycle()+1)%2] = (id1730x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1731out_output;

  { // Node ID: 1731 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1731in_input = id1730out_result[getCycle()%2];

    id1731out_output = id1731in_input;
  }
  { // Node ID: 1733 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1733in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1733in_option0 = in_vars.id1732out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1733in_option1 = id1731out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1733x_1;

    switch((id1733in_sel.getValueAsLong())) {
      case 0l:
        id1733x_1 = id1733in_option0;
        break;
      case 1l:
        id1733x_1 = id1733in_option1;
        break;
      default:
        id1733x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1733out_result[(getCycle()+1)%2] = (id1733x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1734out_output;

  { // Node ID: 1734 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1734in_input = id1733out_result[getCycle()%2];

    id1734out_output = id1734in_input;
  }
  { // Node ID: 1736 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1736in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1736in_option0 = in_vars.id1735out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1736in_option1 = id1734out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1736x_1;

    switch((id1736in_sel.getValueAsLong())) {
      case 0l:
        id1736x_1 = id1736in_option0;
        break;
      case 1l:
        id1736x_1 = id1736in_option1;
        break;
      default:
        id1736x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1736out_result[(getCycle()+1)%2] = (id1736x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1737out_output;

  { // Node ID: 1737 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1737in_input = id1736out_result[getCycle()%2];

    id1737out_output = id1737in_input;
  }
  { // Node ID: 1739 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1739in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1739in_option0 = in_vars.id1738out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1739in_option1 = id1737out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1739x_1;

    switch((id1739in_sel.getValueAsLong())) {
      case 0l:
        id1739x_1 = id1739in_option0;
        break;
      case 1l:
        id1739x_1 = id1739in_option1;
        break;
      default:
        id1739x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1739out_result[(getCycle()+1)%2] = (id1739x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1740out_output;

  { // Node ID: 1740 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1740in_input = id1739out_result[getCycle()%2];

    id1740out_output = id1740in_input;
  }
  { // Node ID: 1742 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1742in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1742in_option0 = in_vars.id1741out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1742in_option1 = id1740out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1742x_1;

    switch((id1742in_sel.getValueAsLong())) {
      case 0l:
        id1742x_1 = id1742in_option0;
        break;
      case 1l:
        id1742x_1 = id1742in_option1;
        break;
      default:
        id1742x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1742out_result[(getCycle()+1)%2] = (id1742x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1743out_output;

  { // Node ID: 1743 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1743in_input = id1742out_result[getCycle()%2];

    id1743out_output = id1743in_input;
  }
  { // Node ID: 1745 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1745in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1745in_option0 = in_vars.id1744out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1745in_option1 = id1743out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1745x_1;

    switch((id1745in_sel.getValueAsLong())) {
      case 0l:
        id1745x_1 = id1745in_option0;
        break;
      case 1l:
        id1745x_1 = id1745in_option1;
        break;
      default:
        id1745x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1745out_result[(getCycle()+1)%2] = (id1745x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1746out_output;

  { // Node ID: 1746 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1746in_input = id1745out_result[getCycle()%2];

    id1746out_output = id1746in_input;
  }
  { // Node ID: 1748 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1748in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1748in_option0 = in_vars.id1747out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1748in_option1 = id1746out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1748x_1;

    switch((id1748in_sel.getValueAsLong())) {
      case 0l:
        id1748x_1 = id1748in_option0;
        break;
      case 1l:
        id1748x_1 = id1748in_option1;
        break;
      default:
        id1748x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1748out_result[(getCycle()+1)%2] = (id1748x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1749out_output;

  { // Node ID: 1749 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1749in_input = id1748out_result[getCycle()%2];

    id1749out_output = id1749in_input;
  }
  { // Node ID: 1751 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1751in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1751in_option0 = in_vars.id1750out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1751in_option1 = id1749out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1751x_1;

    switch((id1751in_sel.getValueAsLong())) {
      case 0l:
        id1751x_1 = id1751in_option0;
        break;
      case 1l:
        id1751x_1 = id1751in_option1;
        break;
      default:
        id1751x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1751out_result[(getCycle()+1)%2] = (id1751x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1752out_output;

  { // Node ID: 1752 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1752in_input = id1751out_result[getCycle()%2];

    id1752out_output = id1752in_input;
  }
  { // Node ID: 1754 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1754in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1754in_option0 = in_vars.id1753out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1754in_option1 = id1752out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1754x_1;

    switch((id1754in_sel.getValueAsLong())) {
      case 0l:
        id1754x_1 = id1754in_option0;
        break;
      case 1l:
        id1754x_1 = id1754in_option1;
        break;
      default:
        id1754x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1754out_result[(getCycle()+1)%2] = (id1754x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1755out_output;

  { // Node ID: 1755 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1755in_input = id1754out_result[getCycle()%2];

    id1755out_output = id1755in_input;
  }
  { // Node ID: 1757 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1757in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1757in_option0 = in_vars.id1756out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1757in_option1 = id1755out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1757x_1;

    switch((id1757in_sel.getValueAsLong())) {
      case 0l:
        id1757x_1 = id1757in_option0;
        break;
      case 1l:
        id1757x_1 = id1757in_option1;
        break;
      default:
        id1757x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1757out_result[(getCycle()+1)%2] = (id1757x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1758out_output;

  { // Node ID: 1758 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1758in_input = id1757out_result[getCycle()%2];

    id1758out_output = id1758in_input;
  }
  { // Node ID: 1760 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1760in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1760in_option0 = in_vars.id1759out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1760in_option1 = id1758out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1760x_1;

    switch((id1760in_sel.getValueAsLong())) {
      case 0l:
        id1760x_1 = id1760in_option0;
        break;
      case 1l:
        id1760x_1 = id1760in_option1;
        break;
      default:
        id1760x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1760out_result[(getCycle()+1)%2] = (id1760x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1761out_output;

  { // Node ID: 1761 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1761in_input = id1760out_result[getCycle()%2];

    id1761out_output = id1761in_input;
  }
  { // Node ID: 1763 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1763in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1763in_option0 = in_vars.id1762out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1763in_option1 = id1761out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1763x_1;

    switch((id1763in_sel.getValueAsLong())) {
      case 0l:
        id1763x_1 = id1763in_option0;
        break;
      case 1l:
        id1763x_1 = id1763in_option1;
        break;
      default:
        id1763x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1763out_result[(getCycle()+1)%2] = (id1763x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1764out_output;

  { // Node ID: 1764 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1764in_input = id1763out_result[getCycle()%2];

    id1764out_output = id1764in_input;
  }
  { // Node ID: 1766 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1766in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1766in_option0 = in_vars.id1765out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1766in_option1 = id1764out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1766x_1;

    switch((id1766in_sel.getValueAsLong())) {
      case 0l:
        id1766x_1 = id1766in_option0;
        break;
      case 1l:
        id1766x_1 = id1766in_option1;
        break;
      default:
        id1766x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1766out_result[(getCycle()+1)%2] = (id1766x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1767out_output;

  { // Node ID: 1767 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1767in_input = id1766out_result[getCycle()%2];

    id1767out_output = id1767in_input;
  }
  { // Node ID: 1769 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1769in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1769in_option0 = in_vars.id1768out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1769in_option1 = id1767out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1769x_1;

    switch((id1769in_sel.getValueAsLong())) {
      case 0l:
        id1769x_1 = id1769in_option0;
        break;
      case 1l:
        id1769x_1 = id1769in_option1;
        break;
      default:
        id1769x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1769out_result[(getCycle()+1)%2] = (id1769x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1770out_output;

  { // Node ID: 1770 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1770in_input = id1769out_result[getCycle()%2];

    id1770out_output = id1770in_input;
  }
  { // Node ID: 1772 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1772in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1772in_option0 = in_vars.id1771out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1772in_option1 = id1770out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1772x_1;

    switch((id1772in_sel.getValueAsLong())) {
      case 0l:
        id1772x_1 = id1772in_option0;
        break;
      case 1l:
        id1772x_1 = id1772in_option1;
        break;
      default:
        id1772x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1772out_result[(getCycle()+1)%2] = (id1772x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1773out_output;

  { // Node ID: 1773 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1773in_input = id1772out_result[getCycle()%2];

    id1773out_output = id1773in_input;
  }
  { // Node ID: 1775 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1775in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1775in_option0 = in_vars.id1774out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1775in_option1 = id1773out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1775x_1;

    switch((id1775in_sel.getValueAsLong())) {
      case 0l:
        id1775x_1 = id1775in_option0;
        break;
      case 1l:
        id1775x_1 = id1775in_option1;
        break;
      default:
        id1775x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1775out_result[(getCycle()+1)%2] = (id1775x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1776out_output;

  { // Node ID: 1776 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1776in_input = id1775out_result[getCycle()%2];

    id1776out_output = id1776in_input;
  }
  { // Node ID: 1778 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1778in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1778in_option0 = in_vars.id1777out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1778in_option1 = id1776out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1778x_1;

    switch((id1778in_sel.getValueAsLong())) {
      case 0l:
        id1778x_1 = id1778in_option0;
        break;
      case 1l:
        id1778x_1 = id1778in_option1;
        break;
      default:
        id1778x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1778out_result[(getCycle()+1)%2] = (id1778x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1779out_output;

  { // Node ID: 1779 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1779in_input = id1778out_result[getCycle()%2];

    id1779out_output = id1779in_input;
  }
  { // Node ID: 1781 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1781in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1781in_option0 = in_vars.id1780out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1781in_option1 = id1779out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1781x_1;

    switch((id1781in_sel.getValueAsLong())) {
      case 0l:
        id1781x_1 = id1781in_option0;
        break;
      case 1l:
        id1781x_1 = id1781in_option1;
        break;
      default:
        id1781x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1781out_result[(getCycle()+1)%2] = (id1781x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1782out_output;

  { // Node ID: 1782 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1782in_input = id1781out_result[getCycle()%2];

    id1782out_output = id1782in_input;
  }
  { // Node ID: 1784 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1784in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1784in_option0 = in_vars.id1783out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1784in_option1 = id1782out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1784x_1;

    switch((id1784in_sel.getValueAsLong())) {
      case 0l:
        id1784x_1 = id1784in_option0;
        break;
      case 1l:
        id1784x_1 = id1784in_option1;
        break;
      default:
        id1784x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1784out_result[(getCycle()+1)%2] = (id1784x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1785out_output;

  { // Node ID: 1785 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1785in_input = id1784out_result[getCycle()%2];

    id1785out_output = id1785in_input;
  }
  { // Node ID: 1787 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1787in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1787in_option0 = in_vars.id1786out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1787in_option1 = id1785out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1787x_1;

    switch((id1787in_sel.getValueAsLong())) {
      case 0l:
        id1787x_1 = id1787in_option0;
        break;
      case 1l:
        id1787x_1 = id1787in_option1;
        break;
      default:
        id1787x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1787out_result[(getCycle()+1)%2] = (id1787x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1788out_output;

  { // Node ID: 1788 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1788in_input = id1787out_result[getCycle()%2];

    id1788out_output = id1788in_input;
  }
  { // Node ID: 1790 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1790in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1790in_option0 = in_vars.id1789out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1790in_option1 = id1788out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1790x_1;

    switch((id1790in_sel.getValueAsLong())) {
      case 0l:
        id1790x_1 = id1790in_option0;
        break;
      case 1l:
        id1790x_1 = id1790in_option1;
        break;
      default:
        id1790x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1790out_result[(getCycle()+1)%2] = (id1790x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1791out_output;

  { // Node ID: 1791 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1791in_input = id1790out_result[getCycle()%2];

    id1791out_output = id1791in_input;
  }
  { // Node ID: 1793 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1793in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1793in_option0 = in_vars.id1792out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1793in_option1 = id1791out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1793x_1;

    switch((id1793in_sel.getValueAsLong())) {
      case 0l:
        id1793x_1 = id1793in_option0;
        break;
      case 1l:
        id1793x_1 = id1793in_option1;
        break;
      default:
        id1793x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1793out_result[(getCycle()+1)%2] = (id1793x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1794out_output;

  { // Node ID: 1794 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1794in_input = id1793out_result[getCycle()%2];

    id1794out_output = id1794in_input;
  }
  { // Node ID: 1796 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1796in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1796in_option0 = in_vars.id1795out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1796in_option1 = id1794out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1796x_1;

    switch((id1796in_sel.getValueAsLong())) {
      case 0l:
        id1796x_1 = id1796in_option0;
        break;
      case 1l:
        id1796x_1 = id1796in_option1;
        break;
      default:
        id1796x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1796out_result[(getCycle()+1)%2] = (id1796x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1797out_output;

  { // Node ID: 1797 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1797in_input = id1796out_result[getCycle()%2];

    id1797out_output = id1797in_input;
  }
  { // Node ID: 1799 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1799in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1799in_option0 = in_vars.id1798out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1799in_option1 = id1797out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1799x_1;

    switch((id1799in_sel.getValueAsLong())) {
      case 0l:
        id1799x_1 = id1799in_option0;
        break;
      case 1l:
        id1799x_1 = id1799in_option1;
        break;
      default:
        id1799x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1799out_result[(getCycle()+1)%2] = (id1799x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1800out_output;

  { // Node ID: 1800 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1800in_input = id1799out_result[getCycle()%2];

    id1800out_output = id1800in_input;
  }
  { // Node ID: 1802 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1802in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1802in_option0 = in_vars.id1801out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1802in_option1 = id1800out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1802x_1;

    switch((id1802in_sel.getValueAsLong())) {
      case 0l:
        id1802x_1 = id1802in_option0;
        break;
      case 1l:
        id1802x_1 = id1802in_option1;
        break;
      default:
        id1802x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1802out_result[(getCycle()+1)%2] = (id1802x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1803out_output;

  { // Node ID: 1803 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1803in_input = id1802out_result[getCycle()%2];

    id1803out_output = id1803in_input;
  }
  { // Node ID: 1805 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1805in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1805in_option0 = in_vars.id1804out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1805in_option1 = id1803out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1805x_1;

    switch((id1805in_sel.getValueAsLong())) {
      case 0l:
        id1805x_1 = id1805in_option0;
        break;
      case 1l:
        id1805x_1 = id1805in_option1;
        break;
      default:
        id1805x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1805out_result[(getCycle()+1)%2] = (id1805x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1806out_output;

  { // Node ID: 1806 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1806in_input = id1805out_result[getCycle()%2];

    id1806out_output = id1806in_input;
  }
  { // Node ID: 1808 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1808in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1808in_option0 = in_vars.id1807out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1808in_option1 = id1806out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1808x_1;

    switch((id1808in_sel.getValueAsLong())) {
      case 0l:
        id1808x_1 = id1808in_option0;
        break;
      case 1l:
        id1808x_1 = id1808in_option1;
        break;
      default:
        id1808x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1808out_result[(getCycle()+1)%2] = (id1808x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1809out_output;

  { // Node ID: 1809 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1809in_input = id1808out_result[getCycle()%2];

    id1809out_output = id1809in_input;
  }
  { // Node ID: 1811 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1811in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1811in_option0 = in_vars.id1810out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1811in_option1 = id1809out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1811x_1;

    switch((id1811in_sel.getValueAsLong())) {
      case 0l:
        id1811x_1 = id1811in_option0;
        break;
      case 1l:
        id1811x_1 = id1811in_option1;
        break;
      default:
        id1811x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1811out_result[(getCycle()+1)%2] = (id1811x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1812out_output;

  { // Node ID: 1812 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1812in_input = id1811out_result[getCycle()%2];

    id1812out_output = id1812in_input;
  }
  { // Node ID: 1814 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1814in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1814in_option0 = in_vars.id1813out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1814in_option1 = id1812out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1814x_1;

    switch((id1814in_sel.getValueAsLong())) {
      case 0l:
        id1814x_1 = id1814in_option0;
        break;
      case 1l:
        id1814x_1 = id1814in_option1;
        break;
      default:
        id1814x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1814out_result[(getCycle()+1)%2] = (id1814x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1815out_output;

  { // Node ID: 1815 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1815in_input = id1814out_result[getCycle()%2];

    id1815out_output = id1815in_input;
  }
  { // Node ID: 1817 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1817in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1817in_option0 = in_vars.id1816out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1817in_option1 = id1815out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1817x_1;

    switch((id1817in_sel.getValueAsLong())) {
      case 0l:
        id1817x_1 = id1817in_option0;
        break;
      case 1l:
        id1817x_1 = id1817in_option1;
        break;
      default:
        id1817x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1817out_result[(getCycle()+1)%2] = (id1817x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1818out_output;

  { // Node ID: 1818 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1818in_input = id1817out_result[getCycle()%2];

    id1818out_output = id1818in_input;
  }
  { // Node ID: 1820 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1820in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1820in_option0 = in_vars.id1819out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1820in_option1 = id1818out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1820x_1;

    switch((id1820in_sel.getValueAsLong())) {
      case 0l:
        id1820x_1 = id1820in_option0;
        break;
      case 1l:
        id1820x_1 = id1820in_option1;
        break;
      default:
        id1820x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1820out_result[(getCycle()+1)%2] = (id1820x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1821out_output;

  { // Node ID: 1821 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1821in_input = id1820out_result[getCycle()%2];

    id1821out_output = id1821in_input;
  }
  { // Node ID: 1823 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1823in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1823in_option0 = in_vars.id1822out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1823in_option1 = id1821out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1823x_1;

    switch((id1823in_sel.getValueAsLong())) {
      case 0l:
        id1823x_1 = id1823in_option0;
        break;
      case 1l:
        id1823x_1 = id1823in_option1;
        break;
      default:
        id1823x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1823out_result[(getCycle()+1)%2] = (id1823x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1824out_output;

  { // Node ID: 1824 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1824in_input = id1823out_result[getCycle()%2];

    id1824out_output = id1824in_input;
  }
  { // Node ID: 1826 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1826in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1826in_option0 = in_vars.id1825out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1826in_option1 = id1824out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1826x_1;

    switch((id1826in_sel.getValueAsLong())) {
      case 0l:
        id1826x_1 = id1826in_option0;
        break;
      case 1l:
        id1826x_1 = id1826in_option1;
        break;
      default:
        id1826x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1826out_result[(getCycle()+1)%2] = (id1826x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1827out_output;

  { // Node ID: 1827 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1827in_input = id1826out_result[getCycle()%2];

    id1827out_output = id1827in_input;
  }
  { // Node ID: 1829 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1829in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1829in_option0 = in_vars.id1828out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1829in_option1 = id1827out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1829x_1;

    switch((id1829in_sel.getValueAsLong())) {
      case 0l:
        id1829x_1 = id1829in_option0;
        break;
      case 1l:
        id1829x_1 = id1829in_option1;
        break;
      default:
        id1829x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1829out_result[(getCycle()+1)%2] = (id1829x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1830out_output;

  { // Node ID: 1830 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1830in_input = id1829out_result[getCycle()%2];

    id1830out_output = id1830in_input;
  }
  { // Node ID: 1832 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1832in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1832in_option0 = in_vars.id1831out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1832in_option1 = id1830out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1832x_1;

    switch((id1832in_sel.getValueAsLong())) {
      case 0l:
        id1832x_1 = id1832in_option0;
        break;
      case 1l:
        id1832x_1 = id1832in_option1;
        break;
      default:
        id1832x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1832out_result[(getCycle()+1)%2] = (id1832x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1833out_output;

  { // Node ID: 1833 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1833in_input = id1832out_result[getCycle()%2];

    id1833out_output = id1833in_input;
  }
  { // Node ID: 1835 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1835in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1835in_option0 = in_vars.id1834out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1835in_option1 = id1833out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1835x_1;

    switch((id1835in_sel.getValueAsLong())) {
      case 0l:
        id1835x_1 = id1835in_option0;
        break;
      case 1l:
        id1835x_1 = id1835in_option1;
        break;
      default:
        id1835x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1835out_result[(getCycle()+1)%2] = (id1835x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1836out_output;

  { // Node ID: 1836 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1836in_input = id1835out_result[getCycle()%2];

    id1836out_output = id1836in_input;
  }
  { // Node ID: 1838 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1838in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1838in_option0 = in_vars.id1837out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1838in_option1 = id1836out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1838x_1;

    switch((id1838in_sel.getValueAsLong())) {
      case 0l:
        id1838x_1 = id1838in_option0;
        break;
      case 1l:
        id1838x_1 = id1838in_option1;
        break;
      default:
        id1838x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1838out_result[(getCycle()+1)%2] = (id1838x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1839out_output;

  { // Node ID: 1839 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1839in_input = id1838out_result[getCycle()%2];

    id1839out_output = id1839in_input;
  }
  { // Node ID: 1841 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1841in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1841in_option0 = in_vars.id1840out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1841in_option1 = id1839out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1841x_1;

    switch((id1841in_sel.getValueAsLong())) {
      case 0l:
        id1841x_1 = id1841in_option0;
        break;
      case 1l:
        id1841x_1 = id1841in_option1;
        break;
      default:
        id1841x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1841out_result[(getCycle()+1)%2] = (id1841x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1842out_output;

  { // Node ID: 1842 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1842in_input = id1841out_result[getCycle()%2];

    id1842out_output = id1842in_input;
  }
  { // Node ID: 1844 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1844in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1844in_option0 = in_vars.id1843out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1844in_option1 = id1842out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1844x_1;

    switch((id1844in_sel.getValueAsLong())) {
      case 0l:
        id1844x_1 = id1844in_option0;
        break;
      case 1l:
        id1844x_1 = id1844in_option1;
        break;
      default:
        id1844x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1844out_result[(getCycle()+1)%2] = (id1844x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1845out_output;

  { // Node ID: 1845 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1845in_input = id1844out_result[getCycle()%2];

    id1845out_output = id1845in_input;
  }
  { // Node ID: 1847 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1847in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1847in_option0 = in_vars.id1846out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1847in_option1 = id1845out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1847x_1;

    switch((id1847in_sel.getValueAsLong())) {
      case 0l:
        id1847x_1 = id1847in_option0;
        break;
      case 1l:
        id1847x_1 = id1847in_option1;
        break;
      default:
        id1847x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1847out_result[(getCycle()+1)%2] = (id1847x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1848out_output;

  { // Node ID: 1848 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1848in_input = id1847out_result[getCycle()%2];

    id1848out_output = id1848in_input;
  }
  { // Node ID: 1850 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1850in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1850in_option0 = in_vars.id1849out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1850in_option1 = id1848out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1850x_1;

    switch((id1850in_sel.getValueAsLong())) {
      case 0l:
        id1850x_1 = id1850in_option0;
        break;
      case 1l:
        id1850x_1 = id1850in_option1;
        break;
      default:
        id1850x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1850out_result[(getCycle()+1)%2] = (id1850x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1851out_output;

  { // Node ID: 1851 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1851in_input = id1850out_result[getCycle()%2];

    id1851out_output = id1851in_input;
  }
  { // Node ID: 1853 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1853in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1853in_option0 = in_vars.id1852out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1853in_option1 = id1851out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1853x_1;

    switch((id1853in_sel.getValueAsLong())) {
      case 0l:
        id1853x_1 = id1853in_option0;
        break;
      case 1l:
        id1853x_1 = id1853in_option1;
        break;
      default:
        id1853x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1853out_result[(getCycle()+1)%2] = (id1853x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1854out_output;

  { // Node ID: 1854 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1854in_input = id1853out_result[getCycle()%2];

    id1854out_output = id1854in_input;
  }
  { // Node ID: 1856 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1856in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1856in_option0 = in_vars.id1855out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1856in_option1 = id1854out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1856x_1;

    switch((id1856in_sel.getValueAsLong())) {
      case 0l:
        id1856x_1 = id1856in_option0;
        break;
      case 1l:
        id1856x_1 = id1856in_option1;
        break;
      default:
        id1856x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1856out_result[(getCycle()+1)%2] = (id1856x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1857out_output;

  { // Node ID: 1857 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1857in_input = id1856out_result[getCycle()%2];

    id1857out_output = id1857in_input;
  }
  { // Node ID: 1859 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1859in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1859in_option0 = in_vars.id1858out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1859in_option1 = id1857out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1859x_1;

    switch((id1859in_sel.getValueAsLong())) {
      case 0l:
        id1859x_1 = id1859in_option0;
        break;
      case 1l:
        id1859x_1 = id1859in_option1;
        break;
      default:
        id1859x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1859out_result[(getCycle()+1)%2] = (id1859x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1860out_output;

  { // Node ID: 1860 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1860in_input = id1859out_result[getCycle()%2];

    id1860out_output = id1860in_input;
  }
  { // Node ID: 1862 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1862in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1862in_option0 = in_vars.id1861out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1862in_option1 = id1860out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1862x_1;

    switch((id1862in_sel.getValueAsLong())) {
      case 0l:
        id1862x_1 = id1862in_option0;
        break;
      case 1l:
        id1862x_1 = id1862in_option1;
        break;
      default:
        id1862x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1862out_result[(getCycle()+1)%2] = (id1862x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1863out_output;

  { // Node ID: 1863 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1863in_input = id1862out_result[getCycle()%2];

    id1863out_output = id1863in_input;
  }
  { // Node ID: 1865 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1865in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1865in_option0 = in_vars.id1864out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1865in_option1 = id1863out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1865x_1;

    switch((id1865in_sel.getValueAsLong())) {
      case 0l:
        id1865x_1 = id1865in_option0;
        break;
      case 1l:
        id1865x_1 = id1865in_option1;
        break;
      default:
        id1865x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1865out_result[(getCycle()+1)%2] = (id1865x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1866out_output;

  { // Node ID: 1866 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1866in_input = id1865out_result[getCycle()%2];

    id1866out_output = id1866in_input;
  }
  { // Node ID: 1868 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1868in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1868in_option0 = in_vars.id1867out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1868in_option1 = id1866out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1868x_1;

    switch((id1868in_sel.getValueAsLong())) {
      case 0l:
        id1868x_1 = id1868in_option0;
        break;
      case 1l:
        id1868x_1 = id1868in_option1;
        break;
      default:
        id1868x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1868out_result[(getCycle()+1)%2] = (id1868x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1869out_output;

  { // Node ID: 1869 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1869in_input = id1868out_result[getCycle()%2];

    id1869out_output = id1869in_input;
  }
  { // Node ID: 1871 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1871in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1871in_option0 = in_vars.id1870out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1871in_option1 = id1869out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1871x_1;

    switch((id1871in_sel.getValueAsLong())) {
      case 0l:
        id1871x_1 = id1871in_option0;
        break;
      case 1l:
        id1871x_1 = id1871in_option1;
        break;
      default:
        id1871x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1871out_result[(getCycle()+1)%2] = (id1871x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1872out_output;

  { // Node ID: 1872 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1872in_input = id1871out_result[getCycle()%2];

    id1872out_output = id1872in_input;
  }
  { // Node ID: 1874 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1874in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1874in_option0 = in_vars.id1873out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1874in_option1 = id1872out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1874x_1;

    switch((id1874in_sel.getValueAsLong())) {
      case 0l:
        id1874x_1 = id1874in_option0;
        break;
      case 1l:
        id1874x_1 = id1874in_option1;
        break;
      default:
        id1874x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1874out_result[(getCycle()+1)%2] = (id1874x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1875out_output;

  { // Node ID: 1875 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1875in_input = id1874out_result[getCycle()%2];

    id1875out_output = id1875in_input;
  }
  { // Node ID: 1877 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1877in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1877in_option0 = in_vars.id1876out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1877in_option1 = id1875out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1877x_1;

    switch((id1877in_sel.getValueAsLong())) {
      case 0l:
        id1877x_1 = id1877in_option0;
        break;
      case 1l:
        id1877x_1 = id1877in_option1;
        break;
      default:
        id1877x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1877out_result[(getCycle()+1)%2] = (id1877x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1878out_output;

  { // Node ID: 1878 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1878in_input = id1877out_result[getCycle()%2];

    id1878out_output = id1878in_input;
  }
  { // Node ID: 1880 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1880in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1880in_option0 = in_vars.id1879out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1880in_option1 = id1878out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1880x_1;

    switch((id1880in_sel.getValueAsLong())) {
      case 0l:
        id1880x_1 = id1880in_option0;
        break;
      case 1l:
        id1880x_1 = id1880in_option1;
        break;
      default:
        id1880x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1880out_result[(getCycle()+1)%2] = (id1880x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1881out_output;

  { // Node ID: 1881 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1881in_input = id1880out_result[getCycle()%2];

    id1881out_output = id1881in_input;
  }
  { // Node ID: 1883 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1883in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1883in_option0 = in_vars.id1882out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1883in_option1 = id1881out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1883x_1;

    switch((id1883in_sel.getValueAsLong())) {
      case 0l:
        id1883x_1 = id1883in_option0;
        break;
      case 1l:
        id1883x_1 = id1883in_option1;
        break;
      default:
        id1883x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1883out_result[(getCycle()+1)%2] = (id1883x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1884out_output;

  { // Node ID: 1884 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1884in_input = id1883out_result[getCycle()%2];

    id1884out_output = id1884in_input;
  }
  { // Node ID: 1886 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1886in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1886in_option0 = in_vars.id1885out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1886in_option1 = id1884out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1886x_1;

    switch((id1886in_sel.getValueAsLong())) {
      case 0l:
        id1886x_1 = id1886in_option0;
        break;
      case 1l:
        id1886x_1 = id1886in_option1;
        break;
      default:
        id1886x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1886out_result[(getCycle()+1)%2] = (id1886x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1887out_output;

  { // Node ID: 1887 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1887in_input = id1886out_result[getCycle()%2];

    id1887out_output = id1887in_input;
  }
  { // Node ID: 1889 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1889in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1889in_option0 = in_vars.id1888out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1889in_option1 = id1887out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1889x_1;

    switch((id1889in_sel.getValueAsLong())) {
      case 0l:
        id1889x_1 = id1889in_option0;
        break;
      case 1l:
        id1889x_1 = id1889in_option1;
        break;
      default:
        id1889x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1889out_result[(getCycle()+1)%2] = (id1889x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1890out_output;

  { // Node ID: 1890 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1890in_input = id1889out_result[getCycle()%2];

    id1890out_output = id1890in_input;
  }
  { // Node ID: 1892 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1892in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1892in_option0 = in_vars.id1891out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1892in_option1 = id1890out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1892x_1;

    switch((id1892in_sel.getValueAsLong())) {
      case 0l:
        id1892x_1 = id1892in_option0;
        break;
      case 1l:
        id1892x_1 = id1892in_option1;
        break;
      default:
        id1892x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1892out_result[(getCycle()+1)%2] = (id1892x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1893out_output;

  { // Node ID: 1893 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1893in_input = id1892out_result[getCycle()%2];

    id1893out_output = id1893in_input;
  }
  { // Node ID: 1895 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1895in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1895in_option0 = in_vars.id1894out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1895in_option1 = id1893out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1895x_1;

    switch((id1895in_sel.getValueAsLong())) {
      case 0l:
        id1895x_1 = id1895in_option0;
        break;
      case 1l:
        id1895x_1 = id1895in_option1;
        break;
      default:
        id1895x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1895out_result[(getCycle()+1)%2] = (id1895x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1896out_output;

  { // Node ID: 1896 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1896in_input = id1895out_result[getCycle()%2];

    id1896out_output = id1896in_input;
  }
  { // Node ID: 1898 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1898in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1898in_option0 = in_vars.id1897out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1898in_option1 = id1896out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1898x_1;

    switch((id1898in_sel.getValueAsLong())) {
      case 0l:
        id1898x_1 = id1898in_option0;
        break;
      case 1l:
        id1898x_1 = id1898in_option1;
        break;
      default:
        id1898x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1898out_result[(getCycle()+1)%2] = (id1898x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1899out_output;

  { // Node ID: 1899 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1899in_input = id1898out_result[getCycle()%2];

    id1899out_output = id1899in_input;
  }
  { // Node ID: 1901 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1901in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1901in_option0 = in_vars.id1900out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1901in_option1 = id1899out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1901x_1;

    switch((id1901in_sel.getValueAsLong())) {
      case 0l:
        id1901x_1 = id1901in_option0;
        break;
      case 1l:
        id1901x_1 = id1901in_option1;
        break;
      default:
        id1901x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1901out_result[(getCycle()+1)%2] = (id1901x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1902out_output;

  { // Node ID: 1902 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1902in_input = id1901out_result[getCycle()%2];

    id1902out_output = id1902in_input;
  }
  { // Node ID: 1904 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1904in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1904in_option0 = in_vars.id1903out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1904in_option1 = id1902out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1904x_1;

    switch((id1904in_sel.getValueAsLong())) {
      case 0l:
        id1904x_1 = id1904in_option0;
        break;
      case 1l:
        id1904x_1 = id1904in_option1;
        break;
      default:
        id1904x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1904out_result[(getCycle()+1)%2] = (id1904x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1905out_output;

  { // Node ID: 1905 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1905in_input = id1904out_result[getCycle()%2];

    id1905out_output = id1905in_input;
  }
  { // Node ID: 1907 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1907in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1907in_option0 = in_vars.id1906out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1907in_option1 = id1905out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1907x_1;

    switch((id1907in_sel.getValueAsLong())) {
      case 0l:
        id1907x_1 = id1907in_option0;
        break;
      case 1l:
        id1907x_1 = id1907in_option1;
        break;
      default:
        id1907x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1907out_result[(getCycle()+1)%2] = (id1907x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1908out_output;

  { // Node ID: 1908 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1908in_input = id1907out_result[getCycle()%2];

    id1908out_output = id1908in_input;
  }
  { // Node ID: 1910 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1910in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1910in_option0 = in_vars.id1909out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1910in_option1 = id1908out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1910x_1;

    switch((id1910in_sel.getValueAsLong())) {
      case 0l:
        id1910x_1 = id1910in_option0;
        break;
      case 1l:
        id1910x_1 = id1910in_option1;
        break;
      default:
        id1910x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1910out_result[(getCycle()+1)%2] = (id1910x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1911out_output;

  { // Node ID: 1911 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1911in_input = id1910out_result[getCycle()%2];

    id1911out_output = id1911in_input;
  }
  { // Node ID: 1913 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1913in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1913in_option0 = in_vars.id1912out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1913in_option1 = id1911out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1913x_1;

    switch((id1913in_sel.getValueAsLong())) {
      case 0l:
        id1913x_1 = id1913in_option0;
        break;
      case 1l:
        id1913x_1 = id1913in_option1;
        break;
      default:
        id1913x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1913out_result[(getCycle()+1)%2] = (id1913x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1914out_output;

  { // Node ID: 1914 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1914in_input = id1913out_result[getCycle()%2];

    id1914out_output = id1914in_input;
  }
  { // Node ID: 1916 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1916in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1916in_option0 = in_vars.id1915out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1916in_option1 = id1914out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1916x_1;

    switch((id1916in_sel.getValueAsLong())) {
      case 0l:
        id1916x_1 = id1916in_option0;
        break;
      case 1l:
        id1916x_1 = id1916in_option1;
        break;
      default:
        id1916x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1916out_result[(getCycle()+1)%2] = (id1916x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1917out_output;

  { // Node ID: 1917 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1917in_input = id1916out_result[getCycle()%2];

    id1917out_output = id1917in_input;
  }
  { // Node ID: 1919 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1919in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1919in_option0 = in_vars.id1918out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1919in_option1 = id1917out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1919x_1;

    switch((id1919in_sel.getValueAsLong())) {
      case 0l:
        id1919x_1 = id1919in_option0;
        break;
      case 1l:
        id1919x_1 = id1919in_option1;
        break;
      default:
        id1919x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1919out_result[(getCycle()+1)%2] = (id1919x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1920out_output;

  { // Node ID: 1920 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1920in_input = id1919out_result[getCycle()%2];

    id1920out_output = id1920in_input;
  }
  { // Node ID: 1922 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1922in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1922in_option0 = in_vars.id1921out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1922in_option1 = id1920out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1922x_1;

    switch((id1922in_sel.getValueAsLong())) {
      case 0l:
        id1922x_1 = id1922in_option0;
        break;
      case 1l:
        id1922x_1 = id1922in_option1;
        break;
      default:
        id1922x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1922out_result[(getCycle()+1)%2] = (id1922x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1923out_output;

  { // Node ID: 1923 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1923in_input = id1922out_result[getCycle()%2];

    id1923out_output = id1923in_input;
  }
  { // Node ID: 1925 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1925in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1925in_option0 = in_vars.id1924out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1925in_option1 = id1923out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1925x_1;

    switch((id1925in_sel.getValueAsLong())) {
      case 0l:
        id1925x_1 = id1925in_option0;
        break;
      case 1l:
        id1925x_1 = id1925in_option1;
        break;
      default:
        id1925x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1925out_result[(getCycle()+1)%2] = (id1925x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1926out_output;

  { // Node ID: 1926 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1926in_input = id1925out_result[getCycle()%2];

    id1926out_output = id1926in_input;
  }
  { // Node ID: 1928 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1928in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1928in_option0 = in_vars.id1927out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1928in_option1 = id1926out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1928x_1;

    switch((id1928in_sel.getValueAsLong())) {
      case 0l:
        id1928x_1 = id1928in_option0;
        break;
      case 1l:
        id1928x_1 = id1928in_option1;
        break;
      default:
        id1928x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1928out_result[(getCycle()+1)%2] = (id1928x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1929out_output;

  { // Node ID: 1929 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1929in_input = id1928out_result[getCycle()%2];

    id1929out_output = id1929in_input;
  }
  { // Node ID: 1931 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1931in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1931in_option0 = in_vars.id1930out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1931in_option1 = id1929out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1931x_1;

    switch((id1931in_sel.getValueAsLong())) {
      case 0l:
        id1931x_1 = id1931in_option0;
        break;
      case 1l:
        id1931x_1 = id1931in_option1;
        break;
      default:
        id1931x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1931out_result[(getCycle()+1)%2] = (id1931x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1932out_output;

  { // Node ID: 1932 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1932in_input = id1931out_result[getCycle()%2];

    id1932out_output = id1932in_input;
  }
  { // Node ID: 1934 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1934in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1934in_option0 = in_vars.id1933out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1934in_option1 = id1932out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1934x_1;

    switch((id1934in_sel.getValueAsLong())) {
      case 0l:
        id1934x_1 = id1934in_option0;
        break;
      case 1l:
        id1934x_1 = id1934in_option1;
        break;
      default:
        id1934x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1934out_result[(getCycle()+1)%2] = (id1934x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1935out_output;

  { // Node ID: 1935 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1935in_input = id1934out_result[getCycle()%2];

    id1935out_output = id1935in_input;
  }
  { // Node ID: 1937 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1937in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1937in_option0 = in_vars.id1936out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1937in_option1 = id1935out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1937x_1;

    switch((id1937in_sel.getValueAsLong())) {
      case 0l:
        id1937x_1 = id1937in_option0;
        break;
      case 1l:
        id1937x_1 = id1937in_option1;
        break;
      default:
        id1937x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1937out_result[(getCycle()+1)%2] = (id1937x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1938out_output;

  { // Node ID: 1938 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1938in_input = id1937out_result[getCycle()%2];

    id1938out_output = id1938in_input;
  }
  { // Node ID: 1940 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1940in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1940in_option0 = in_vars.id1939out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1940in_option1 = id1938out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1940x_1;

    switch((id1940in_sel.getValueAsLong())) {
      case 0l:
        id1940x_1 = id1940in_option0;
        break;
      case 1l:
        id1940x_1 = id1940in_option1;
        break;
      default:
        id1940x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1940out_result[(getCycle()+1)%2] = (id1940x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1941out_output;

  { // Node ID: 1941 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1941in_input = id1940out_result[getCycle()%2];

    id1941out_output = id1941in_input;
  }
  { // Node ID: 1943 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1943in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1943in_option0 = in_vars.id1942out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1943in_option1 = id1941out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1943x_1;

    switch((id1943in_sel.getValueAsLong())) {
      case 0l:
        id1943x_1 = id1943in_option0;
        break;
      case 1l:
        id1943x_1 = id1943in_option1;
        break;
      default:
        id1943x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1943out_result[(getCycle()+1)%2] = (id1943x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1944out_output;

  { // Node ID: 1944 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1944in_input = id1943out_result[getCycle()%2];

    id1944out_output = id1944in_input;
  }
  { // Node ID: 1946 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1946in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1946in_option0 = in_vars.id1945out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1946in_option1 = id1944out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1946x_1;

    switch((id1946in_sel.getValueAsLong())) {
      case 0l:
        id1946x_1 = id1946in_option0;
        break;
      case 1l:
        id1946x_1 = id1946in_option1;
        break;
      default:
        id1946x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1946out_result[(getCycle()+1)%2] = (id1946x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1947out_output;

  { // Node ID: 1947 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1947in_input = id1946out_result[getCycle()%2];

    id1947out_output = id1947in_input;
  }
  { // Node ID: 1949 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1949in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1949in_option0 = in_vars.id1948out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1949in_option1 = id1947out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1949x_1;

    switch((id1949in_sel.getValueAsLong())) {
      case 0l:
        id1949x_1 = id1949in_option0;
        break;
      case 1l:
        id1949x_1 = id1949in_option1;
        break;
      default:
        id1949x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1949out_result[(getCycle()+1)%2] = (id1949x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1950out_output;

  { // Node ID: 1950 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1950in_input = id1949out_result[getCycle()%2];

    id1950out_output = id1950in_input;
  }
  { // Node ID: 1952 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1952in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1952in_option0 = in_vars.id1951out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1952in_option1 = id1950out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1952x_1;

    switch((id1952in_sel.getValueAsLong())) {
      case 0l:
        id1952x_1 = id1952in_option0;
        break;
      case 1l:
        id1952x_1 = id1952in_option1;
        break;
      default:
        id1952x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1952out_result[(getCycle()+1)%2] = (id1952x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1953out_output;

  { // Node ID: 1953 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1953in_input = id1952out_result[getCycle()%2];

    id1953out_output = id1953in_input;
  }
  { // Node ID: 1955 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1955in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1955in_option0 = in_vars.id1954out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1955in_option1 = id1953out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1955x_1;

    switch((id1955in_sel.getValueAsLong())) {
      case 0l:
        id1955x_1 = id1955in_option0;
        break;
      case 1l:
        id1955x_1 = id1955in_option1;
        break;
      default:
        id1955x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1955out_result[(getCycle()+1)%2] = (id1955x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1956out_output;

  { // Node ID: 1956 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1956in_input = id1955out_result[getCycle()%2];

    id1956out_output = id1956in_input;
  }
  { // Node ID: 1958 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1958in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1958in_option0 = in_vars.id1957out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1958in_option1 = id1956out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1958x_1;

    switch((id1958in_sel.getValueAsLong())) {
      case 0l:
        id1958x_1 = id1958in_option0;
        break;
      case 1l:
        id1958x_1 = id1958in_option1;
        break;
      default:
        id1958x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1958out_result[(getCycle()+1)%2] = (id1958x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1959out_output;

  { // Node ID: 1959 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1959in_input = id1958out_result[getCycle()%2];

    id1959out_output = id1959in_input;
  }
  { // Node ID: 1961 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1961in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1961in_option0 = in_vars.id1960out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1961in_option1 = id1959out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1961x_1;

    switch((id1961in_sel.getValueAsLong())) {
      case 0l:
        id1961x_1 = id1961in_option0;
        break;
      case 1l:
        id1961x_1 = id1961in_option1;
        break;
      default:
        id1961x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1961out_result[(getCycle()+1)%2] = (id1961x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1962out_output;

  { // Node ID: 1962 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1962in_input = id1961out_result[getCycle()%2];

    id1962out_output = id1962in_input;
  }
  { // Node ID: 1964 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1964in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1964in_option0 = in_vars.id1963out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1964in_option1 = id1962out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1964x_1;

    switch((id1964in_sel.getValueAsLong())) {
      case 0l:
        id1964x_1 = id1964in_option0;
        break;
      case 1l:
        id1964x_1 = id1964in_option1;
        break;
      default:
        id1964x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1964out_result[(getCycle()+1)%2] = (id1964x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1965out_output;

  { // Node ID: 1965 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1965in_input = id1964out_result[getCycle()%2];

    id1965out_output = id1965in_input;
  }
  { // Node ID: 1967 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1967in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1967in_option0 = in_vars.id1966out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1967in_option1 = id1965out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1967x_1;

    switch((id1967in_sel.getValueAsLong())) {
      case 0l:
        id1967x_1 = id1967in_option0;
        break;
      case 1l:
        id1967x_1 = id1967in_option1;
        break;
      default:
        id1967x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1967out_result[(getCycle()+1)%2] = (id1967x_1);
  }

  sliding_window10Block5Vars out_vars;
  out_vars.id3699out_result = in_vars.id3699out_result;
  out_vars.id7537out_value = in_vars.id7537out_value;
  out_vars.id7539out_value = in_vars.id7539out_value;
  out_vars.id7541out_value = in_vars.id7541out_value;
  out_vars.id7543out_value = in_vars.id7543out_value;
  out_vars.id7545out_value = in_vars.id7545out_value;
  out_vars.id7547out_value = in_vars.id7547out_value;
  out_vars.id7549out_value = in_vars.id7549out_value;
  out_vars.id7551out_value = in_vars.id7551out_value;
  out_vars.id7553out_value = in_vars.id7553out_value;
  out_vars.id7555out_value = in_vars.id7555out_value;
  out_vars.id7557out_value = in_vars.id7557out_value;
  out_vars.id7559out_value = in_vars.id7559out_value;
  out_vars.id7561out_value = in_vars.id7561out_value;
  out_vars.id7563out_value = in_vars.id7563out_value;
  out_vars.id7565out_value = in_vars.id7565out_value;
  out_vars.id3484out_output = in_vars.id3484out_output;
  out_vars.id3481out_output = in_vars.id3481out_output;
  out_vars.id3478out_output = in_vars.id3478out_output;
  out_vars.id3475out_output = in_vars.id3475out_output;
  out_vars.id3472out_output = in_vars.id3472out_output;
  out_vars.id3469out_output = in_vars.id3469out_output;
  out_vars.id3466out_output = in_vars.id3466out_output;
  out_vars.id3463out_output = in_vars.id3463out_output;
  out_vars.id3460out_output = in_vars.id3460out_output;
  out_vars.id3457out_output = in_vars.id3457out_output;
  out_vars.id3454out_output = in_vars.id3454out_output;
  out_vars.id3451out_output = in_vars.id3451out_output;
  out_vars.id3448out_output = in_vars.id3448out_output;
  out_vars.id3445out_output = in_vars.id3445out_output;
  out_vars.id3442out_output = in_vars.id3442out_output;
  out_vars.id3439out_output = in_vars.id3439out_output;
  out_vars.id3436out_output = in_vars.id3436out_output;
  out_vars.id3433out_output = in_vars.id3433out_output;
  out_vars.id3430out_output = in_vars.id3430out_output;
  out_vars.id3427out_output = in_vars.id3427out_output;
  out_vars.id3424out_output = in_vars.id3424out_output;
  out_vars.id3421out_output = in_vars.id3421out_output;
  out_vars.id3418out_output = in_vars.id3418out_output;
  out_vars.id3415out_output = in_vars.id3415out_output;
  out_vars.id3412out_output = in_vars.id3412out_output;
  out_vars.id3409out_output = in_vars.id3409out_output;
  out_vars.id3406out_output = in_vars.id3406out_output;
  out_vars.id3403out_output = in_vars.id3403out_output;
  out_vars.id3400out_output = in_vars.id3400out_output;
  out_vars.id3397out_output = in_vars.id3397out_output;
  out_vars.id3394out_output = in_vars.id3394out_output;
  out_vars.id3391out_output = in_vars.id3391out_output;
  out_vars.id3388out_output = in_vars.id3388out_output;
  out_vars.id3385out_output = in_vars.id3385out_output;
  out_vars.id3382out_output = in_vars.id3382out_output;
  out_vars.id3379out_output = in_vars.id3379out_output;
  out_vars.id3376out_output = in_vars.id3376out_output;
  out_vars.id3373out_output = in_vars.id3373out_output;
  out_vars.id3370out_output = in_vars.id3370out_output;
  out_vars.id3367out_output = in_vars.id3367out_output;
  out_vars.id3364out_output = in_vars.id3364out_output;
  out_vars.id3361out_output = in_vars.id3361out_output;
  out_vars.id3358out_output = in_vars.id3358out_output;
  out_vars.id3355out_output = in_vars.id3355out_output;
  out_vars.id3352out_output = in_vars.id3352out_output;
  out_vars.id3349out_output = in_vars.id3349out_output;
  out_vars.id3346out_output = in_vars.id3346out_output;
  out_vars.id3343out_output = in_vars.id3343out_output;
  out_vars.id3340out_output = in_vars.id3340out_output;
  out_vars.id3337out_output = in_vars.id3337out_output;
  out_vars.id3334out_output = in_vars.id3334out_output;
  out_vars.id3331out_output = in_vars.id3331out_output;
  out_vars.id3328out_output = in_vars.id3328out_output;
  out_vars.id3325out_output = in_vars.id3325out_output;
  out_vars.id3322out_output = in_vars.id3322out_output;
  out_vars.id3319out_output = in_vars.id3319out_output;
  out_vars.id3316out_output = in_vars.id3316out_output;
  out_vars.id3313out_output = in_vars.id3313out_output;
  out_vars.id3310out_output = in_vars.id3310out_output;
  out_vars.id3307out_output = in_vars.id3307out_output;
  out_vars.id3304out_output = in_vars.id3304out_output;
  out_vars.id3301out_output = in_vars.id3301out_output;
  out_vars.id3298out_output = in_vars.id3298out_output;
  out_vars.id3295out_output = in_vars.id3295out_output;
  out_vars.id3292out_output = in_vars.id3292out_output;
  out_vars.id3289out_output = in_vars.id3289out_output;
  out_vars.id3286out_output = in_vars.id3286out_output;
  out_vars.id3283out_output = in_vars.id3283out_output;
  out_vars.id3280out_output = in_vars.id3280out_output;
  out_vars.id3277out_output = in_vars.id3277out_output;
  out_vars.id3274out_output = in_vars.id3274out_output;
  out_vars.id3271out_output = in_vars.id3271out_output;
  out_vars.id3268out_output = in_vars.id3268out_output;
  out_vars.id3265out_output = in_vars.id3265out_output;
  out_vars.id3262out_output = in_vars.id3262out_output;
  out_vars.id3259out_output = in_vars.id3259out_output;
  out_vars.id3256out_output = in_vars.id3256out_output;
  out_vars.id3253out_output = in_vars.id3253out_output;
  out_vars.id3250out_output = in_vars.id3250out_output;
  out_vars.id3247out_output = in_vars.id3247out_output;
  out_vars.id3244out_output = in_vars.id3244out_output;
  out_vars.id3241out_output = in_vars.id3241out_output;
  out_vars.id3238out_output = in_vars.id3238out_output;
  out_vars.id3235out_output = in_vars.id3235out_output;
  out_vars.id3232out_output = in_vars.id3232out_output;
  out_vars.id3229out_output = in_vars.id3229out_output;
  out_vars.id3226out_output = in_vars.id3226out_output;
  out_vars.id3223out_output = in_vars.id3223out_output;
  out_vars.id3220out_output = in_vars.id3220out_output;
  out_vars.id3217out_output = in_vars.id3217out_output;
  out_vars.id3214out_output = in_vars.id3214out_output;
  out_vars.id3211out_output = in_vars.id3211out_output;
  out_vars.id3208out_output = in_vars.id3208out_output;
  out_vars.id3205out_output = in_vars.id3205out_output;
  out_vars.id3202out_output = in_vars.id3202out_output;
  out_vars.id3199out_output = in_vars.id3199out_output;
  out_vars.id3196out_output = in_vars.id3196out_output;
  out_vars.id3193out_output = in_vars.id3193out_output;
  out_vars.id3190out_output = in_vars.id3190out_output;
  out_vars.id3187out_output = in_vars.id3187out_output;
  out_vars.id3184out_output = in_vars.id3184out_output;
  out_vars.id3181out_output = in_vars.id3181out_output;
  out_vars.id3178out_output = in_vars.id3178out_output;
  out_vars.id3175out_output = in_vars.id3175out_output;
  out_vars.id3172out_output = in_vars.id3172out_output;
  out_vars.id3169out_output = in_vars.id3169out_output;
  out_vars.id3166out_output = in_vars.id3166out_output;
  out_vars.id3163out_output = in_vars.id3163out_output;
  out_vars.id3160out_output = in_vars.id3160out_output;
  out_vars.id3157out_output = in_vars.id3157out_output;
  out_vars.id3154out_output = in_vars.id3154out_output;
  out_vars.id3151out_output = in_vars.id3151out_output;
  out_vars.id3148out_output = in_vars.id3148out_output;
  out_vars.id3145out_output = in_vars.id3145out_output;
  out_vars.id3142out_output = in_vars.id3142out_output;
  out_vars.id3139out_output = in_vars.id3139out_output;
  out_vars.id3136out_output = in_vars.id3136out_output;
  out_vars.id3133out_output = in_vars.id3133out_output;
  out_vars.id3130out_output = in_vars.id3130out_output;
  out_vars.id3127out_output = in_vars.id3127out_output;
  out_vars.id3124out_output = in_vars.id3124out_output;
  out_vars.id3121out_output = in_vars.id3121out_output;
  out_vars.id3118out_output = in_vars.id3118out_output;
  out_vars.id3115out_output = in_vars.id3115out_output;
  out_vars.id3112out_output = in_vars.id3112out_output;
  out_vars.id3109out_output = in_vars.id3109out_output;
  out_vars.id3106out_output = in_vars.id3106out_output;
  out_vars.id3103out_output = in_vars.id3103out_output;
  out_vars.id3100out_output = in_vars.id3100out_output;
  out_vars.id3097out_output = in_vars.id3097out_output;
  out_vars.id3094out_output = in_vars.id3094out_output;
  out_vars.id3091out_output = in_vars.id3091out_output;
  out_vars.id3088out_output = in_vars.id3088out_output;
  out_vars.id3085out_output = in_vars.id3085out_output;
  out_vars.id3082out_output = in_vars.id3082out_output;
  out_vars.id3079out_output = in_vars.id3079out_output;
  out_vars.id3076out_output = in_vars.id3076out_output;
  out_vars.id3073out_output = in_vars.id3073out_output;
  out_vars.id3070out_output = in_vars.id3070out_output;
  out_vars.id3067out_output = in_vars.id3067out_output;
  out_vars.id3064out_output = in_vars.id3064out_output;
  out_vars.id3061out_output = in_vars.id3061out_output;
  out_vars.id3058out_output = in_vars.id3058out_output;
  out_vars.id3055out_output = in_vars.id3055out_output;
  out_vars.id3052out_output = in_vars.id3052out_output;
  out_vars.id3049out_output = in_vars.id3049out_output;
  out_vars.id3046out_output = in_vars.id3046out_output;
  out_vars.id3043out_output = in_vars.id3043out_output;
  out_vars.id3040out_output = in_vars.id3040out_output;
  out_vars.id3037out_output = in_vars.id3037out_output;
  out_vars.id3034out_output = in_vars.id3034out_output;
  out_vars.id3031out_output = in_vars.id3031out_output;
  out_vars.id3028out_output = in_vars.id3028out_output;
  out_vars.id3025out_output = in_vars.id3025out_output;
  out_vars.id3022out_output = in_vars.id3022out_output;
  out_vars.id3019out_output = in_vars.id3019out_output;
  out_vars.id3016out_output = in_vars.id3016out_output;
  out_vars.id3013out_output = in_vars.id3013out_output;
  out_vars.id3010out_output = in_vars.id3010out_output;
  out_vars.id3007out_output = in_vars.id3007out_output;
  out_vars.id3004out_output = in_vars.id3004out_output;
  out_vars.id3001out_output = in_vars.id3001out_output;
  out_vars.id2998out_output = in_vars.id2998out_output;
  out_vars.id2995out_output = in_vars.id2995out_output;
  out_vars.id2992out_output = in_vars.id2992out_output;
  out_vars.id2989out_output = in_vars.id2989out_output;
  out_vars.id2986out_output = in_vars.id2986out_output;
  out_vars.id2983out_output = in_vars.id2983out_output;
  out_vars.id2980out_output = in_vars.id2980out_output;
  out_vars.id2977out_output = in_vars.id2977out_output;
  out_vars.id2974out_output = in_vars.id2974out_output;
  out_vars.id2971out_output = in_vars.id2971out_output;
  out_vars.id2968out_output = in_vars.id2968out_output;
  out_vars.id2965out_output = in_vars.id2965out_output;
  out_vars.id2962out_output = in_vars.id2962out_output;
  out_vars.id2959out_output = in_vars.id2959out_output;
  out_vars.id2956out_output = in_vars.id2956out_output;
  out_vars.id2953out_output = in_vars.id2953out_output;
  out_vars.id2950out_output = in_vars.id2950out_output;
  out_vars.id2947out_output = in_vars.id2947out_output;
  out_vars.id2944out_output = in_vars.id2944out_output;
  out_vars.id2941out_output = in_vars.id2941out_output;
  out_vars.id2938out_output = in_vars.id2938out_output;
  out_vars.id2935out_output = in_vars.id2935out_output;
  out_vars.id2932out_output = in_vars.id2932out_output;
  out_vars.id2929out_output = in_vars.id2929out_output;
  out_vars.id2926out_output = in_vars.id2926out_output;
  out_vars.id2923out_output = in_vars.id2923out_output;
  out_vars.id2920out_output = in_vars.id2920out_output;
  out_vars.id2917out_output = in_vars.id2917out_output;
  out_vars.id2914out_output = in_vars.id2914out_output;
  out_vars.id2911out_output = in_vars.id2911out_output;
  out_vars.id2908out_output = in_vars.id2908out_output;
  out_vars.id2905out_output = in_vars.id2905out_output;
  out_vars.id2902out_output = in_vars.id2902out_output;
  out_vars.id2899out_output = in_vars.id2899out_output;
  out_vars.id2896out_output = in_vars.id2896out_output;
  out_vars.id2893out_output = in_vars.id2893out_output;
  out_vars.id2890out_output = in_vars.id2890out_output;
  out_vars.id2887out_output = in_vars.id2887out_output;
  out_vars.id2884out_output = in_vars.id2884out_output;
  out_vars.id2881out_output = in_vars.id2881out_output;
  out_vars.id2878out_output = in_vars.id2878out_output;
  out_vars.id2875out_output = in_vars.id2875out_output;
  out_vars.id2872out_output = in_vars.id2872out_output;
  out_vars.id2869out_output = in_vars.id2869out_output;
  out_vars.id2866out_output = in_vars.id2866out_output;
  out_vars.id2863out_output = in_vars.id2863out_output;
  out_vars.id2860out_output = in_vars.id2860out_output;
  out_vars.id2857out_output = in_vars.id2857out_output;
  out_vars.id2854out_output = in_vars.id2854out_output;
  out_vars.id2851out_output = in_vars.id2851out_output;
  out_vars.id2848out_output = in_vars.id2848out_output;
  out_vars.id2845out_output = in_vars.id2845out_output;
  out_vars.id2842out_output = in_vars.id2842out_output;
  out_vars.id2839out_output = in_vars.id2839out_output;
  out_vars.id2836out_output = in_vars.id2836out_output;
  out_vars.id2833out_output = in_vars.id2833out_output;
  out_vars.id2830out_output = in_vars.id2830out_output;
  out_vars.id2827out_output = in_vars.id2827out_output;
  out_vars.id2824out_output = in_vars.id2824out_output;
  out_vars.id2821out_output = in_vars.id2821out_output;
  out_vars.id2818out_output = in_vars.id2818out_output;
  out_vars.id2815out_output = in_vars.id2815out_output;
  out_vars.id2812out_output = in_vars.id2812out_output;
  out_vars.id2809out_output = in_vars.id2809out_output;
  out_vars.id2806out_output = in_vars.id2806out_output;
  out_vars.id2803out_output = in_vars.id2803out_output;
  out_vars.id2800out_output = in_vars.id2800out_output;
  out_vars.id2797out_output = in_vars.id2797out_output;
  out_vars.id2794out_output = in_vars.id2794out_output;
  out_vars.id2791out_output = in_vars.id2791out_output;
  out_vars.id2788out_output = in_vars.id2788out_output;
  out_vars.id2785out_output = in_vars.id2785out_output;
  out_vars.id2782out_output = in_vars.id2782out_output;
  out_vars.id2779out_output = in_vars.id2779out_output;
  out_vars.id2776out_output = in_vars.id2776out_output;
  out_vars.id2773out_output = in_vars.id2773out_output;
  out_vars.id2770out_output = in_vars.id2770out_output;
  out_vars.id2767out_output = in_vars.id2767out_output;
  out_vars.id2764out_output = in_vars.id2764out_output;
  out_vars.id2761out_output = in_vars.id2761out_output;
  out_vars.id2758out_output = in_vars.id2758out_output;
  out_vars.id2755out_output = in_vars.id2755out_output;
  out_vars.id2752out_output = in_vars.id2752out_output;
  out_vars.id2749out_output = in_vars.id2749out_output;
  out_vars.id2746out_output = in_vars.id2746out_output;
  out_vars.id2743out_output = in_vars.id2743out_output;
  out_vars.id2740out_output = in_vars.id2740out_output;
  out_vars.id2737out_output = in_vars.id2737out_output;
  out_vars.id2734out_output = in_vars.id2734out_output;
  out_vars.id2731out_output = in_vars.id2731out_output;
  out_vars.id2728out_output = in_vars.id2728out_output;
  out_vars.id2725out_output = in_vars.id2725out_output;
  out_vars.id2722out_output = in_vars.id2722out_output;
  out_vars.id2719out_output = in_vars.id2719out_output;
  out_vars.id2716out_output = in_vars.id2716out_output;
  out_vars.id2713out_output = in_vars.id2713out_output;
  out_vars.id2710out_output = in_vars.id2710out_output;
  out_vars.id2707out_output = in_vars.id2707out_output;
  out_vars.id2704out_output = in_vars.id2704out_output;
  out_vars.id2701out_output = in_vars.id2701out_output;
  out_vars.id2698out_output = in_vars.id2698out_output;
  out_vars.id2695out_output = in_vars.id2695out_output;
  out_vars.id2692out_output = in_vars.id2692out_output;
  out_vars.id2689out_output = in_vars.id2689out_output;
  out_vars.id2686out_output = in_vars.id2686out_output;
  out_vars.id2683out_output = in_vars.id2683out_output;
  out_vars.id2680out_output = in_vars.id2680out_output;
  out_vars.id2677out_output = in_vars.id2677out_output;
  out_vars.id2674out_output = in_vars.id2674out_output;
  out_vars.id2671out_output = in_vars.id2671out_output;
  out_vars.id2668out_output = in_vars.id2668out_output;
  out_vars.id2665out_output = in_vars.id2665out_output;
  out_vars.id2662out_output = in_vars.id2662out_output;
  out_vars.id2659out_output = in_vars.id2659out_output;
  out_vars.id2656out_output = in_vars.id2656out_output;
  out_vars.id2653out_output = in_vars.id2653out_output;
  out_vars.id2650out_output = in_vars.id2650out_output;
  out_vars.id2647out_output = in_vars.id2647out_output;
  out_vars.id2644out_output = in_vars.id2644out_output;
  out_vars.id2641out_output = in_vars.id2641out_output;
  out_vars.id2638out_output = in_vars.id2638out_output;
  out_vars.id2635out_output = in_vars.id2635out_output;
  out_vars.id2632out_output = in_vars.id2632out_output;
  out_vars.id2629out_output = in_vars.id2629out_output;
  out_vars.id2626out_output = in_vars.id2626out_output;
  out_vars.id2623out_output = in_vars.id2623out_output;
  out_vars.id2620out_output = in_vars.id2620out_output;
  out_vars.id2617out_output = in_vars.id2617out_output;
  out_vars.id2614out_output = in_vars.id2614out_output;
  out_vars.id2611out_output = in_vars.id2611out_output;
  out_vars.id2608out_output = in_vars.id2608out_output;
  out_vars.id2605out_output = in_vars.id2605out_output;
  out_vars.id2602out_output = in_vars.id2602out_output;
  out_vars.id2599out_output = in_vars.id2599out_output;
  out_vars.id2596out_output = in_vars.id2596out_output;
  out_vars.id2593out_output = in_vars.id2593out_output;
  out_vars.id2590out_output = in_vars.id2590out_output;
  out_vars.id2587out_output = in_vars.id2587out_output;
  out_vars.id2584out_output = in_vars.id2584out_output;
  out_vars.id2581out_output = in_vars.id2581out_output;
  out_vars.id2578out_output = in_vars.id2578out_output;
  out_vars.id2575out_output = in_vars.id2575out_output;
  out_vars.id2572out_output = in_vars.id2572out_output;
  out_vars.id2569out_output = in_vars.id2569out_output;
  out_vars.id2566out_output = in_vars.id2566out_output;
  out_vars.id2563out_output = in_vars.id2563out_output;
  out_vars.id2560out_output = in_vars.id2560out_output;
  out_vars.id2557out_output = in_vars.id2557out_output;
  out_vars.id2554out_output = in_vars.id2554out_output;
  out_vars.id2551out_output = in_vars.id2551out_output;
  out_vars.id2548out_output = in_vars.id2548out_output;
  out_vars.id2545out_output = in_vars.id2545out_output;
  out_vars.id2542out_output = in_vars.id2542out_output;
  out_vars.id2539out_output = in_vars.id2539out_output;
  out_vars.id2536out_output = in_vars.id2536out_output;
  out_vars.id2533out_output = in_vars.id2533out_output;
  out_vars.id2530out_output = in_vars.id2530out_output;
  out_vars.id2527out_output = in_vars.id2527out_output;
  out_vars.id2524out_output = in_vars.id2524out_output;
  out_vars.id2521out_output = in_vars.id2521out_output;
  out_vars.id2518out_output = in_vars.id2518out_output;
  out_vars.id2515out_output = in_vars.id2515out_output;
  out_vars.id2512out_output = in_vars.id2512out_output;
  out_vars.id2509out_output = in_vars.id2509out_output;
  out_vars.id2506out_output = in_vars.id2506out_output;
  out_vars.id2503out_output = in_vars.id2503out_output;
  out_vars.id2500out_output = in_vars.id2500out_output;
  out_vars.id2497out_output = in_vars.id2497out_output;
  out_vars.id2494out_output = in_vars.id2494out_output;
  out_vars.id2491out_output = in_vars.id2491out_output;
  out_vars.id2488out_output = in_vars.id2488out_output;
  out_vars.id2485out_output = in_vars.id2485out_output;
  out_vars.id2482out_output = in_vars.id2482out_output;
  out_vars.id2479out_output = in_vars.id2479out_output;
  out_vars.id2476out_output = in_vars.id2476out_output;
  out_vars.id2473out_output = in_vars.id2473out_output;
  out_vars.id2470out_output = in_vars.id2470out_output;
  out_vars.id2467out_output = in_vars.id2467out_output;
  out_vars.id2464out_output = in_vars.id2464out_output;
  out_vars.id2461out_output = in_vars.id2461out_output;
  out_vars.id2458out_output = in_vars.id2458out_output;
  out_vars.id2455out_output = in_vars.id2455out_output;
  out_vars.id2452out_output = in_vars.id2452out_output;
  out_vars.id2449out_output = in_vars.id2449out_output;
  out_vars.id2446out_output = in_vars.id2446out_output;
  out_vars.id2443out_output = in_vars.id2443out_output;
  out_vars.id2440out_output = in_vars.id2440out_output;
  out_vars.id2437out_output = in_vars.id2437out_output;
  out_vars.id2434out_output = in_vars.id2434out_output;
  out_vars.id2431out_output = in_vars.id2431out_output;
  out_vars.id2428out_output = in_vars.id2428out_output;
  out_vars.id2425out_output = in_vars.id2425out_output;
  out_vars.id2422out_output = in_vars.id2422out_output;
  out_vars.id2419out_output = in_vars.id2419out_output;
  out_vars.id2416out_output = in_vars.id2416out_output;
  out_vars.id2413out_output = in_vars.id2413out_output;
  out_vars.id2410out_output = in_vars.id2410out_output;
  out_vars.id2407out_output = in_vars.id2407out_output;
  out_vars.id2404out_output = in_vars.id2404out_output;
  out_vars.id2401out_output = in_vars.id2401out_output;
  out_vars.id2398out_output = in_vars.id2398out_output;
  out_vars.id2395out_output = in_vars.id2395out_output;
  out_vars.id2392out_output = in_vars.id2392out_output;
  out_vars.id2389out_output = in_vars.id2389out_output;
  out_vars.id2386out_output = in_vars.id2386out_output;
  out_vars.id2383out_output = in_vars.id2383out_output;
  out_vars.id2380out_output = in_vars.id2380out_output;
  out_vars.id2377out_output = in_vars.id2377out_output;
  out_vars.id2374out_output = in_vars.id2374out_output;
  out_vars.id2371out_output = in_vars.id2371out_output;
  out_vars.id2368out_output = in_vars.id2368out_output;
  out_vars.id2365out_output = in_vars.id2365out_output;
  out_vars.id2362out_output = in_vars.id2362out_output;
  out_vars.id2359out_output = in_vars.id2359out_output;
  out_vars.id2356out_output = in_vars.id2356out_output;
  out_vars.id2353out_output = in_vars.id2353out_output;
  out_vars.id2350out_output = in_vars.id2350out_output;
  out_vars.id2347out_output = in_vars.id2347out_output;
  out_vars.id2344out_output = in_vars.id2344out_output;
  out_vars.id2341out_output = in_vars.id2341out_output;
  out_vars.id2338out_output = in_vars.id2338out_output;
  out_vars.id2335out_output = in_vars.id2335out_output;
  out_vars.id2332out_output = in_vars.id2332out_output;
  out_vars.id2329out_output = in_vars.id2329out_output;
  out_vars.id2326out_output = in_vars.id2326out_output;
  out_vars.id2323out_output = in_vars.id2323out_output;
  out_vars.id2320out_output = in_vars.id2320out_output;
  out_vars.id2317out_output = in_vars.id2317out_output;
  out_vars.id2314out_output = in_vars.id2314out_output;
  out_vars.id2311out_output = in_vars.id2311out_output;
  out_vars.id2308out_output = in_vars.id2308out_output;
  out_vars.id2305out_output = in_vars.id2305out_output;
  out_vars.id2302out_output = in_vars.id2302out_output;
  out_vars.id2299out_output = in_vars.id2299out_output;
  out_vars.id2296out_output = in_vars.id2296out_output;
  out_vars.id2293out_output = in_vars.id2293out_output;
  out_vars.id2290out_output = in_vars.id2290out_output;
  out_vars.id2287out_output = in_vars.id2287out_output;
  out_vars.id2284out_output = in_vars.id2284out_output;
  out_vars.id2281out_output = in_vars.id2281out_output;
  out_vars.id2278out_output = in_vars.id2278out_output;
  out_vars.id2275out_output = in_vars.id2275out_output;
  out_vars.id2272out_output = in_vars.id2272out_output;
  out_vars.id2269out_output = in_vars.id2269out_output;
  out_vars.id2266out_output = in_vars.id2266out_output;
  out_vars.id2263out_output = in_vars.id2263out_output;
  out_vars.id2260out_output = in_vars.id2260out_output;
  out_vars.id2257out_output = in_vars.id2257out_output;
  out_vars.id2254out_output = in_vars.id2254out_output;
  out_vars.id2251out_output = in_vars.id2251out_output;
  out_vars.id2248out_output = in_vars.id2248out_output;
  out_vars.id2245out_output = in_vars.id2245out_output;
  out_vars.id2242out_output = in_vars.id2242out_output;
  out_vars.id2239out_output = in_vars.id2239out_output;
  out_vars.id2236out_output = in_vars.id2236out_output;
  out_vars.id2233out_output = in_vars.id2233out_output;
  out_vars.id2230out_output = in_vars.id2230out_output;
  out_vars.id2227out_output = in_vars.id2227out_output;
  out_vars.id2224out_output = in_vars.id2224out_output;
  out_vars.id2221out_output = in_vars.id2221out_output;
  out_vars.id2218out_output = in_vars.id2218out_output;
  out_vars.id2215out_output = in_vars.id2215out_output;
  out_vars.id2212out_output = in_vars.id2212out_output;
  out_vars.id2209out_output = in_vars.id2209out_output;
  out_vars.id2206out_output = in_vars.id2206out_output;
  out_vars.id2203out_output = in_vars.id2203out_output;
  out_vars.id2200out_output = in_vars.id2200out_output;
  out_vars.id2197out_output = in_vars.id2197out_output;
  out_vars.id2194out_output = in_vars.id2194out_output;
  out_vars.id2191out_output = in_vars.id2191out_output;
  out_vars.id2188out_output = in_vars.id2188out_output;
  out_vars.id2185out_output = in_vars.id2185out_output;
  out_vars.id2182out_output = in_vars.id2182out_output;
  out_vars.id2179out_output = in_vars.id2179out_output;
  out_vars.id2176out_output = in_vars.id2176out_output;
  out_vars.id2173out_output = in_vars.id2173out_output;
  out_vars.id2170out_output = in_vars.id2170out_output;
  out_vars.id2167out_output = in_vars.id2167out_output;
  out_vars.id2164out_output = in_vars.id2164out_output;
  out_vars.id2161out_output = in_vars.id2161out_output;
  out_vars.id2158out_output = in_vars.id2158out_output;
  out_vars.id2155out_output = in_vars.id2155out_output;
  out_vars.id2152out_output = in_vars.id2152out_output;
  out_vars.id2149out_output = in_vars.id2149out_output;
  out_vars.id2146out_output = in_vars.id2146out_output;
  out_vars.id2143out_output = in_vars.id2143out_output;
  out_vars.id2140out_output = in_vars.id2140out_output;
  out_vars.id2137out_output = in_vars.id2137out_output;
  out_vars.id2134out_output = in_vars.id2134out_output;
  out_vars.id2131out_output = in_vars.id2131out_output;
  out_vars.id2128out_output = in_vars.id2128out_output;
  out_vars.id2125out_output = in_vars.id2125out_output;
  out_vars.id2122out_output = in_vars.id2122out_output;
  out_vars.id2119out_output = in_vars.id2119out_output;
  out_vars.id2116out_output = in_vars.id2116out_output;
  out_vars.id2113out_output = in_vars.id2113out_output;
  out_vars.id2110out_output = in_vars.id2110out_output;
  out_vars.id2107out_output = in_vars.id2107out_output;
  out_vars.id2104out_output = in_vars.id2104out_output;
  out_vars.id2101out_output = in_vars.id2101out_output;
  out_vars.id2098out_output = in_vars.id2098out_output;
  out_vars.id2095out_output = in_vars.id2095out_output;
  out_vars.id2092out_output = in_vars.id2092out_output;
  out_vars.id2089out_output = in_vars.id2089out_output;
  out_vars.id2086out_output = in_vars.id2086out_output;
  out_vars.id2083out_output = in_vars.id2083out_output;
  out_vars.id2080out_output = in_vars.id2080out_output;
  out_vars.id2077out_output = in_vars.id2077out_output;
  out_vars.id2074out_output = in_vars.id2074out_output;
  out_vars.id2071out_output = in_vars.id2071out_output;
  out_vars.id2068out_output = in_vars.id2068out_output;
  out_vars.id2065out_output = in_vars.id2065out_output;
  out_vars.id2062out_output = in_vars.id2062out_output;
  out_vars.id2059out_output = in_vars.id2059out_output;
  out_vars.id2056out_output = in_vars.id2056out_output;
  out_vars.id2053out_output = in_vars.id2053out_output;
  out_vars.id2050out_output = in_vars.id2050out_output;
  out_vars.id2047out_output = in_vars.id2047out_output;
  out_vars.id2044out_output = in_vars.id2044out_output;
  out_vars.id2041out_output = in_vars.id2041out_output;
  out_vars.id2038out_output = in_vars.id2038out_output;
  out_vars.id2035out_output = in_vars.id2035out_output;
  out_vars.id2032out_output = in_vars.id2032out_output;
  out_vars.id2029out_output = in_vars.id2029out_output;
  out_vars.id2026out_output = in_vars.id2026out_output;
  out_vars.id2023out_output = in_vars.id2023out_output;
  out_vars.id2020out_output = in_vars.id2020out_output;
  out_vars.id2017out_output = in_vars.id2017out_output;
  out_vars.id2014out_output = in_vars.id2014out_output;
  out_vars.id2011out_output = in_vars.id2011out_output;
  out_vars.id2008out_output = in_vars.id2008out_output;
  out_vars.id2005out_output = in_vars.id2005out_output;
  out_vars.id2002out_output = in_vars.id2002out_output;
  out_vars.id1999out_output = in_vars.id1999out_output;
  out_vars.id1996out_output = in_vars.id1996out_output;
  out_vars.id1993out_output = in_vars.id1993out_output;
  out_vars.id1990out_output = in_vars.id1990out_output;
  out_vars.id1987out_output = in_vars.id1987out_output;
  out_vars.id1984out_output = in_vars.id1984out_output;
  out_vars.id1981out_output = in_vars.id1981out_output;
  out_vars.id1978out_output = in_vars.id1978out_output;
  out_vars.id1975out_output = in_vars.id1975out_output;
  out_vars.id1972out_output = in_vars.id1972out_output;
  out_vars.id1969out_output = in_vars.id1969out_output;
  return out_vars;
};

};
