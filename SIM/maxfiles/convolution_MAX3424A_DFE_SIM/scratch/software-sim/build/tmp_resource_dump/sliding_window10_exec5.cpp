#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "sliding_window10_exec5.h"
//#include "sliding_window10_exec6.h"
//#include "sliding_window10.h"

namespace maxcompilersim {

sliding_window10Block6Vars sliding_window10::execute5(const sliding_window10Block5Vars &in_vars) {
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1968out_output;

  { // Node ID: 1968 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1968in_input = id1967out_result[getCycle()%2];

    id1968out_output = id1968in_input;
  }
  { // Node ID: 1970 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1970in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1970in_option0 = in_vars.id1969out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1970in_option1 = id1968out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1970x_1;

    switch((id1970in_sel.getValueAsLong())) {
      case 0l:
        id1970x_1 = id1970in_option0;
        break;
      case 1l:
        id1970x_1 = id1970in_option1;
        break;
      default:
        id1970x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1970out_result[(getCycle()+1)%2] = (id1970x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1971out_output;

  { // Node ID: 1971 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1971in_input = id1970out_result[getCycle()%2];

    id1971out_output = id1971in_input;
  }
  { // Node ID: 1973 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1973in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1973in_option0 = in_vars.id1972out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1973in_option1 = id1971out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1973x_1;

    switch((id1973in_sel.getValueAsLong())) {
      case 0l:
        id1973x_1 = id1973in_option0;
        break;
      case 1l:
        id1973x_1 = id1973in_option1;
        break;
      default:
        id1973x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1973out_result[(getCycle()+1)%2] = (id1973x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1974out_output;

  { // Node ID: 1974 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1974in_input = id1973out_result[getCycle()%2];

    id1974out_output = id1974in_input;
  }
  { // Node ID: 1976 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1976in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1976in_option0 = in_vars.id1975out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1976in_option1 = id1974out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1976x_1;

    switch((id1976in_sel.getValueAsLong())) {
      case 0l:
        id1976x_1 = id1976in_option0;
        break;
      case 1l:
        id1976x_1 = id1976in_option1;
        break;
      default:
        id1976x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1976out_result[(getCycle()+1)%2] = (id1976x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1977out_output;

  { // Node ID: 1977 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1977in_input = id1976out_result[getCycle()%2];

    id1977out_output = id1977in_input;
  }
  { // Node ID: 1979 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1979in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1979in_option0 = in_vars.id1978out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1979in_option1 = id1977out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1979x_1;

    switch((id1979in_sel.getValueAsLong())) {
      case 0l:
        id1979x_1 = id1979in_option0;
        break;
      case 1l:
        id1979x_1 = id1979in_option1;
        break;
      default:
        id1979x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1979out_result[(getCycle()+1)%2] = (id1979x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1980out_output;

  { // Node ID: 1980 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1980in_input = id1979out_result[getCycle()%2];

    id1980out_output = id1980in_input;
  }
  { // Node ID: 1982 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1982in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1982in_option0 = in_vars.id1981out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1982in_option1 = id1980out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1982x_1;

    switch((id1982in_sel.getValueAsLong())) {
      case 0l:
        id1982x_1 = id1982in_option0;
        break;
      case 1l:
        id1982x_1 = id1982in_option1;
        break;
      default:
        id1982x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1982out_result[(getCycle()+1)%2] = (id1982x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1983out_output;

  { // Node ID: 1983 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1983in_input = id1982out_result[getCycle()%2];

    id1983out_output = id1983in_input;
  }
  { // Node ID: 1985 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1985in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1985in_option0 = in_vars.id1984out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1985in_option1 = id1983out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1985x_1;

    switch((id1985in_sel.getValueAsLong())) {
      case 0l:
        id1985x_1 = id1985in_option0;
        break;
      case 1l:
        id1985x_1 = id1985in_option1;
        break;
      default:
        id1985x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1985out_result[(getCycle()+1)%2] = (id1985x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1986out_output;

  { // Node ID: 1986 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1986in_input = id1985out_result[getCycle()%2];

    id1986out_output = id1986in_input;
  }
  { // Node ID: 1988 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1988in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1988in_option0 = in_vars.id1987out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1988in_option1 = id1986out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1988x_1;

    switch((id1988in_sel.getValueAsLong())) {
      case 0l:
        id1988x_1 = id1988in_option0;
        break;
      case 1l:
        id1988x_1 = id1988in_option1;
        break;
      default:
        id1988x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1988out_result[(getCycle()+1)%2] = (id1988x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1989out_output;

  { // Node ID: 1989 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1989in_input = id1988out_result[getCycle()%2];

    id1989out_output = id1989in_input;
  }
  { // Node ID: 1991 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1991in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1991in_option0 = in_vars.id1990out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1991in_option1 = id1989out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1991x_1;

    switch((id1991in_sel.getValueAsLong())) {
      case 0l:
        id1991x_1 = id1991in_option0;
        break;
      case 1l:
        id1991x_1 = id1991in_option1;
        break;
      default:
        id1991x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1991out_result[(getCycle()+1)%2] = (id1991x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1992out_output;

  { // Node ID: 1992 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1992in_input = id1991out_result[getCycle()%2];

    id1992out_output = id1992in_input;
  }
  { // Node ID: 1994 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1994in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1994in_option0 = in_vars.id1993out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1994in_option1 = id1992out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1994x_1;

    switch((id1994in_sel.getValueAsLong())) {
      case 0l:
        id1994x_1 = id1994in_option0;
        break;
      case 1l:
        id1994x_1 = id1994in_option1;
        break;
      default:
        id1994x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1994out_result[(getCycle()+1)%2] = (id1994x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1995out_output;

  { // Node ID: 1995 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1995in_input = id1994out_result[getCycle()%2];

    id1995out_output = id1995in_input;
  }
  { // Node ID: 1997 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1997in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1997in_option0 = in_vars.id1996out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1997in_option1 = id1995out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1997x_1;

    switch((id1997in_sel.getValueAsLong())) {
      case 0l:
        id1997x_1 = id1997in_option0;
        break;
      case 1l:
        id1997x_1 = id1997in_option1;
        break;
      default:
        id1997x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1997out_result[(getCycle()+1)%2] = (id1997x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1998out_output;

  { // Node ID: 1998 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1998in_input = id1997out_result[getCycle()%2];

    id1998out_output = id1998in_input;
  }
  { // Node ID: 2000 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2000in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2000in_option0 = in_vars.id1999out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2000in_option1 = id1998out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2000x_1;

    switch((id2000in_sel.getValueAsLong())) {
      case 0l:
        id2000x_1 = id2000in_option0;
        break;
      case 1l:
        id2000x_1 = id2000in_option1;
        break;
      default:
        id2000x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2000out_result[(getCycle()+1)%2] = (id2000x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2001out_output;

  { // Node ID: 2001 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2001in_input = id2000out_result[getCycle()%2];

    id2001out_output = id2001in_input;
  }
  { // Node ID: 2003 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2003in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2003in_option0 = in_vars.id2002out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2003in_option1 = id2001out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2003x_1;

    switch((id2003in_sel.getValueAsLong())) {
      case 0l:
        id2003x_1 = id2003in_option0;
        break;
      case 1l:
        id2003x_1 = id2003in_option1;
        break;
      default:
        id2003x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2003out_result[(getCycle()+1)%2] = (id2003x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2004out_output;

  { // Node ID: 2004 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2004in_input = id2003out_result[getCycle()%2];

    id2004out_output = id2004in_input;
  }
  { // Node ID: 2006 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2006in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2006in_option0 = in_vars.id2005out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2006in_option1 = id2004out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2006x_1;

    switch((id2006in_sel.getValueAsLong())) {
      case 0l:
        id2006x_1 = id2006in_option0;
        break;
      case 1l:
        id2006x_1 = id2006in_option1;
        break;
      default:
        id2006x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2006out_result[(getCycle()+1)%2] = (id2006x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2007out_output;

  { // Node ID: 2007 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2007in_input = id2006out_result[getCycle()%2];

    id2007out_output = id2007in_input;
  }
  { // Node ID: 2009 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2009in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2009in_option0 = in_vars.id2008out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2009in_option1 = id2007out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2009x_1;

    switch((id2009in_sel.getValueAsLong())) {
      case 0l:
        id2009x_1 = id2009in_option0;
        break;
      case 1l:
        id2009x_1 = id2009in_option1;
        break;
      default:
        id2009x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2009out_result[(getCycle()+1)%2] = (id2009x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2010out_output;

  { // Node ID: 2010 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2010in_input = id2009out_result[getCycle()%2];

    id2010out_output = id2010in_input;
  }
  { // Node ID: 2012 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2012in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2012in_option0 = in_vars.id2011out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2012in_option1 = id2010out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2012x_1;

    switch((id2012in_sel.getValueAsLong())) {
      case 0l:
        id2012x_1 = id2012in_option0;
        break;
      case 1l:
        id2012x_1 = id2012in_option1;
        break;
      default:
        id2012x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2012out_result[(getCycle()+1)%2] = (id2012x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2013out_output;

  { // Node ID: 2013 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2013in_input = id2012out_result[getCycle()%2];

    id2013out_output = id2013in_input;
  }
  { // Node ID: 2015 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2015in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2015in_option0 = in_vars.id2014out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2015in_option1 = id2013out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2015x_1;

    switch((id2015in_sel.getValueAsLong())) {
      case 0l:
        id2015x_1 = id2015in_option0;
        break;
      case 1l:
        id2015x_1 = id2015in_option1;
        break;
      default:
        id2015x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2015out_result[(getCycle()+1)%2] = (id2015x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2016out_output;

  { // Node ID: 2016 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2016in_input = id2015out_result[getCycle()%2];

    id2016out_output = id2016in_input;
  }
  { // Node ID: 2018 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2018in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2018in_option0 = in_vars.id2017out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2018in_option1 = id2016out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2018x_1;

    switch((id2018in_sel.getValueAsLong())) {
      case 0l:
        id2018x_1 = id2018in_option0;
        break;
      case 1l:
        id2018x_1 = id2018in_option1;
        break;
      default:
        id2018x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2018out_result[(getCycle()+1)%2] = (id2018x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2019out_output;

  { // Node ID: 2019 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2019in_input = id2018out_result[getCycle()%2];

    id2019out_output = id2019in_input;
  }
  { // Node ID: 2021 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2021in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2021in_option0 = in_vars.id2020out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2021in_option1 = id2019out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2021x_1;

    switch((id2021in_sel.getValueAsLong())) {
      case 0l:
        id2021x_1 = id2021in_option0;
        break;
      case 1l:
        id2021x_1 = id2021in_option1;
        break;
      default:
        id2021x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2021out_result[(getCycle()+1)%2] = (id2021x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2022out_output;

  { // Node ID: 2022 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2022in_input = id2021out_result[getCycle()%2];

    id2022out_output = id2022in_input;
  }
  { // Node ID: 2024 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2024in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2024in_option0 = in_vars.id2023out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2024in_option1 = id2022out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2024x_1;

    switch((id2024in_sel.getValueAsLong())) {
      case 0l:
        id2024x_1 = id2024in_option0;
        break;
      case 1l:
        id2024x_1 = id2024in_option1;
        break;
      default:
        id2024x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2024out_result[(getCycle()+1)%2] = (id2024x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2025out_output;

  { // Node ID: 2025 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2025in_input = id2024out_result[getCycle()%2];

    id2025out_output = id2025in_input;
  }
  { // Node ID: 2027 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2027in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2027in_option0 = in_vars.id2026out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2027in_option1 = id2025out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2027x_1;

    switch((id2027in_sel.getValueAsLong())) {
      case 0l:
        id2027x_1 = id2027in_option0;
        break;
      case 1l:
        id2027x_1 = id2027in_option1;
        break;
      default:
        id2027x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2027out_result[(getCycle()+1)%2] = (id2027x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2028out_output;

  { // Node ID: 2028 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2028in_input = id2027out_result[getCycle()%2];

    id2028out_output = id2028in_input;
  }
  { // Node ID: 2030 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2030in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2030in_option0 = in_vars.id2029out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2030in_option1 = id2028out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2030x_1;

    switch((id2030in_sel.getValueAsLong())) {
      case 0l:
        id2030x_1 = id2030in_option0;
        break;
      case 1l:
        id2030x_1 = id2030in_option1;
        break;
      default:
        id2030x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2030out_result[(getCycle()+1)%2] = (id2030x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2031out_output;

  { // Node ID: 2031 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2031in_input = id2030out_result[getCycle()%2];

    id2031out_output = id2031in_input;
  }
  { // Node ID: 2033 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2033in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2033in_option0 = in_vars.id2032out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2033in_option1 = id2031out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2033x_1;

    switch((id2033in_sel.getValueAsLong())) {
      case 0l:
        id2033x_1 = id2033in_option0;
        break;
      case 1l:
        id2033x_1 = id2033in_option1;
        break;
      default:
        id2033x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2033out_result[(getCycle()+1)%2] = (id2033x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2034out_output;

  { // Node ID: 2034 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2034in_input = id2033out_result[getCycle()%2];

    id2034out_output = id2034in_input;
  }
  { // Node ID: 2036 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2036in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2036in_option0 = in_vars.id2035out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2036in_option1 = id2034out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2036x_1;

    switch((id2036in_sel.getValueAsLong())) {
      case 0l:
        id2036x_1 = id2036in_option0;
        break;
      case 1l:
        id2036x_1 = id2036in_option1;
        break;
      default:
        id2036x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2036out_result[(getCycle()+1)%2] = (id2036x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2037out_output;

  { // Node ID: 2037 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2037in_input = id2036out_result[getCycle()%2];

    id2037out_output = id2037in_input;
  }
  { // Node ID: 2039 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2039in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2039in_option0 = in_vars.id2038out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2039in_option1 = id2037out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2039x_1;

    switch((id2039in_sel.getValueAsLong())) {
      case 0l:
        id2039x_1 = id2039in_option0;
        break;
      case 1l:
        id2039x_1 = id2039in_option1;
        break;
      default:
        id2039x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2039out_result[(getCycle()+1)%2] = (id2039x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2040out_output;

  { // Node ID: 2040 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2040in_input = id2039out_result[getCycle()%2];

    id2040out_output = id2040in_input;
  }
  { // Node ID: 2042 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2042in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2042in_option0 = in_vars.id2041out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2042in_option1 = id2040out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2042x_1;

    switch((id2042in_sel.getValueAsLong())) {
      case 0l:
        id2042x_1 = id2042in_option0;
        break;
      case 1l:
        id2042x_1 = id2042in_option1;
        break;
      default:
        id2042x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2042out_result[(getCycle()+1)%2] = (id2042x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2043out_output;

  { // Node ID: 2043 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2043in_input = id2042out_result[getCycle()%2];

    id2043out_output = id2043in_input;
  }
  { // Node ID: 2045 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2045in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2045in_option0 = in_vars.id2044out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2045in_option1 = id2043out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2045x_1;

    switch((id2045in_sel.getValueAsLong())) {
      case 0l:
        id2045x_1 = id2045in_option0;
        break;
      case 1l:
        id2045x_1 = id2045in_option1;
        break;
      default:
        id2045x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2045out_result[(getCycle()+1)%2] = (id2045x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2046out_output;

  { // Node ID: 2046 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2046in_input = id2045out_result[getCycle()%2];

    id2046out_output = id2046in_input;
  }
  { // Node ID: 2048 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2048in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2048in_option0 = in_vars.id2047out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2048in_option1 = id2046out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2048x_1;

    switch((id2048in_sel.getValueAsLong())) {
      case 0l:
        id2048x_1 = id2048in_option0;
        break;
      case 1l:
        id2048x_1 = id2048in_option1;
        break;
      default:
        id2048x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2048out_result[(getCycle()+1)%2] = (id2048x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2049out_output;

  { // Node ID: 2049 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2049in_input = id2048out_result[getCycle()%2];

    id2049out_output = id2049in_input;
  }
  { // Node ID: 2051 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2051in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2051in_option0 = in_vars.id2050out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2051in_option1 = id2049out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2051x_1;

    switch((id2051in_sel.getValueAsLong())) {
      case 0l:
        id2051x_1 = id2051in_option0;
        break;
      case 1l:
        id2051x_1 = id2051in_option1;
        break;
      default:
        id2051x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2051out_result[(getCycle()+1)%2] = (id2051x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2052out_output;

  { // Node ID: 2052 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2052in_input = id2051out_result[getCycle()%2];

    id2052out_output = id2052in_input;
  }
  { // Node ID: 2054 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2054in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2054in_option0 = in_vars.id2053out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2054in_option1 = id2052out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2054x_1;

    switch((id2054in_sel.getValueAsLong())) {
      case 0l:
        id2054x_1 = id2054in_option0;
        break;
      case 1l:
        id2054x_1 = id2054in_option1;
        break;
      default:
        id2054x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2054out_result[(getCycle()+1)%2] = (id2054x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2055out_output;

  { // Node ID: 2055 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2055in_input = id2054out_result[getCycle()%2];

    id2055out_output = id2055in_input;
  }
  { // Node ID: 2057 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2057in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2057in_option0 = in_vars.id2056out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2057in_option1 = id2055out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2057x_1;

    switch((id2057in_sel.getValueAsLong())) {
      case 0l:
        id2057x_1 = id2057in_option0;
        break;
      case 1l:
        id2057x_1 = id2057in_option1;
        break;
      default:
        id2057x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2057out_result[(getCycle()+1)%2] = (id2057x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2058out_output;

  { // Node ID: 2058 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2058in_input = id2057out_result[getCycle()%2];

    id2058out_output = id2058in_input;
  }
  { // Node ID: 2060 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2060in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2060in_option0 = in_vars.id2059out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2060in_option1 = id2058out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2060x_1;

    switch((id2060in_sel.getValueAsLong())) {
      case 0l:
        id2060x_1 = id2060in_option0;
        break;
      case 1l:
        id2060x_1 = id2060in_option1;
        break;
      default:
        id2060x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2060out_result[(getCycle()+1)%2] = (id2060x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2061out_output;

  { // Node ID: 2061 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2061in_input = id2060out_result[getCycle()%2];

    id2061out_output = id2061in_input;
  }
  { // Node ID: 2063 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2063in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2063in_option0 = in_vars.id2062out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2063in_option1 = id2061out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2063x_1;

    switch((id2063in_sel.getValueAsLong())) {
      case 0l:
        id2063x_1 = id2063in_option0;
        break;
      case 1l:
        id2063x_1 = id2063in_option1;
        break;
      default:
        id2063x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2063out_result[(getCycle()+1)%2] = (id2063x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2064out_output;

  { // Node ID: 2064 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2064in_input = id2063out_result[getCycle()%2];

    id2064out_output = id2064in_input;
  }
  { // Node ID: 2066 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2066in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2066in_option0 = in_vars.id2065out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2066in_option1 = id2064out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2066x_1;

    switch((id2066in_sel.getValueAsLong())) {
      case 0l:
        id2066x_1 = id2066in_option0;
        break;
      case 1l:
        id2066x_1 = id2066in_option1;
        break;
      default:
        id2066x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2066out_result[(getCycle()+1)%2] = (id2066x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2067out_output;

  { // Node ID: 2067 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2067in_input = id2066out_result[getCycle()%2];

    id2067out_output = id2067in_input;
  }
  { // Node ID: 2069 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2069in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2069in_option0 = in_vars.id2068out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2069in_option1 = id2067out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2069x_1;

    switch((id2069in_sel.getValueAsLong())) {
      case 0l:
        id2069x_1 = id2069in_option0;
        break;
      case 1l:
        id2069x_1 = id2069in_option1;
        break;
      default:
        id2069x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2069out_result[(getCycle()+1)%2] = (id2069x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2070out_output;

  { // Node ID: 2070 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2070in_input = id2069out_result[getCycle()%2];

    id2070out_output = id2070in_input;
  }
  { // Node ID: 2072 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2072in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2072in_option0 = in_vars.id2071out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2072in_option1 = id2070out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2072x_1;

    switch((id2072in_sel.getValueAsLong())) {
      case 0l:
        id2072x_1 = id2072in_option0;
        break;
      case 1l:
        id2072x_1 = id2072in_option1;
        break;
      default:
        id2072x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2072out_result[(getCycle()+1)%2] = (id2072x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2073out_output;

  { // Node ID: 2073 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2073in_input = id2072out_result[getCycle()%2];

    id2073out_output = id2073in_input;
  }
  { // Node ID: 2075 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2075in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2075in_option0 = in_vars.id2074out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2075in_option1 = id2073out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2075x_1;

    switch((id2075in_sel.getValueAsLong())) {
      case 0l:
        id2075x_1 = id2075in_option0;
        break;
      case 1l:
        id2075x_1 = id2075in_option1;
        break;
      default:
        id2075x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2075out_result[(getCycle()+1)%2] = (id2075x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2076out_output;

  { // Node ID: 2076 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2076in_input = id2075out_result[getCycle()%2];

    id2076out_output = id2076in_input;
  }
  { // Node ID: 2078 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2078in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2078in_option0 = in_vars.id2077out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2078in_option1 = id2076out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2078x_1;

    switch((id2078in_sel.getValueAsLong())) {
      case 0l:
        id2078x_1 = id2078in_option0;
        break;
      case 1l:
        id2078x_1 = id2078in_option1;
        break;
      default:
        id2078x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2078out_result[(getCycle()+1)%2] = (id2078x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2079out_output;

  { // Node ID: 2079 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2079in_input = id2078out_result[getCycle()%2];

    id2079out_output = id2079in_input;
  }
  { // Node ID: 2081 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2081in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2081in_option0 = in_vars.id2080out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2081in_option1 = id2079out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2081x_1;

    switch((id2081in_sel.getValueAsLong())) {
      case 0l:
        id2081x_1 = id2081in_option0;
        break;
      case 1l:
        id2081x_1 = id2081in_option1;
        break;
      default:
        id2081x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2081out_result[(getCycle()+1)%2] = (id2081x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2082out_output;

  { // Node ID: 2082 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2082in_input = id2081out_result[getCycle()%2];

    id2082out_output = id2082in_input;
  }
  { // Node ID: 2084 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2084in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2084in_option0 = in_vars.id2083out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2084in_option1 = id2082out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2084x_1;

    switch((id2084in_sel.getValueAsLong())) {
      case 0l:
        id2084x_1 = id2084in_option0;
        break;
      case 1l:
        id2084x_1 = id2084in_option1;
        break;
      default:
        id2084x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2084out_result[(getCycle()+1)%2] = (id2084x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2085out_output;

  { // Node ID: 2085 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2085in_input = id2084out_result[getCycle()%2];

    id2085out_output = id2085in_input;
  }
  { // Node ID: 2087 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2087in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2087in_option0 = in_vars.id2086out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2087in_option1 = id2085out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2087x_1;

    switch((id2087in_sel.getValueAsLong())) {
      case 0l:
        id2087x_1 = id2087in_option0;
        break;
      case 1l:
        id2087x_1 = id2087in_option1;
        break;
      default:
        id2087x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2087out_result[(getCycle()+1)%2] = (id2087x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2088out_output;

  { // Node ID: 2088 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2088in_input = id2087out_result[getCycle()%2];

    id2088out_output = id2088in_input;
  }
  { // Node ID: 2090 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2090in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2090in_option0 = in_vars.id2089out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2090in_option1 = id2088out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2090x_1;

    switch((id2090in_sel.getValueAsLong())) {
      case 0l:
        id2090x_1 = id2090in_option0;
        break;
      case 1l:
        id2090x_1 = id2090in_option1;
        break;
      default:
        id2090x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2090out_result[(getCycle()+1)%2] = (id2090x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2091out_output;

  { // Node ID: 2091 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2091in_input = id2090out_result[getCycle()%2];

    id2091out_output = id2091in_input;
  }
  { // Node ID: 2093 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2093in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2093in_option0 = in_vars.id2092out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2093in_option1 = id2091out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2093x_1;

    switch((id2093in_sel.getValueAsLong())) {
      case 0l:
        id2093x_1 = id2093in_option0;
        break;
      case 1l:
        id2093x_1 = id2093in_option1;
        break;
      default:
        id2093x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2093out_result[(getCycle()+1)%2] = (id2093x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2094out_output;

  { // Node ID: 2094 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2094in_input = id2093out_result[getCycle()%2];

    id2094out_output = id2094in_input;
  }
  { // Node ID: 2096 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2096in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2096in_option0 = in_vars.id2095out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2096in_option1 = id2094out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2096x_1;

    switch((id2096in_sel.getValueAsLong())) {
      case 0l:
        id2096x_1 = id2096in_option0;
        break;
      case 1l:
        id2096x_1 = id2096in_option1;
        break;
      default:
        id2096x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2096out_result[(getCycle()+1)%2] = (id2096x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2097out_output;

  { // Node ID: 2097 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2097in_input = id2096out_result[getCycle()%2];

    id2097out_output = id2097in_input;
  }
  { // Node ID: 2099 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2099in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2099in_option0 = in_vars.id2098out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2099in_option1 = id2097out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2099x_1;

    switch((id2099in_sel.getValueAsLong())) {
      case 0l:
        id2099x_1 = id2099in_option0;
        break;
      case 1l:
        id2099x_1 = id2099in_option1;
        break;
      default:
        id2099x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2099out_result[(getCycle()+1)%2] = (id2099x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2100out_output;

  { // Node ID: 2100 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2100in_input = id2099out_result[getCycle()%2];

    id2100out_output = id2100in_input;
  }
  { // Node ID: 2102 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2102in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2102in_option0 = in_vars.id2101out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2102in_option1 = id2100out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2102x_1;

    switch((id2102in_sel.getValueAsLong())) {
      case 0l:
        id2102x_1 = id2102in_option0;
        break;
      case 1l:
        id2102x_1 = id2102in_option1;
        break;
      default:
        id2102x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2102out_result[(getCycle()+1)%2] = (id2102x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2103out_output;

  { // Node ID: 2103 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2103in_input = id2102out_result[getCycle()%2];

    id2103out_output = id2103in_input;
  }
  { // Node ID: 2105 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2105in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2105in_option0 = in_vars.id2104out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2105in_option1 = id2103out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2105x_1;

    switch((id2105in_sel.getValueAsLong())) {
      case 0l:
        id2105x_1 = id2105in_option0;
        break;
      case 1l:
        id2105x_1 = id2105in_option1;
        break;
      default:
        id2105x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2105out_result[(getCycle()+1)%2] = (id2105x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2106out_output;

  { // Node ID: 2106 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2106in_input = id2105out_result[getCycle()%2];

    id2106out_output = id2106in_input;
  }
  { // Node ID: 2108 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2108in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2108in_option0 = in_vars.id2107out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2108in_option1 = id2106out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2108x_1;

    switch((id2108in_sel.getValueAsLong())) {
      case 0l:
        id2108x_1 = id2108in_option0;
        break;
      case 1l:
        id2108x_1 = id2108in_option1;
        break;
      default:
        id2108x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2108out_result[(getCycle()+1)%2] = (id2108x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2109out_output;

  { // Node ID: 2109 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2109in_input = id2108out_result[getCycle()%2];

    id2109out_output = id2109in_input;
  }
  { // Node ID: 2111 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2111in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2111in_option0 = in_vars.id2110out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2111in_option1 = id2109out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2111x_1;

    switch((id2111in_sel.getValueAsLong())) {
      case 0l:
        id2111x_1 = id2111in_option0;
        break;
      case 1l:
        id2111x_1 = id2111in_option1;
        break;
      default:
        id2111x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2111out_result[(getCycle()+1)%2] = (id2111x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2112out_output;

  { // Node ID: 2112 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2112in_input = id2111out_result[getCycle()%2];

    id2112out_output = id2112in_input;
  }
  { // Node ID: 2114 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2114in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2114in_option0 = in_vars.id2113out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2114in_option1 = id2112out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2114x_1;

    switch((id2114in_sel.getValueAsLong())) {
      case 0l:
        id2114x_1 = id2114in_option0;
        break;
      case 1l:
        id2114x_1 = id2114in_option1;
        break;
      default:
        id2114x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2114out_result[(getCycle()+1)%2] = (id2114x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2115out_output;

  { // Node ID: 2115 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2115in_input = id2114out_result[getCycle()%2];

    id2115out_output = id2115in_input;
  }
  { // Node ID: 2117 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2117in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2117in_option0 = in_vars.id2116out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2117in_option1 = id2115out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2117x_1;

    switch((id2117in_sel.getValueAsLong())) {
      case 0l:
        id2117x_1 = id2117in_option0;
        break;
      case 1l:
        id2117x_1 = id2117in_option1;
        break;
      default:
        id2117x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2117out_result[(getCycle()+1)%2] = (id2117x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2118out_output;

  { // Node ID: 2118 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2118in_input = id2117out_result[getCycle()%2];

    id2118out_output = id2118in_input;
  }
  { // Node ID: 2120 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2120in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2120in_option0 = in_vars.id2119out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2120in_option1 = id2118out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2120x_1;

    switch((id2120in_sel.getValueAsLong())) {
      case 0l:
        id2120x_1 = id2120in_option0;
        break;
      case 1l:
        id2120x_1 = id2120in_option1;
        break;
      default:
        id2120x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2120out_result[(getCycle()+1)%2] = (id2120x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2121out_output;

  { // Node ID: 2121 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2121in_input = id2120out_result[getCycle()%2];

    id2121out_output = id2121in_input;
  }
  { // Node ID: 2123 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2123in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2123in_option0 = in_vars.id2122out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2123in_option1 = id2121out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2123x_1;

    switch((id2123in_sel.getValueAsLong())) {
      case 0l:
        id2123x_1 = id2123in_option0;
        break;
      case 1l:
        id2123x_1 = id2123in_option1;
        break;
      default:
        id2123x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2123out_result[(getCycle()+1)%2] = (id2123x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2124out_output;

  { // Node ID: 2124 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2124in_input = id2123out_result[getCycle()%2];

    id2124out_output = id2124in_input;
  }
  { // Node ID: 2126 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2126in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2126in_option0 = in_vars.id2125out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2126in_option1 = id2124out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2126x_1;

    switch((id2126in_sel.getValueAsLong())) {
      case 0l:
        id2126x_1 = id2126in_option0;
        break;
      case 1l:
        id2126x_1 = id2126in_option1;
        break;
      default:
        id2126x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2126out_result[(getCycle()+1)%2] = (id2126x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2127out_output;

  { // Node ID: 2127 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2127in_input = id2126out_result[getCycle()%2];

    id2127out_output = id2127in_input;
  }
  { // Node ID: 2129 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2129in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2129in_option0 = in_vars.id2128out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2129in_option1 = id2127out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2129x_1;

    switch((id2129in_sel.getValueAsLong())) {
      case 0l:
        id2129x_1 = id2129in_option0;
        break;
      case 1l:
        id2129x_1 = id2129in_option1;
        break;
      default:
        id2129x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2129out_result[(getCycle()+1)%2] = (id2129x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2130out_output;

  { // Node ID: 2130 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2130in_input = id2129out_result[getCycle()%2];

    id2130out_output = id2130in_input;
  }
  { // Node ID: 2132 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2132in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2132in_option0 = in_vars.id2131out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2132in_option1 = id2130out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2132x_1;

    switch((id2132in_sel.getValueAsLong())) {
      case 0l:
        id2132x_1 = id2132in_option0;
        break;
      case 1l:
        id2132x_1 = id2132in_option1;
        break;
      default:
        id2132x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2132out_result[(getCycle()+1)%2] = (id2132x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2133out_output;

  { // Node ID: 2133 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2133in_input = id2132out_result[getCycle()%2];

    id2133out_output = id2133in_input;
  }
  { // Node ID: 2135 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2135in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2135in_option0 = in_vars.id2134out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2135in_option1 = id2133out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2135x_1;

    switch((id2135in_sel.getValueAsLong())) {
      case 0l:
        id2135x_1 = id2135in_option0;
        break;
      case 1l:
        id2135x_1 = id2135in_option1;
        break;
      default:
        id2135x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2135out_result[(getCycle()+1)%2] = (id2135x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2136out_output;

  { // Node ID: 2136 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2136in_input = id2135out_result[getCycle()%2];

    id2136out_output = id2136in_input;
  }
  { // Node ID: 2138 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2138in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2138in_option0 = in_vars.id2137out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2138in_option1 = id2136out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2138x_1;

    switch((id2138in_sel.getValueAsLong())) {
      case 0l:
        id2138x_1 = id2138in_option0;
        break;
      case 1l:
        id2138x_1 = id2138in_option1;
        break;
      default:
        id2138x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2138out_result[(getCycle()+1)%2] = (id2138x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2139out_output;

  { // Node ID: 2139 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2139in_input = id2138out_result[getCycle()%2];

    id2139out_output = id2139in_input;
  }
  { // Node ID: 2141 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2141in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2141in_option0 = in_vars.id2140out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2141in_option1 = id2139out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2141x_1;

    switch((id2141in_sel.getValueAsLong())) {
      case 0l:
        id2141x_1 = id2141in_option0;
        break;
      case 1l:
        id2141x_1 = id2141in_option1;
        break;
      default:
        id2141x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2141out_result[(getCycle()+1)%2] = (id2141x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2142out_output;

  { // Node ID: 2142 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2142in_input = id2141out_result[getCycle()%2];

    id2142out_output = id2142in_input;
  }
  { // Node ID: 2144 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2144in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2144in_option0 = in_vars.id2143out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2144in_option1 = id2142out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2144x_1;

    switch((id2144in_sel.getValueAsLong())) {
      case 0l:
        id2144x_1 = id2144in_option0;
        break;
      case 1l:
        id2144x_1 = id2144in_option1;
        break;
      default:
        id2144x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2144out_result[(getCycle()+1)%2] = (id2144x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2145out_output;

  { // Node ID: 2145 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2145in_input = id2144out_result[getCycle()%2];

    id2145out_output = id2145in_input;
  }
  { // Node ID: 2147 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2147in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2147in_option0 = in_vars.id2146out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2147in_option1 = id2145out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2147x_1;

    switch((id2147in_sel.getValueAsLong())) {
      case 0l:
        id2147x_1 = id2147in_option0;
        break;
      case 1l:
        id2147x_1 = id2147in_option1;
        break;
      default:
        id2147x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2147out_result[(getCycle()+1)%2] = (id2147x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2148out_output;

  { // Node ID: 2148 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2148in_input = id2147out_result[getCycle()%2];

    id2148out_output = id2148in_input;
  }
  { // Node ID: 2150 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2150in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2150in_option0 = in_vars.id2149out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2150in_option1 = id2148out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2150x_1;

    switch((id2150in_sel.getValueAsLong())) {
      case 0l:
        id2150x_1 = id2150in_option0;
        break;
      case 1l:
        id2150x_1 = id2150in_option1;
        break;
      default:
        id2150x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2150out_result[(getCycle()+1)%2] = (id2150x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2151out_output;

  { // Node ID: 2151 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2151in_input = id2150out_result[getCycle()%2];

    id2151out_output = id2151in_input;
  }
  { // Node ID: 2153 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2153in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2153in_option0 = in_vars.id2152out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2153in_option1 = id2151out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2153x_1;

    switch((id2153in_sel.getValueAsLong())) {
      case 0l:
        id2153x_1 = id2153in_option0;
        break;
      case 1l:
        id2153x_1 = id2153in_option1;
        break;
      default:
        id2153x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2153out_result[(getCycle()+1)%2] = (id2153x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2154out_output;

  { // Node ID: 2154 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2154in_input = id2153out_result[getCycle()%2];

    id2154out_output = id2154in_input;
  }
  { // Node ID: 2156 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2156in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2156in_option0 = in_vars.id2155out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2156in_option1 = id2154out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2156x_1;

    switch((id2156in_sel.getValueAsLong())) {
      case 0l:
        id2156x_1 = id2156in_option0;
        break;
      case 1l:
        id2156x_1 = id2156in_option1;
        break;
      default:
        id2156x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2156out_result[(getCycle()+1)%2] = (id2156x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2157out_output;

  { // Node ID: 2157 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2157in_input = id2156out_result[getCycle()%2];

    id2157out_output = id2157in_input;
  }
  { // Node ID: 2159 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2159in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2159in_option0 = in_vars.id2158out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2159in_option1 = id2157out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2159x_1;

    switch((id2159in_sel.getValueAsLong())) {
      case 0l:
        id2159x_1 = id2159in_option0;
        break;
      case 1l:
        id2159x_1 = id2159in_option1;
        break;
      default:
        id2159x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2159out_result[(getCycle()+1)%2] = (id2159x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2160out_output;

  { // Node ID: 2160 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2160in_input = id2159out_result[getCycle()%2];

    id2160out_output = id2160in_input;
  }
  { // Node ID: 2162 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2162in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2162in_option0 = in_vars.id2161out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2162in_option1 = id2160out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2162x_1;

    switch((id2162in_sel.getValueAsLong())) {
      case 0l:
        id2162x_1 = id2162in_option0;
        break;
      case 1l:
        id2162x_1 = id2162in_option1;
        break;
      default:
        id2162x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2162out_result[(getCycle()+1)%2] = (id2162x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2163out_output;

  { // Node ID: 2163 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2163in_input = id2162out_result[getCycle()%2];

    id2163out_output = id2163in_input;
  }
  { // Node ID: 2165 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2165in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2165in_option0 = in_vars.id2164out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2165in_option1 = id2163out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2165x_1;

    switch((id2165in_sel.getValueAsLong())) {
      case 0l:
        id2165x_1 = id2165in_option0;
        break;
      case 1l:
        id2165x_1 = id2165in_option1;
        break;
      default:
        id2165x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2165out_result[(getCycle()+1)%2] = (id2165x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2166out_output;

  { // Node ID: 2166 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2166in_input = id2165out_result[getCycle()%2];

    id2166out_output = id2166in_input;
  }
  { // Node ID: 2168 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2168in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2168in_option0 = in_vars.id2167out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2168in_option1 = id2166out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2168x_1;

    switch((id2168in_sel.getValueAsLong())) {
      case 0l:
        id2168x_1 = id2168in_option0;
        break;
      case 1l:
        id2168x_1 = id2168in_option1;
        break;
      default:
        id2168x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2168out_result[(getCycle()+1)%2] = (id2168x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2169out_output;

  { // Node ID: 2169 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2169in_input = id2168out_result[getCycle()%2];

    id2169out_output = id2169in_input;
  }
  { // Node ID: 2171 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2171in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2171in_option0 = in_vars.id2170out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2171in_option1 = id2169out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2171x_1;

    switch((id2171in_sel.getValueAsLong())) {
      case 0l:
        id2171x_1 = id2171in_option0;
        break;
      case 1l:
        id2171x_1 = id2171in_option1;
        break;
      default:
        id2171x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2171out_result[(getCycle()+1)%2] = (id2171x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2172out_output;

  { // Node ID: 2172 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2172in_input = id2171out_result[getCycle()%2];

    id2172out_output = id2172in_input;
  }
  { // Node ID: 2174 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2174in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2174in_option0 = in_vars.id2173out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2174in_option1 = id2172out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2174x_1;

    switch((id2174in_sel.getValueAsLong())) {
      case 0l:
        id2174x_1 = id2174in_option0;
        break;
      case 1l:
        id2174x_1 = id2174in_option1;
        break;
      default:
        id2174x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2174out_result[(getCycle()+1)%2] = (id2174x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2175out_output;

  { // Node ID: 2175 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2175in_input = id2174out_result[getCycle()%2];

    id2175out_output = id2175in_input;
  }
  { // Node ID: 2177 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2177in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2177in_option0 = in_vars.id2176out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2177in_option1 = id2175out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2177x_1;

    switch((id2177in_sel.getValueAsLong())) {
      case 0l:
        id2177x_1 = id2177in_option0;
        break;
      case 1l:
        id2177x_1 = id2177in_option1;
        break;
      default:
        id2177x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2177out_result[(getCycle()+1)%2] = (id2177x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2178out_output;

  { // Node ID: 2178 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2178in_input = id2177out_result[getCycle()%2];

    id2178out_output = id2178in_input;
  }
  { // Node ID: 2180 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2180in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2180in_option0 = in_vars.id2179out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2180in_option1 = id2178out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2180x_1;

    switch((id2180in_sel.getValueAsLong())) {
      case 0l:
        id2180x_1 = id2180in_option0;
        break;
      case 1l:
        id2180x_1 = id2180in_option1;
        break;
      default:
        id2180x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2180out_result[(getCycle()+1)%2] = (id2180x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2181out_output;

  { // Node ID: 2181 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2181in_input = id2180out_result[getCycle()%2];

    id2181out_output = id2181in_input;
  }
  { // Node ID: 2183 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2183in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2183in_option0 = in_vars.id2182out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2183in_option1 = id2181out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2183x_1;

    switch((id2183in_sel.getValueAsLong())) {
      case 0l:
        id2183x_1 = id2183in_option0;
        break;
      case 1l:
        id2183x_1 = id2183in_option1;
        break;
      default:
        id2183x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2183out_result[(getCycle()+1)%2] = (id2183x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2184out_output;

  { // Node ID: 2184 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2184in_input = id2183out_result[getCycle()%2];

    id2184out_output = id2184in_input;
  }
  { // Node ID: 2186 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2186in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2186in_option0 = in_vars.id2185out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2186in_option1 = id2184out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2186x_1;

    switch((id2186in_sel.getValueAsLong())) {
      case 0l:
        id2186x_1 = id2186in_option0;
        break;
      case 1l:
        id2186x_1 = id2186in_option1;
        break;
      default:
        id2186x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2186out_result[(getCycle()+1)%2] = (id2186x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2187out_output;

  { // Node ID: 2187 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2187in_input = id2186out_result[getCycle()%2];

    id2187out_output = id2187in_input;
  }
  { // Node ID: 2189 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2189in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2189in_option0 = in_vars.id2188out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2189in_option1 = id2187out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2189x_1;

    switch((id2189in_sel.getValueAsLong())) {
      case 0l:
        id2189x_1 = id2189in_option0;
        break;
      case 1l:
        id2189x_1 = id2189in_option1;
        break;
      default:
        id2189x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2189out_result[(getCycle()+1)%2] = (id2189x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2190out_output;

  { // Node ID: 2190 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2190in_input = id2189out_result[getCycle()%2];

    id2190out_output = id2190in_input;
  }
  { // Node ID: 2192 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2192in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2192in_option0 = in_vars.id2191out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2192in_option1 = id2190out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2192x_1;

    switch((id2192in_sel.getValueAsLong())) {
      case 0l:
        id2192x_1 = id2192in_option0;
        break;
      case 1l:
        id2192x_1 = id2192in_option1;
        break;
      default:
        id2192x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2192out_result[(getCycle()+1)%2] = (id2192x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2193out_output;

  { // Node ID: 2193 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2193in_input = id2192out_result[getCycle()%2];

    id2193out_output = id2193in_input;
  }
  { // Node ID: 2195 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2195in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2195in_option0 = in_vars.id2194out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2195in_option1 = id2193out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2195x_1;

    switch((id2195in_sel.getValueAsLong())) {
      case 0l:
        id2195x_1 = id2195in_option0;
        break;
      case 1l:
        id2195x_1 = id2195in_option1;
        break;
      default:
        id2195x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2195out_result[(getCycle()+1)%2] = (id2195x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2196out_output;

  { // Node ID: 2196 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2196in_input = id2195out_result[getCycle()%2];

    id2196out_output = id2196in_input;
  }
  { // Node ID: 2198 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2198in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2198in_option0 = in_vars.id2197out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2198in_option1 = id2196out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2198x_1;

    switch((id2198in_sel.getValueAsLong())) {
      case 0l:
        id2198x_1 = id2198in_option0;
        break;
      case 1l:
        id2198x_1 = id2198in_option1;
        break;
      default:
        id2198x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2198out_result[(getCycle()+1)%2] = (id2198x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2199out_output;

  { // Node ID: 2199 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2199in_input = id2198out_result[getCycle()%2];

    id2199out_output = id2199in_input;
  }
  { // Node ID: 2201 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2201in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2201in_option0 = in_vars.id2200out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2201in_option1 = id2199out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2201x_1;

    switch((id2201in_sel.getValueAsLong())) {
      case 0l:
        id2201x_1 = id2201in_option0;
        break;
      case 1l:
        id2201x_1 = id2201in_option1;
        break;
      default:
        id2201x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2201out_result[(getCycle()+1)%2] = (id2201x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2202out_output;

  { // Node ID: 2202 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2202in_input = id2201out_result[getCycle()%2];

    id2202out_output = id2202in_input;
  }
  { // Node ID: 2204 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2204in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2204in_option0 = in_vars.id2203out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2204in_option1 = id2202out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2204x_1;

    switch((id2204in_sel.getValueAsLong())) {
      case 0l:
        id2204x_1 = id2204in_option0;
        break;
      case 1l:
        id2204x_1 = id2204in_option1;
        break;
      default:
        id2204x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2204out_result[(getCycle()+1)%2] = (id2204x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2205out_output;

  { // Node ID: 2205 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2205in_input = id2204out_result[getCycle()%2];

    id2205out_output = id2205in_input;
  }
  { // Node ID: 2207 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2207in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2207in_option0 = in_vars.id2206out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2207in_option1 = id2205out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2207x_1;

    switch((id2207in_sel.getValueAsLong())) {
      case 0l:
        id2207x_1 = id2207in_option0;
        break;
      case 1l:
        id2207x_1 = id2207in_option1;
        break;
      default:
        id2207x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2207out_result[(getCycle()+1)%2] = (id2207x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2208out_output;

  { // Node ID: 2208 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2208in_input = id2207out_result[getCycle()%2];

    id2208out_output = id2208in_input;
  }
  { // Node ID: 2210 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2210in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2210in_option0 = in_vars.id2209out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2210in_option1 = id2208out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2210x_1;

    switch((id2210in_sel.getValueAsLong())) {
      case 0l:
        id2210x_1 = id2210in_option0;
        break;
      case 1l:
        id2210x_1 = id2210in_option1;
        break;
      default:
        id2210x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2210out_result[(getCycle()+1)%2] = (id2210x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2211out_output;

  { // Node ID: 2211 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2211in_input = id2210out_result[getCycle()%2];

    id2211out_output = id2211in_input;
  }
  { // Node ID: 2213 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2213in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2213in_option0 = in_vars.id2212out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2213in_option1 = id2211out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2213x_1;

    switch((id2213in_sel.getValueAsLong())) {
      case 0l:
        id2213x_1 = id2213in_option0;
        break;
      case 1l:
        id2213x_1 = id2213in_option1;
        break;
      default:
        id2213x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2213out_result[(getCycle()+1)%2] = (id2213x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2214out_output;

  { // Node ID: 2214 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2214in_input = id2213out_result[getCycle()%2];

    id2214out_output = id2214in_input;
  }
  { // Node ID: 2216 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2216in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2216in_option0 = in_vars.id2215out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2216in_option1 = id2214out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2216x_1;

    switch((id2216in_sel.getValueAsLong())) {
      case 0l:
        id2216x_1 = id2216in_option0;
        break;
      case 1l:
        id2216x_1 = id2216in_option1;
        break;
      default:
        id2216x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2216out_result[(getCycle()+1)%2] = (id2216x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2217out_output;

  { // Node ID: 2217 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2217in_input = id2216out_result[getCycle()%2];

    id2217out_output = id2217in_input;
  }
  { // Node ID: 2219 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2219in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2219in_option0 = in_vars.id2218out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2219in_option1 = id2217out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2219x_1;

    switch((id2219in_sel.getValueAsLong())) {
      case 0l:
        id2219x_1 = id2219in_option0;
        break;
      case 1l:
        id2219x_1 = id2219in_option1;
        break;
      default:
        id2219x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2219out_result[(getCycle()+1)%2] = (id2219x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2220out_output;

  { // Node ID: 2220 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2220in_input = id2219out_result[getCycle()%2];

    id2220out_output = id2220in_input;
  }
  { // Node ID: 2222 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2222in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2222in_option0 = in_vars.id2221out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2222in_option1 = id2220out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2222x_1;

    switch((id2222in_sel.getValueAsLong())) {
      case 0l:
        id2222x_1 = id2222in_option0;
        break;
      case 1l:
        id2222x_1 = id2222in_option1;
        break;
      default:
        id2222x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2222out_result[(getCycle()+1)%2] = (id2222x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2223out_output;

  { // Node ID: 2223 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2223in_input = id2222out_result[getCycle()%2];

    id2223out_output = id2223in_input;
  }
  { // Node ID: 2225 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2225in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2225in_option0 = in_vars.id2224out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2225in_option1 = id2223out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2225x_1;

    switch((id2225in_sel.getValueAsLong())) {
      case 0l:
        id2225x_1 = id2225in_option0;
        break;
      case 1l:
        id2225x_1 = id2225in_option1;
        break;
      default:
        id2225x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2225out_result[(getCycle()+1)%2] = (id2225x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2226out_output;

  { // Node ID: 2226 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2226in_input = id2225out_result[getCycle()%2];

    id2226out_output = id2226in_input;
  }
  { // Node ID: 2228 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2228in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2228in_option0 = in_vars.id2227out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2228in_option1 = id2226out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2228x_1;

    switch((id2228in_sel.getValueAsLong())) {
      case 0l:
        id2228x_1 = id2228in_option0;
        break;
      case 1l:
        id2228x_1 = id2228in_option1;
        break;
      default:
        id2228x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2228out_result[(getCycle()+1)%2] = (id2228x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2229out_output;

  { // Node ID: 2229 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2229in_input = id2228out_result[getCycle()%2];

    id2229out_output = id2229in_input;
  }
  { // Node ID: 2231 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2231in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2231in_option0 = in_vars.id2230out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2231in_option1 = id2229out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2231x_1;

    switch((id2231in_sel.getValueAsLong())) {
      case 0l:
        id2231x_1 = id2231in_option0;
        break;
      case 1l:
        id2231x_1 = id2231in_option1;
        break;
      default:
        id2231x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2231out_result[(getCycle()+1)%2] = (id2231x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2232out_output;

  { // Node ID: 2232 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2232in_input = id2231out_result[getCycle()%2];

    id2232out_output = id2232in_input;
  }
  { // Node ID: 2234 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2234in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2234in_option0 = in_vars.id2233out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2234in_option1 = id2232out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2234x_1;

    switch((id2234in_sel.getValueAsLong())) {
      case 0l:
        id2234x_1 = id2234in_option0;
        break;
      case 1l:
        id2234x_1 = id2234in_option1;
        break;
      default:
        id2234x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2234out_result[(getCycle()+1)%2] = (id2234x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2235out_output;

  { // Node ID: 2235 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2235in_input = id2234out_result[getCycle()%2];

    id2235out_output = id2235in_input;
  }
  { // Node ID: 2237 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2237in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2237in_option0 = in_vars.id2236out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2237in_option1 = id2235out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2237x_1;

    switch((id2237in_sel.getValueAsLong())) {
      case 0l:
        id2237x_1 = id2237in_option0;
        break;
      case 1l:
        id2237x_1 = id2237in_option1;
        break;
      default:
        id2237x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2237out_result[(getCycle()+1)%2] = (id2237x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2238out_output;

  { // Node ID: 2238 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2238in_input = id2237out_result[getCycle()%2];

    id2238out_output = id2238in_input;
  }
  { // Node ID: 2240 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2240in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2240in_option0 = in_vars.id2239out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2240in_option1 = id2238out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2240x_1;

    switch((id2240in_sel.getValueAsLong())) {
      case 0l:
        id2240x_1 = id2240in_option0;
        break;
      case 1l:
        id2240x_1 = id2240in_option1;
        break;
      default:
        id2240x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2240out_result[(getCycle()+1)%2] = (id2240x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2241out_output;

  { // Node ID: 2241 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2241in_input = id2240out_result[getCycle()%2];

    id2241out_output = id2241in_input;
  }
  { // Node ID: 2243 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2243in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2243in_option0 = in_vars.id2242out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2243in_option1 = id2241out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2243x_1;

    switch((id2243in_sel.getValueAsLong())) {
      case 0l:
        id2243x_1 = id2243in_option0;
        break;
      case 1l:
        id2243x_1 = id2243in_option1;
        break;
      default:
        id2243x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2243out_result[(getCycle()+1)%2] = (id2243x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2244out_output;

  { // Node ID: 2244 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2244in_input = id2243out_result[getCycle()%2];

    id2244out_output = id2244in_input;
  }
  { // Node ID: 2246 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2246in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2246in_option0 = in_vars.id2245out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2246in_option1 = id2244out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2246x_1;

    switch((id2246in_sel.getValueAsLong())) {
      case 0l:
        id2246x_1 = id2246in_option0;
        break;
      case 1l:
        id2246x_1 = id2246in_option1;
        break;
      default:
        id2246x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2246out_result[(getCycle()+1)%2] = (id2246x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2247out_output;

  { // Node ID: 2247 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2247in_input = id2246out_result[getCycle()%2];

    id2247out_output = id2247in_input;
  }
  { // Node ID: 2249 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2249in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2249in_option0 = in_vars.id2248out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2249in_option1 = id2247out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2249x_1;

    switch((id2249in_sel.getValueAsLong())) {
      case 0l:
        id2249x_1 = id2249in_option0;
        break;
      case 1l:
        id2249x_1 = id2249in_option1;
        break;
      default:
        id2249x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2249out_result[(getCycle()+1)%2] = (id2249x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2250out_output;

  { // Node ID: 2250 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2250in_input = id2249out_result[getCycle()%2];

    id2250out_output = id2250in_input;
  }
  { // Node ID: 2252 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2252in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2252in_option0 = in_vars.id2251out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2252in_option1 = id2250out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2252x_1;

    switch((id2252in_sel.getValueAsLong())) {
      case 0l:
        id2252x_1 = id2252in_option0;
        break;
      case 1l:
        id2252x_1 = id2252in_option1;
        break;
      default:
        id2252x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2252out_result[(getCycle()+1)%2] = (id2252x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2253out_output;

  { // Node ID: 2253 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2253in_input = id2252out_result[getCycle()%2];

    id2253out_output = id2253in_input;
  }
  { // Node ID: 2255 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2255in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2255in_option0 = in_vars.id2254out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2255in_option1 = id2253out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2255x_1;

    switch((id2255in_sel.getValueAsLong())) {
      case 0l:
        id2255x_1 = id2255in_option0;
        break;
      case 1l:
        id2255x_1 = id2255in_option1;
        break;
      default:
        id2255x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2255out_result[(getCycle()+1)%2] = (id2255x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2256out_output;

  { // Node ID: 2256 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2256in_input = id2255out_result[getCycle()%2];

    id2256out_output = id2256in_input;
  }
  { // Node ID: 2258 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2258in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2258in_option0 = in_vars.id2257out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2258in_option1 = id2256out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2258x_1;

    switch((id2258in_sel.getValueAsLong())) {
      case 0l:
        id2258x_1 = id2258in_option0;
        break;
      case 1l:
        id2258x_1 = id2258in_option1;
        break;
      default:
        id2258x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2258out_result[(getCycle()+1)%2] = (id2258x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2259out_output;

  { // Node ID: 2259 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2259in_input = id2258out_result[getCycle()%2];

    id2259out_output = id2259in_input;
  }
  { // Node ID: 2261 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2261in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2261in_option0 = in_vars.id2260out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2261in_option1 = id2259out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2261x_1;

    switch((id2261in_sel.getValueAsLong())) {
      case 0l:
        id2261x_1 = id2261in_option0;
        break;
      case 1l:
        id2261x_1 = id2261in_option1;
        break;
      default:
        id2261x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2261out_result[(getCycle()+1)%2] = (id2261x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2262out_output;

  { // Node ID: 2262 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2262in_input = id2261out_result[getCycle()%2];

    id2262out_output = id2262in_input;
  }
  { // Node ID: 2264 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2264in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2264in_option0 = in_vars.id2263out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2264in_option1 = id2262out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2264x_1;

    switch((id2264in_sel.getValueAsLong())) {
      case 0l:
        id2264x_1 = id2264in_option0;
        break;
      case 1l:
        id2264x_1 = id2264in_option1;
        break;
      default:
        id2264x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2264out_result[(getCycle()+1)%2] = (id2264x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2265out_output;

  { // Node ID: 2265 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2265in_input = id2264out_result[getCycle()%2];

    id2265out_output = id2265in_input;
  }
  { // Node ID: 2267 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2267in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2267in_option0 = in_vars.id2266out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2267in_option1 = id2265out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2267x_1;

    switch((id2267in_sel.getValueAsLong())) {
      case 0l:
        id2267x_1 = id2267in_option0;
        break;
      case 1l:
        id2267x_1 = id2267in_option1;
        break;
      default:
        id2267x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2267out_result[(getCycle()+1)%2] = (id2267x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2268out_output;

  { // Node ID: 2268 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2268in_input = id2267out_result[getCycle()%2];

    id2268out_output = id2268in_input;
  }
  { // Node ID: 2270 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2270in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2270in_option0 = in_vars.id2269out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2270in_option1 = id2268out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2270x_1;

    switch((id2270in_sel.getValueAsLong())) {
      case 0l:
        id2270x_1 = id2270in_option0;
        break;
      case 1l:
        id2270x_1 = id2270in_option1;
        break;
      default:
        id2270x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2270out_result[(getCycle()+1)%2] = (id2270x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2271out_output;

  { // Node ID: 2271 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2271in_input = id2270out_result[getCycle()%2];

    id2271out_output = id2271in_input;
  }
  { // Node ID: 2273 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2273in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2273in_option0 = in_vars.id2272out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2273in_option1 = id2271out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2273x_1;

    switch((id2273in_sel.getValueAsLong())) {
      case 0l:
        id2273x_1 = id2273in_option0;
        break;
      case 1l:
        id2273x_1 = id2273in_option1;
        break;
      default:
        id2273x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2273out_result[(getCycle()+1)%2] = (id2273x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2274out_output;

  { // Node ID: 2274 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2274in_input = id2273out_result[getCycle()%2];

    id2274out_output = id2274in_input;
  }
  { // Node ID: 2276 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2276in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2276in_option0 = in_vars.id2275out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2276in_option1 = id2274out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2276x_1;

    switch((id2276in_sel.getValueAsLong())) {
      case 0l:
        id2276x_1 = id2276in_option0;
        break;
      case 1l:
        id2276x_1 = id2276in_option1;
        break;
      default:
        id2276x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2276out_result[(getCycle()+1)%2] = (id2276x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2277out_output;

  { // Node ID: 2277 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2277in_input = id2276out_result[getCycle()%2];

    id2277out_output = id2277in_input;
  }
  { // Node ID: 2279 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2279in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2279in_option0 = in_vars.id2278out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2279in_option1 = id2277out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2279x_1;

    switch((id2279in_sel.getValueAsLong())) {
      case 0l:
        id2279x_1 = id2279in_option0;
        break;
      case 1l:
        id2279x_1 = id2279in_option1;
        break;
      default:
        id2279x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2279out_result[(getCycle()+1)%2] = (id2279x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2280out_output;

  { // Node ID: 2280 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2280in_input = id2279out_result[getCycle()%2];

    id2280out_output = id2280in_input;
  }
  { // Node ID: 2282 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2282in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2282in_option0 = in_vars.id2281out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2282in_option1 = id2280out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2282x_1;

    switch((id2282in_sel.getValueAsLong())) {
      case 0l:
        id2282x_1 = id2282in_option0;
        break;
      case 1l:
        id2282x_1 = id2282in_option1;
        break;
      default:
        id2282x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2282out_result[(getCycle()+1)%2] = (id2282x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2283out_output;

  { // Node ID: 2283 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2283in_input = id2282out_result[getCycle()%2];

    id2283out_output = id2283in_input;
  }
  { // Node ID: 2285 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2285in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2285in_option0 = in_vars.id2284out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2285in_option1 = id2283out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2285x_1;

    switch((id2285in_sel.getValueAsLong())) {
      case 0l:
        id2285x_1 = id2285in_option0;
        break;
      case 1l:
        id2285x_1 = id2285in_option1;
        break;
      default:
        id2285x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2285out_result[(getCycle()+1)%2] = (id2285x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2286out_output;

  { // Node ID: 2286 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2286in_input = id2285out_result[getCycle()%2];

    id2286out_output = id2286in_input;
  }
  { // Node ID: 2288 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2288in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2288in_option0 = in_vars.id2287out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2288in_option1 = id2286out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2288x_1;

    switch((id2288in_sel.getValueAsLong())) {
      case 0l:
        id2288x_1 = id2288in_option0;
        break;
      case 1l:
        id2288x_1 = id2288in_option1;
        break;
      default:
        id2288x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2288out_result[(getCycle()+1)%2] = (id2288x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2289out_output;

  { // Node ID: 2289 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2289in_input = id2288out_result[getCycle()%2];

    id2289out_output = id2289in_input;
  }
  { // Node ID: 2291 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2291in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2291in_option0 = in_vars.id2290out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2291in_option1 = id2289out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2291x_1;

    switch((id2291in_sel.getValueAsLong())) {
      case 0l:
        id2291x_1 = id2291in_option0;
        break;
      case 1l:
        id2291x_1 = id2291in_option1;
        break;
      default:
        id2291x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2291out_result[(getCycle()+1)%2] = (id2291x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2292out_output;

  { // Node ID: 2292 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2292in_input = id2291out_result[getCycle()%2];

    id2292out_output = id2292in_input;
  }
  { // Node ID: 2294 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2294in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2294in_option0 = in_vars.id2293out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2294in_option1 = id2292out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2294x_1;

    switch((id2294in_sel.getValueAsLong())) {
      case 0l:
        id2294x_1 = id2294in_option0;
        break;
      case 1l:
        id2294x_1 = id2294in_option1;
        break;
      default:
        id2294x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2294out_result[(getCycle()+1)%2] = (id2294x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2295out_output;

  { // Node ID: 2295 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2295in_input = id2294out_result[getCycle()%2];

    id2295out_output = id2295in_input;
  }
  { // Node ID: 2297 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2297in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2297in_option0 = in_vars.id2296out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2297in_option1 = id2295out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2297x_1;

    switch((id2297in_sel.getValueAsLong())) {
      case 0l:
        id2297x_1 = id2297in_option0;
        break;
      case 1l:
        id2297x_1 = id2297in_option1;
        break;
      default:
        id2297x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2297out_result[(getCycle()+1)%2] = (id2297x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2298out_output;

  { // Node ID: 2298 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2298in_input = id2297out_result[getCycle()%2];

    id2298out_output = id2298in_input;
  }
  { // Node ID: 2300 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2300in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2300in_option0 = in_vars.id2299out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2300in_option1 = id2298out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2300x_1;

    switch((id2300in_sel.getValueAsLong())) {
      case 0l:
        id2300x_1 = id2300in_option0;
        break;
      case 1l:
        id2300x_1 = id2300in_option1;
        break;
      default:
        id2300x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2300out_result[(getCycle()+1)%2] = (id2300x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2301out_output;

  { // Node ID: 2301 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2301in_input = id2300out_result[getCycle()%2];

    id2301out_output = id2301in_input;
  }
  { // Node ID: 2303 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2303in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2303in_option0 = in_vars.id2302out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2303in_option1 = id2301out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2303x_1;

    switch((id2303in_sel.getValueAsLong())) {
      case 0l:
        id2303x_1 = id2303in_option0;
        break;
      case 1l:
        id2303x_1 = id2303in_option1;
        break;
      default:
        id2303x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2303out_result[(getCycle()+1)%2] = (id2303x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2304out_output;

  { // Node ID: 2304 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2304in_input = id2303out_result[getCycle()%2];

    id2304out_output = id2304in_input;
  }
  { // Node ID: 2306 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2306in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2306in_option0 = in_vars.id2305out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2306in_option1 = id2304out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2306x_1;

    switch((id2306in_sel.getValueAsLong())) {
      case 0l:
        id2306x_1 = id2306in_option0;
        break;
      case 1l:
        id2306x_1 = id2306in_option1;
        break;
      default:
        id2306x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2306out_result[(getCycle()+1)%2] = (id2306x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2307out_output;

  { // Node ID: 2307 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2307in_input = id2306out_result[getCycle()%2];

    id2307out_output = id2307in_input;
  }
  { // Node ID: 2309 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2309in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2309in_option0 = in_vars.id2308out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2309in_option1 = id2307out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2309x_1;

    switch((id2309in_sel.getValueAsLong())) {
      case 0l:
        id2309x_1 = id2309in_option0;
        break;
      case 1l:
        id2309x_1 = id2309in_option1;
        break;
      default:
        id2309x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2309out_result[(getCycle()+1)%2] = (id2309x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2310out_output;

  { // Node ID: 2310 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2310in_input = id2309out_result[getCycle()%2];

    id2310out_output = id2310in_input;
  }
  { // Node ID: 2312 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2312in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2312in_option0 = in_vars.id2311out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2312in_option1 = id2310out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2312x_1;

    switch((id2312in_sel.getValueAsLong())) {
      case 0l:
        id2312x_1 = id2312in_option0;
        break;
      case 1l:
        id2312x_1 = id2312in_option1;
        break;
      default:
        id2312x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2312out_result[(getCycle()+1)%2] = (id2312x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2313out_output;

  { // Node ID: 2313 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2313in_input = id2312out_result[getCycle()%2];

    id2313out_output = id2313in_input;
  }
  { // Node ID: 2315 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2315in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2315in_option0 = in_vars.id2314out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2315in_option1 = id2313out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2315x_1;

    switch((id2315in_sel.getValueAsLong())) {
      case 0l:
        id2315x_1 = id2315in_option0;
        break;
      case 1l:
        id2315x_1 = id2315in_option1;
        break;
      default:
        id2315x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2315out_result[(getCycle()+1)%2] = (id2315x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2316out_output;

  { // Node ID: 2316 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2316in_input = id2315out_result[getCycle()%2];

    id2316out_output = id2316in_input;
  }
  { // Node ID: 2318 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2318in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2318in_option0 = in_vars.id2317out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2318in_option1 = id2316out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2318x_1;

    switch((id2318in_sel.getValueAsLong())) {
      case 0l:
        id2318x_1 = id2318in_option0;
        break;
      case 1l:
        id2318x_1 = id2318in_option1;
        break;
      default:
        id2318x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2318out_result[(getCycle()+1)%2] = (id2318x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2319out_output;

  { // Node ID: 2319 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2319in_input = id2318out_result[getCycle()%2];

    id2319out_output = id2319in_input;
  }
  { // Node ID: 2321 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2321in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2321in_option0 = in_vars.id2320out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2321in_option1 = id2319out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2321x_1;

    switch((id2321in_sel.getValueAsLong())) {
      case 0l:
        id2321x_1 = id2321in_option0;
        break;
      case 1l:
        id2321x_1 = id2321in_option1;
        break;
      default:
        id2321x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2321out_result[(getCycle()+1)%2] = (id2321x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2322out_output;

  { // Node ID: 2322 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2322in_input = id2321out_result[getCycle()%2];

    id2322out_output = id2322in_input;
  }
  { // Node ID: 2324 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2324in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2324in_option0 = in_vars.id2323out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2324in_option1 = id2322out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2324x_1;

    switch((id2324in_sel.getValueAsLong())) {
      case 0l:
        id2324x_1 = id2324in_option0;
        break;
      case 1l:
        id2324x_1 = id2324in_option1;
        break;
      default:
        id2324x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2324out_result[(getCycle()+1)%2] = (id2324x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2325out_output;

  { // Node ID: 2325 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2325in_input = id2324out_result[getCycle()%2];

    id2325out_output = id2325in_input;
  }
  { // Node ID: 2327 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2327in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2327in_option0 = in_vars.id2326out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2327in_option1 = id2325out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2327x_1;

    switch((id2327in_sel.getValueAsLong())) {
      case 0l:
        id2327x_1 = id2327in_option0;
        break;
      case 1l:
        id2327x_1 = id2327in_option1;
        break;
      default:
        id2327x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2327out_result[(getCycle()+1)%2] = (id2327x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2328out_output;

  { // Node ID: 2328 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2328in_input = id2327out_result[getCycle()%2];

    id2328out_output = id2328in_input;
  }
  { // Node ID: 2330 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2330in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2330in_option0 = in_vars.id2329out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2330in_option1 = id2328out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2330x_1;

    switch((id2330in_sel.getValueAsLong())) {
      case 0l:
        id2330x_1 = id2330in_option0;
        break;
      case 1l:
        id2330x_1 = id2330in_option1;
        break;
      default:
        id2330x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2330out_result[(getCycle()+1)%2] = (id2330x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2331out_output;

  { // Node ID: 2331 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2331in_input = id2330out_result[getCycle()%2];

    id2331out_output = id2331in_input;
  }
  { // Node ID: 2333 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2333in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2333in_option0 = in_vars.id2332out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2333in_option1 = id2331out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2333x_1;

    switch((id2333in_sel.getValueAsLong())) {
      case 0l:
        id2333x_1 = id2333in_option0;
        break;
      case 1l:
        id2333x_1 = id2333in_option1;
        break;
      default:
        id2333x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2333out_result[(getCycle()+1)%2] = (id2333x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2334out_output;

  { // Node ID: 2334 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2334in_input = id2333out_result[getCycle()%2];

    id2334out_output = id2334in_input;
  }
  { // Node ID: 2336 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2336in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2336in_option0 = in_vars.id2335out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2336in_option1 = id2334out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2336x_1;

    switch((id2336in_sel.getValueAsLong())) {
      case 0l:
        id2336x_1 = id2336in_option0;
        break;
      case 1l:
        id2336x_1 = id2336in_option1;
        break;
      default:
        id2336x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2336out_result[(getCycle()+1)%2] = (id2336x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2337out_output;

  { // Node ID: 2337 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2337in_input = id2336out_result[getCycle()%2];

    id2337out_output = id2337in_input;
  }
  { // Node ID: 2339 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2339in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2339in_option0 = in_vars.id2338out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2339in_option1 = id2337out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2339x_1;

    switch((id2339in_sel.getValueAsLong())) {
      case 0l:
        id2339x_1 = id2339in_option0;
        break;
      case 1l:
        id2339x_1 = id2339in_option1;
        break;
      default:
        id2339x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2339out_result[(getCycle()+1)%2] = (id2339x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2340out_output;

  { // Node ID: 2340 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2340in_input = id2339out_result[getCycle()%2];

    id2340out_output = id2340in_input;
  }
  { // Node ID: 2342 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2342in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2342in_option0 = in_vars.id2341out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2342in_option1 = id2340out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2342x_1;

    switch((id2342in_sel.getValueAsLong())) {
      case 0l:
        id2342x_1 = id2342in_option0;
        break;
      case 1l:
        id2342x_1 = id2342in_option1;
        break;
      default:
        id2342x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2342out_result[(getCycle()+1)%2] = (id2342x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2343out_output;

  { // Node ID: 2343 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2343in_input = id2342out_result[getCycle()%2];

    id2343out_output = id2343in_input;
  }
  { // Node ID: 2345 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2345in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2345in_option0 = in_vars.id2344out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2345in_option1 = id2343out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2345x_1;

    switch((id2345in_sel.getValueAsLong())) {
      case 0l:
        id2345x_1 = id2345in_option0;
        break;
      case 1l:
        id2345x_1 = id2345in_option1;
        break;
      default:
        id2345x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2345out_result[(getCycle()+1)%2] = (id2345x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2346out_output;

  { // Node ID: 2346 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2346in_input = id2345out_result[getCycle()%2];

    id2346out_output = id2346in_input;
  }
  { // Node ID: 2348 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2348in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2348in_option0 = in_vars.id2347out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2348in_option1 = id2346out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2348x_1;

    switch((id2348in_sel.getValueAsLong())) {
      case 0l:
        id2348x_1 = id2348in_option0;
        break;
      case 1l:
        id2348x_1 = id2348in_option1;
        break;
      default:
        id2348x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2348out_result[(getCycle()+1)%2] = (id2348x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2349out_output;

  { // Node ID: 2349 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2349in_input = id2348out_result[getCycle()%2];

    id2349out_output = id2349in_input;
  }
  { // Node ID: 2351 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2351in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2351in_option0 = in_vars.id2350out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2351in_option1 = id2349out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2351x_1;

    switch((id2351in_sel.getValueAsLong())) {
      case 0l:
        id2351x_1 = id2351in_option0;
        break;
      case 1l:
        id2351x_1 = id2351in_option1;
        break;
      default:
        id2351x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2351out_result[(getCycle()+1)%2] = (id2351x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2352out_output;

  { // Node ID: 2352 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2352in_input = id2351out_result[getCycle()%2];

    id2352out_output = id2352in_input;
  }
  { // Node ID: 2354 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2354in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2354in_option0 = in_vars.id2353out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2354in_option1 = id2352out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2354x_1;

    switch((id2354in_sel.getValueAsLong())) {
      case 0l:
        id2354x_1 = id2354in_option0;
        break;
      case 1l:
        id2354x_1 = id2354in_option1;
        break;
      default:
        id2354x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2354out_result[(getCycle()+1)%2] = (id2354x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2355out_output;

  { // Node ID: 2355 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2355in_input = id2354out_result[getCycle()%2];

    id2355out_output = id2355in_input;
  }
  { // Node ID: 2357 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2357in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2357in_option0 = in_vars.id2356out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2357in_option1 = id2355out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2357x_1;

    switch((id2357in_sel.getValueAsLong())) {
      case 0l:
        id2357x_1 = id2357in_option0;
        break;
      case 1l:
        id2357x_1 = id2357in_option1;
        break;
      default:
        id2357x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2357out_result[(getCycle()+1)%2] = (id2357x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2358out_output;

  { // Node ID: 2358 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2358in_input = id2357out_result[getCycle()%2];

    id2358out_output = id2358in_input;
  }
  { // Node ID: 2360 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2360in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2360in_option0 = in_vars.id2359out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2360in_option1 = id2358out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2360x_1;

    switch((id2360in_sel.getValueAsLong())) {
      case 0l:
        id2360x_1 = id2360in_option0;
        break;
      case 1l:
        id2360x_1 = id2360in_option1;
        break;
      default:
        id2360x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2360out_result[(getCycle()+1)%2] = (id2360x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2361out_output;

  { // Node ID: 2361 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2361in_input = id2360out_result[getCycle()%2];

    id2361out_output = id2361in_input;
  }
  { // Node ID: 2363 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2363in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2363in_option0 = in_vars.id2362out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2363in_option1 = id2361out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2363x_1;

    switch((id2363in_sel.getValueAsLong())) {
      case 0l:
        id2363x_1 = id2363in_option0;
        break;
      case 1l:
        id2363x_1 = id2363in_option1;
        break;
      default:
        id2363x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2363out_result[(getCycle()+1)%2] = (id2363x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2364out_output;

  { // Node ID: 2364 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2364in_input = id2363out_result[getCycle()%2];

    id2364out_output = id2364in_input;
  }
  { // Node ID: 2366 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2366in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2366in_option0 = in_vars.id2365out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2366in_option1 = id2364out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2366x_1;

    switch((id2366in_sel.getValueAsLong())) {
      case 0l:
        id2366x_1 = id2366in_option0;
        break;
      case 1l:
        id2366x_1 = id2366in_option1;
        break;
      default:
        id2366x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2366out_result[(getCycle()+1)%2] = (id2366x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2367out_output;

  { // Node ID: 2367 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2367in_input = id2366out_result[getCycle()%2];

    id2367out_output = id2367in_input;
  }
  { // Node ID: 2369 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2369in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2369in_option0 = in_vars.id2368out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2369in_option1 = id2367out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2369x_1;

    switch((id2369in_sel.getValueAsLong())) {
      case 0l:
        id2369x_1 = id2369in_option0;
        break;
      case 1l:
        id2369x_1 = id2369in_option1;
        break;
      default:
        id2369x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2369out_result[(getCycle()+1)%2] = (id2369x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2370out_output;

  { // Node ID: 2370 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2370in_input = id2369out_result[getCycle()%2];

    id2370out_output = id2370in_input;
  }
  { // Node ID: 2372 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2372in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2372in_option0 = in_vars.id2371out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2372in_option1 = id2370out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2372x_1;

    switch((id2372in_sel.getValueAsLong())) {
      case 0l:
        id2372x_1 = id2372in_option0;
        break;
      case 1l:
        id2372x_1 = id2372in_option1;
        break;
      default:
        id2372x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2372out_result[(getCycle()+1)%2] = (id2372x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2373out_output;

  { // Node ID: 2373 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2373in_input = id2372out_result[getCycle()%2];

    id2373out_output = id2373in_input;
  }
  { // Node ID: 2375 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2375in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2375in_option0 = in_vars.id2374out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2375in_option1 = id2373out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2375x_1;

    switch((id2375in_sel.getValueAsLong())) {
      case 0l:
        id2375x_1 = id2375in_option0;
        break;
      case 1l:
        id2375x_1 = id2375in_option1;
        break;
      default:
        id2375x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2375out_result[(getCycle()+1)%2] = (id2375x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2376out_output;

  { // Node ID: 2376 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2376in_input = id2375out_result[getCycle()%2];

    id2376out_output = id2376in_input;
  }
  { // Node ID: 2378 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2378in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2378in_option0 = in_vars.id2377out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2378in_option1 = id2376out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2378x_1;

    switch((id2378in_sel.getValueAsLong())) {
      case 0l:
        id2378x_1 = id2378in_option0;
        break;
      case 1l:
        id2378x_1 = id2378in_option1;
        break;
      default:
        id2378x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2378out_result[(getCycle()+1)%2] = (id2378x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2379out_output;

  { // Node ID: 2379 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2379in_input = id2378out_result[getCycle()%2];

    id2379out_output = id2379in_input;
  }
  { // Node ID: 2381 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2381in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2381in_option0 = in_vars.id2380out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2381in_option1 = id2379out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2381x_1;

    switch((id2381in_sel.getValueAsLong())) {
      case 0l:
        id2381x_1 = id2381in_option0;
        break;
      case 1l:
        id2381x_1 = id2381in_option1;
        break;
      default:
        id2381x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2381out_result[(getCycle()+1)%2] = (id2381x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2382out_output;

  { // Node ID: 2382 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2382in_input = id2381out_result[getCycle()%2];

    id2382out_output = id2382in_input;
  }
  { // Node ID: 2384 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2384in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2384in_option0 = in_vars.id2383out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2384in_option1 = id2382out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2384x_1;

    switch((id2384in_sel.getValueAsLong())) {
      case 0l:
        id2384x_1 = id2384in_option0;
        break;
      case 1l:
        id2384x_1 = id2384in_option1;
        break;
      default:
        id2384x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2384out_result[(getCycle()+1)%2] = (id2384x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2385out_output;

  { // Node ID: 2385 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2385in_input = id2384out_result[getCycle()%2];

    id2385out_output = id2385in_input;
  }
  { // Node ID: 2387 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2387in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2387in_option0 = in_vars.id2386out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2387in_option1 = id2385out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2387x_1;

    switch((id2387in_sel.getValueAsLong())) {
      case 0l:
        id2387x_1 = id2387in_option0;
        break;
      case 1l:
        id2387x_1 = id2387in_option1;
        break;
      default:
        id2387x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2387out_result[(getCycle()+1)%2] = (id2387x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2388out_output;

  { // Node ID: 2388 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2388in_input = id2387out_result[getCycle()%2];

    id2388out_output = id2388in_input;
  }
  { // Node ID: 2390 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2390in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2390in_option0 = in_vars.id2389out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2390in_option1 = id2388out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2390x_1;

    switch((id2390in_sel.getValueAsLong())) {
      case 0l:
        id2390x_1 = id2390in_option0;
        break;
      case 1l:
        id2390x_1 = id2390in_option1;
        break;
      default:
        id2390x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2390out_result[(getCycle()+1)%2] = (id2390x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2391out_output;

  { // Node ID: 2391 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2391in_input = id2390out_result[getCycle()%2];

    id2391out_output = id2391in_input;
  }
  { // Node ID: 2393 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2393in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2393in_option0 = in_vars.id2392out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2393in_option1 = id2391out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2393x_1;

    switch((id2393in_sel.getValueAsLong())) {
      case 0l:
        id2393x_1 = id2393in_option0;
        break;
      case 1l:
        id2393x_1 = id2393in_option1;
        break;
      default:
        id2393x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2393out_result[(getCycle()+1)%2] = (id2393x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2394out_output;

  { // Node ID: 2394 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2394in_input = id2393out_result[getCycle()%2];

    id2394out_output = id2394in_input;
  }
  { // Node ID: 2396 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2396in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2396in_option0 = in_vars.id2395out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2396in_option1 = id2394out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2396x_1;

    switch((id2396in_sel.getValueAsLong())) {
      case 0l:
        id2396x_1 = id2396in_option0;
        break;
      case 1l:
        id2396x_1 = id2396in_option1;
        break;
      default:
        id2396x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2396out_result[(getCycle()+1)%2] = (id2396x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2397out_output;

  { // Node ID: 2397 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2397in_input = id2396out_result[getCycle()%2];

    id2397out_output = id2397in_input;
  }
  { // Node ID: 2399 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2399in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2399in_option0 = in_vars.id2398out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2399in_option1 = id2397out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2399x_1;

    switch((id2399in_sel.getValueAsLong())) {
      case 0l:
        id2399x_1 = id2399in_option0;
        break;
      case 1l:
        id2399x_1 = id2399in_option1;
        break;
      default:
        id2399x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2399out_result[(getCycle()+1)%2] = (id2399x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2400out_output;

  { // Node ID: 2400 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2400in_input = id2399out_result[getCycle()%2];

    id2400out_output = id2400in_input;
  }
  { // Node ID: 2402 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2402in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2402in_option0 = in_vars.id2401out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2402in_option1 = id2400out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2402x_1;

    switch((id2402in_sel.getValueAsLong())) {
      case 0l:
        id2402x_1 = id2402in_option0;
        break;
      case 1l:
        id2402x_1 = id2402in_option1;
        break;
      default:
        id2402x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2402out_result[(getCycle()+1)%2] = (id2402x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2403out_output;

  { // Node ID: 2403 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2403in_input = id2402out_result[getCycle()%2];

    id2403out_output = id2403in_input;
  }
  { // Node ID: 2405 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2405in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2405in_option0 = in_vars.id2404out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2405in_option1 = id2403out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2405x_1;

    switch((id2405in_sel.getValueAsLong())) {
      case 0l:
        id2405x_1 = id2405in_option0;
        break;
      case 1l:
        id2405x_1 = id2405in_option1;
        break;
      default:
        id2405x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2405out_result[(getCycle()+1)%2] = (id2405x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2406out_output;

  { // Node ID: 2406 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2406in_input = id2405out_result[getCycle()%2];

    id2406out_output = id2406in_input;
  }
  { // Node ID: 2408 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2408in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2408in_option0 = in_vars.id2407out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2408in_option1 = id2406out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2408x_1;

    switch((id2408in_sel.getValueAsLong())) {
      case 0l:
        id2408x_1 = id2408in_option0;
        break;
      case 1l:
        id2408x_1 = id2408in_option1;
        break;
      default:
        id2408x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2408out_result[(getCycle()+1)%2] = (id2408x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2409out_output;

  { // Node ID: 2409 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2409in_input = id2408out_result[getCycle()%2];

    id2409out_output = id2409in_input;
  }
  { // Node ID: 2411 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2411in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2411in_option0 = in_vars.id2410out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2411in_option1 = id2409out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2411x_1;

    switch((id2411in_sel.getValueAsLong())) {
      case 0l:
        id2411x_1 = id2411in_option0;
        break;
      case 1l:
        id2411x_1 = id2411in_option1;
        break;
      default:
        id2411x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2411out_result[(getCycle()+1)%2] = (id2411x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2412out_output;

  { // Node ID: 2412 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2412in_input = id2411out_result[getCycle()%2];

    id2412out_output = id2412in_input;
  }
  { // Node ID: 2414 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2414in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2414in_option0 = in_vars.id2413out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2414in_option1 = id2412out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2414x_1;

    switch((id2414in_sel.getValueAsLong())) {
      case 0l:
        id2414x_1 = id2414in_option0;
        break;
      case 1l:
        id2414x_1 = id2414in_option1;
        break;
      default:
        id2414x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2414out_result[(getCycle()+1)%2] = (id2414x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2415out_output;

  { // Node ID: 2415 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2415in_input = id2414out_result[getCycle()%2];

    id2415out_output = id2415in_input;
  }
  { // Node ID: 2417 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2417in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2417in_option0 = in_vars.id2416out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2417in_option1 = id2415out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2417x_1;

    switch((id2417in_sel.getValueAsLong())) {
      case 0l:
        id2417x_1 = id2417in_option0;
        break;
      case 1l:
        id2417x_1 = id2417in_option1;
        break;
      default:
        id2417x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2417out_result[(getCycle()+1)%2] = (id2417x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2418out_output;

  { // Node ID: 2418 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2418in_input = id2417out_result[getCycle()%2];

    id2418out_output = id2418in_input;
  }
  { // Node ID: 2420 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2420in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2420in_option0 = in_vars.id2419out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2420in_option1 = id2418out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2420x_1;

    switch((id2420in_sel.getValueAsLong())) {
      case 0l:
        id2420x_1 = id2420in_option0;
        break;
      case 1l:
        id2420x_1 = id2420in_option1;
        break;
      default:
        id2420x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2420out_result[(getCycle()+1)%2] = (id2420x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2421out_output;

  { // Node ID: 2421 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2421in_input = id2420out_result[getCycle()%2];

    id2421out_output = id2421in_input;
  }
  { // Node ID: 2423 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2423in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2423in_option0 = in_vars.id2422out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2423in_option1 = id2421out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2423x_1;

    switch((id2423in_sel.getValueAsLong())) {
      case 0l:
        id2423x_1 = id2423in_option0;
        break;
      case 1l:
        id2423x_1 = id2423in_option1;
        break;
      default:
        id2423x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2423out_result[(getCycle()+1)%2] = (id2423x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2424out_output;

  { // Node ID: 2424 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2424in_input = id2423out_result[getCycle()%2];

    id2424out_output = id2424in_input;
  }
  { // Node ID: 2426 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2426in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2426in_option0 = in_vars.id2425out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2426in_option1 = id2424out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2426x_1;

    switch((id2426in_sel.getValueAsLong())) {
      case 0l:
        id2426x_1 = id2426in_option0;
        break;
      case 1l:
        id2426x_1 = id2426in_option1;
        break;
      default:
        id2426x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2426out_result[(getCycle()+1)%2] = (id2426x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2427out_output;

  { // Node ID: 2427 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2427in_input = id2426out_result[getCycle()%2];

    id2427out_output = id2427in_input;
  }
  { // Node ID: 2429 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2429in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2429in_option0 = in_vars.id2428out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2429in_option1 = id2427out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2429x_1;

    switch((id2429in_sel.getValueAsLong())) {
      case 0l:
        id2429x_1 = id2429in_option0;
        break;
      case 1l:
        id2429x_1 = id2429in_option1;
        break;
      default:
        id2429x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2429out_result[(getCycle()+1)%2] = (id2429x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2430out_output;

  { // Node ID: 2430 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2430in_input = id2429out_result[getCycle()%2];

    id2430out_output = id2430in_input;
  }
  { // Node ID: 2432 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2432in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2432in_option0 = in_vars.id2431out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2432in_option1 = id2430out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2432x_1;

    switch((id2432in_sel.getValueAsLong())) {
      case 0l:
        id2432x_1 = id2432in_option0;
        break;
      case 1l:
        id2432x_1 = id2432in_option1;
        break;
      default:
        id2432x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2432out_result[(getCycle()+1)%2] = (id2432x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2433out_output;

  { // Node ID: 2433 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2433in_input = id2432out_result[getCycle()%2];

    id2433out_output = id2433in_input;
  }
  { // Node ID: 2435 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2435in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2435in_option0 = in_vars.id2434out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2435in_option1 = id2433out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2435x_1;

    switch((id2435in_sel.getValueAsLong())) {
      case 0l:
        id2435x_1 = id2435in_option0;
        break;
      case 1l:
        id2435x_1 = id2435in_option1;
        break;
      default:
        id2435x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2435out_result[(getCycle()+1)%2] = (id2435x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2436out_output;

  { // Node ID: 2436 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2436in_input = id2435out_result[getCycle()%2];

    id2436out_output = id2436in_input;
  }
  { // Node ID: 2438 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2438in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2438in_option0 = in_vars.id2437out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2438in_option1 = id2436out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2438x_1;

    switch((id2438in_sel.getValueAsLong())) {
      case 0l:
        id2438x_1 = id2438in_option0;
        break;
      case 1l:
        id2438x_1 = id2438in_option1;
        break;
      default:
        id2438x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2438out_result[(getCycle()+1)%2] = (id2438x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2439out_output;

  { // Node ID: 2439 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2439in_input = id2438out_result[getCycle()%2];

    id2439out_output = id2439in_input;
  }
  { // Node ID: 2441 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2441in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2441in_option0 = in_vars.id2440out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2441in_option1 = id2439out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2441x_1;

    switch((id2441in_sel.getValueAsLong())) {
      case 0l:
        id2441x_1 = id2441in_option0;
        break;
      case 1l:
        id2441x_1 = id2441in_option1;
        break;
      default:
        id2441x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2441out_result[(getCycle()+1)%2] = (id2441x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2442out_output;

  { // Node ID: 2442 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2442in_input = id2441out_result[getCycle()%2];

    id2442out_output = id2442in_input;
  }
  { // Node ID: 2444 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2444in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2444in_option0 = in_vars.id2443out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2444in_option1 = id2442out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2444x_1;

    switch((id2444in_sel.getValueAsLong())) {
      case 0l:
        id2444x_1 = id2444in_option0;
        break;
      case 1l:
        id2444x_1 = id2444in_option1;
        break;
      default:
        id2444x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2444out_result[(getCycle()+1)%2] = (id2444x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2445out_output;

  { // Node ID: 2445 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2445in_input = id2444out_result[getCycle()%2];

    id2445out_output = id2445in_input;
  }
  { // Node ID: 2447 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2447in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2447in_option0 = in_vars.id2446out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2447in_option1 = id2445out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2447x_1;

    switch((id2447in_sel.getValueAsLong())) {
      case 0l:
        id2447x_1 = id2447in_option0;
        break;
      case 1l:
        id2447x_1 = id2447in_option1;
        break;
      default:
        id2447x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2447out_result[(getCycle()+1)%2] = (id2447x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2448out_output;

  { // Node ID: 2448 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2448in_input = id2447out_result[getCycle()%2];

    id2448out_output = id2448in_input;
  }
  { // Node ID: 2450 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2450in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2450in_option0 = in_vars.id2449out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2450in_option1 = id2448out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2450x_1;

    switch((id2450in_sel.getValueAsLong())) {
      case 0l:
        id2450x_1 = id2450in_option0;
        break;
      case 1l:
        id2450x_1 = id2450in_option1;
        break;
      default:
        id2450x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2450out_result[(getCycle()+1)%2] = (id2450x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2451out_output;

  { // Node ID: 2451 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2451in_input = id2450out_result[getCycle()%2];

    id2451out_output = id2451in_input;
  }
  { // Node ID: 2453 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2453in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2453in_option0 = in_vars.id2452out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2453in_option1 = id2451out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2453x_1;

    switch((id2453in_sel.getValueAsLong())) {
      case 0l:
        id2453x_1 = id2453in_option0;
        break;
      case 1l:
        id2453x_1 = id2453in_option1;
        break;
      default:
        id2453x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2453out_result[(getCycle()+1)%2] = (id2453x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2454out_output;

  { // Node ID: 2454 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2454in_input = id2453out_result[getCycle()%2];

    id2454out_output = id2454in_input;
  }
  { // Node ID: 2456 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2456in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2456in_option0 = in_vars.id2455out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2456in_option1 = id2454out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2456x_1;

    switch((id2456in_sel.getValueAsLong())) {
      case 0l:
        id2456x_1 = id2456in_option0;
        break;
      case 1l:
        id2456x_1 = id2456in_option1;
        break;
      default:
        id2456x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2456out_result[(getCycle()+1)%2] = (id2456x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2457out_output;

  { // Node ID: 2457 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2457in_input = id2456out_result[getCycle()%2];

    id2457out_output = id2457in_input;
  }
  { // Node ID: 2459 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2459in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2459in_option0 = in_vars.id2458out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2459in_option1 = id2457out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2459x_1;

    switch((id2459in_sel.getValueAsLong())) {
      case 0l:
        id2459x_1 = id2459in_option0;
        break;
      case 1l:
        id2459x_1 = id2459in_option1;
        break;
      default:
        id2459x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2459out_result[(getCycle()+1)%2] = (id2459x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2460out_output;

  { // Node ID: 2460 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2460in_input = id2459out_result[getCycle()%2];

    id2460out_output = id2460in_input;
  }
  { // Node ID: 2462 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2462in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2462in_option0 = in_vars.id2461out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2462in_option1 = id2460out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2462x_1;

    switch((id2462in_sel.getValueAsLong())) {
      case 0l:
        id2462x_1 = id2462in_option0;
        break;
      case 1l:
        id2462x_1 = id2462in_option1;
        break;
      default:
        id2462x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2462out_result[(getCycle()+1)%2] = (id2462x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2463out_output;

  { // Node ID: 2463 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2463in_input = id2462out_result[getCycle()%2];

    id2463out_output = id2463in_input;
  }
  { // Node ID: 2465 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2465in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2465in_option0 = in_vars.id2464out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2465in_option1 = id2463out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2465x_1;

    switch((id2465in_sel.getValueAsLong())) {
      case 0l:
        id2465x_1 = id2465in_option0;
        break;
      case 1l:
        id2465x_1 = id2465in_option1;
        break;
      default:
        id2465x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2465out_result[(getCycle()+1)%2] = (id2465x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2466out_output;

  { // Node ID: 2466 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2466in_input = id2465out_result[getCycle()%2];

    id2466out_output = id2466in_input;
  }
  { // Node ID: 2468 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2468in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2468in_option0 = in_vars.id2467out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2468in_option1 = id2466out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2468x_1;

    switch((id2468in_sel.getValueAsLong())) {
      case 0l:
        id2468x_1 = id2468in_option0;
        break;
      case 1l:
        id2468x_1 = id2468in_option1;
        break;
      default:
        id2468x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2468out_result[(getCycle()+1)%2] = (id2468x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2469out_output;

  { // Node ID: 2469 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2469in_input = id2468out_result[getCycle()%2];

    id2469out_output = id2469in_input;
  }
  { // Node ID: 2471 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2471in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2471in_option0 = in_vars.id2470out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2471in_option1 = id2469out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2471x_1;

    switch((id2471in_sel.getValueAsLong())) {
      case 0l:
        id2471x_1 = id2471in_option0;
        break;
      case 1l:
        id2471x_1 = id2471in_option1;
        break;
      default:
        id2471x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2471out_result[(getCycle()+1)%2] = (id2471x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2472out_output;

  { // Node ID: 2472 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2472in_input = id2471out_result[getCycle()%2];

    id2472out_output = id2472in_input;
  }
  { // Node ID: 2474 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2474in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2474in_option0 = in_vars.id2473out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2474in_option1 = id2472out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2474x_1;

    switch((id2474in_sel.getValueAsLong())) {
      case 0l:
        id2474x_1 = id2474in_option0;
        break;
      case 1l:
        id2474x_1 = id2474in_option1;
        break;
      default:
        id2474x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2474out_result[(getCycle()+1)%2] = (id2474x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2475out_output;

  { // Node ID: 2475 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2475in_input = id2474out_result[getCycle()%2];

    id2475out_output = id2475in_input;
  }
  { // Node ID: 2477 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2477in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2477in_option0 = in_vars.id2476out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2477in_option1 = id2475out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2477x_1;

    switch((id2477in_sel.getValueAsLong())) {
      case 0l:
        id2477x_1 = id2477in_option0;
        break;
      case 1l:
        id2477x_1 = id2477in_option1;
        break;
      default:
        id2477x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2477out_result[(getCycle()+1)%2] = (id2477x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2478out_output;

  { // Node ID: 2478 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2478in_input = id2477out_result[getCycle()%2];

    id2478out_output = id2478in_input;
  }
  { // Node ID: 2480 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2480in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2480in_option0 = in_vars.id2479out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2480in_option1 = id2478out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2480x_1;

    switch((id2480in_sel.getValueAsLong())) {
      case 0l:
        id2480x_1 = id2480in_option0;
        break;
      case 1l:
        id2480x_1 = id2480in_option1;
        break;
      default:
        id2480x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2480out_result[(getCycle()+1)%2] = (id2480x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2481out_output;

  { // Node ID: 2481 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2481in_input = id2480out_result[getCycle()%2];

    id2481out_output = id2481in_input;
  }
  { // Node ID: 2483 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2483in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2483in_option0 = in_vars.id2482out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2483in_option1 = id2481out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2483x_1;

    switch((id2483in_sel.getValueAsLong())) {
      case 0l:
        id2483x_1 = id2483in_option0;
        break;
      case 1l:
        id2483x_1 = id2483in_option1;
        break;
      default:
        id2483x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2483out_result[(getCycle()+1)%2] = (id2483x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2484out_output;

  { // Node ID: 2484 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2484in_input = id2483out_result[getCycle()%2];

    id2484out_output = id2484in_input;
  }
  { // Node ID: 2486 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2486in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2486in_option0 = in_vars.id2485out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2486in_option1 = id2484out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2486x_1;

    switch((id2486in_sel.getValueAsLong())) {
      case 0l:
        id2486x_1 = id2486in_option0;
        break;
      case 1l:
        id2486x_1 = id2486in_option1;
        break;
      default:
        id2486x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2486out_result[(getCycle()+1)%2] = (id2486x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2487out_output;

  { // Node ID: 2487 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2487in_input = id2486out_result[getCycle()%2];

    id2487out_output = id2487in_input;
  }
  { // Node ID: 2489 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2489in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2489in_option0 = in_vars.id2488out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2489in_option1 = id2487out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2489x_1;

    switch((id2489in_sel.getValueAsLong())) {
      case 0l:
        id2489x_1 = id2489in_option0;
        break;
      case 1l:
        id2489x_1 = id2489in_option1;
        break;
      default:
        id2489x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2489out_result[(getCycle()+1)%2] = (id2489x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2490out_output;

  { // Node ID: 2490 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2490in_input = id2489out_result[getCycle()%2];

    id2490out_output = id2490in_input;
  }
  { // Node ID: 2492 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2492in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2492in_option0 = in_vars.id2491out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2492in_option1 = id2490out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2492x_1;

    switch((id2492in_sel.getValueAsLong())) {
      case 0l:
        id2492x_1 = id2492in_option0;
        break;
      case 1l:
        id2492x_1 = id2492in_option1;
        break;
      default:
        id2492x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2492out_result[(getCycle()+1)%2] = (id2492x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2493out_output;

  { // Node ID: 2493 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2493in_input = id2492out_result[getCycle()%2];

    id2493out_output = id2493in_input;
  }
  { // Node ID: 2495 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2495in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2495in_option0 = in_vars.id2494out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2495in_option1 = id2493out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2495x_1;

    switch((id2495in_sel.getValueAsLong())) {
      case 0l:
        id2495x_1 = id2495in_option0;
        break;
      case 1l:
        id2495x_1 = id2495in_option1;
        break;
      default:
        id2495x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2495out_result[(getCycle()+1)%2] = (id2495x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2496out_output;

  { // Node ID: 2496 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2496in_input = id2495out_result[getCycle()%2];

    id2496out_output = id2496in_input;
  }
  { // Node ID: 2498 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2498in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2498in_option0 = in_vars.id2497out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2498in_option1 = id2496out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2498x_1;

    switch((id2498in_sel.getValueAsLong())) {
      case 0l:
        id2498x_1 = id2498in_option0;
        break;
      case 1l:
        id2498x_1 = id2498in_option1;
        break;
      default:
        id2498x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2498out_result[(getCycle()+1)%2] = (id2498x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2499out_output;

  { // Node ID: 2499 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2499in_input = id2498out_result[getCycle()%2];

    id2499out_output = id2499in_input;
  }
  { // Node ID: 2501 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2501in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2501in_option0 = in_vars.id2500out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2501in_option1 = id2499out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2501x_1;

    switch((id2501in_sel.getValueAsLong())) {
      case 0l:
        id2501x_1 = id2501in_option0;
        break;
      case 1l:
        id2501x_1 = id2501in_option1;
        break;
      default:
        id2501x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2501out_result[(getCycle()+1)%2] = (id2501x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2502out_output;

  { // Node ID: 2502 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2502in_input = id2501out_result[getCycle()%2];

    id2502out_output = id2502in_input;
  }
  { // Node ID: 2504 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2504in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2504in_option0 = in_vars.id2503out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2504in_option1 = id2502out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2504x_1;

    switch((id2504in_sel.getValueAsLong())) {
      case 0l:
        id2504x_1 = id2504in_option0;
        break;
      case 1l:
        id2504x_1 = id2504in_option1;
        break;
      default:
        id2504x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2504out_result[(getCycle()+1)%2] = (id2504x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2505out_output;

  { // Node ID: 2505 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2505in_input = id2504out_result[getCycle()%2];

    id2505out_output = id2505in_input;
  }
  { // Node ID: 2507 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2507in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2507in_option0 = in_vars.id2506out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2507in_option1 = id2505out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2507x_1;

    switch((id2507in_sel.getValueAsLong())) {
      case 0l:
        id2507x_1 = id2507in_option0;
        break;
      case 1l:
        id2507x_1 = id2507in_option1;
        break;
      default:
        id2507x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2507out_result[(getCycle()+1)%2] = (id2507x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2508out_output;

  { // Node ID: 2508 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2508in_input = id2507out_result[getCycle()%2];

    id2508out_output = id2508in_input;
  }
  { // Node ID: 2510 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2510in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2510in_option0 = in_vars.id2509out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2510in_option1 = id2508out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2510x_1;

    switch((id2510in_sel.getValueAsLong())) {
      case 0l:
        id2510x_1 = id2510in_option0;
        break;
      case 1l:
        id2510x_1 = id2510in_option1;
        break;
      default:
        id2510x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2510out_result[(getCycle()+1)%2] = (id2510x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2511out_output;

  { // Node ID: 2511 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2511in_input = id2510out_result[getCycle()%2];

    id2511out_output = id2511in_input;
  }
  { // Node ID: 2513 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2513in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2513in_option0 = in_vars.id2512out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2513in_option1 = id2511out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2513x_1;

    switch((id2513in_sel.getValueAsLong())) {
      case 0l:
        id2513x_1 = id2513in_option0;
        break;
      case 1l:
        id2513x_1 = id2513in_option1;
        break;
      default:
        id2513x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2513out_result[(getCycle()+1)%2] = (id2513x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2514out_output;

  { // Node ID: 2514 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2514in_input = id2513out_result[getCycle()%2];

    id2514out_output = id2514in_input;
  }
  { // Node ID: 2516 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2516in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2516in_option0 = in_vars.id2515out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2516in_option1 = id2514out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2516x_1;

    switch((id2516in_sel.getValueAsLong())) {
      case 0l:
        id2516x_1 = id2516in_option0;
        break;
      case 1l:
        id2516x_1 = id2516in_option1;
        break;
      default:
        id2516x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2516out_result[(getCycle()+1)%2] = (id2516x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2517out_output;

  { // Node ID: 2517 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2517in_input = id2516out_result[getCycle()%2];

    id2517out_output = id2517in_input;
  }
  { // Node ID: 2519 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2519in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2519in_option0 = in_vars.id2518out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2519in_option1 = id2517out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2519x_1;

    switch((id2519in_sel.getValueAsLong())) {
      case 0l:
        id2519x_1 = id2519in_option0;
        break;
      case 1l:
        id2519x_1 = id2519in_option1;
        break;
      default:
        id2519x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2519out_result[(getCycle()+1)%2] = (id2519x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2520out_output;

  { // Node ID: 2520 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2520in_input = id2519out_result[getCycle()%2];

    id2520out_output = id2520in_input;
  }
  { // Node ID: 2522 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2522in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2522in_option0 = in_vars.id2521out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2522in_option1 = id2520out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2522x_1;

    switch((id2522in_sel.getValueAsLong())) {
      case 0l:
        id2522x_1 = id2522in_option0;
        break;
      case 1l:
        id2522x_1 = id2522in_option1;
        break;
      default:
        id2522x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2522out_result[(getCycle()+1)%2] = (id2522x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2523out_output;

  { // Node ID: 2523 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2523in_input = id2522out_result[getCycle()%2];

    id2523out_output = id2523in_input;
  }
  { // Node ID: 2525 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2525in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2525in_option0 = in_vars.id2524out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2525in_option1 = id2523out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2525x_1;

    switch((id2525in_sel.getValueAsLong())) {
      case 0l:
        id2525x_1 = id2525in_option0;
        break;
      case 1l:
        id2525x_1 = id2525in_option1;
        break;
      default:
        id2525x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2525out_result[(getCycle()+1)%2] = (id2525x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2526out_output;

  { // Node ID: 2526 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2526in_input = id2525out_result[getCycle()%2];

    id2526out_output = id2526in_input;
  }
  { // Node ID: 2528 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2528in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2528in_option0 = in_vars.id2527out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2528in_option1 = id2526out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2528x_1;

    switch((id2528in_sel.getValueAsLong())) {
      case 0l:
        id2528x_1 = id2528in_option0;
        break;
      case 1l:
        id2528x_1 = id2528in_option1;
        break;
      default:
        id2528x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2528out_result[(getCycle()+1)%2] = (id2528x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2529out_output;

  { // Node ID: 2529 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2529in_input = id2528out_result[getCycle()%2];

    id2529out_output = id2529in_input;
  }
  { // Node ID: 2531 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2531in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2531in_option0 = in_vars.id2530out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2531in_option1 = id2529out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2531x_1;

    switch((id2531in_sel.getValueAsLong())) {
      case 0l:
        id2531x_1 = id2531in_option0;
        break;
      case 1l:
        id2531x_1 = id2531in_option1;
        break;
      default:
        id2531x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2531out_result[(getCycle()+1)%2] = (id2531x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2532out_output;

  { // Node ID: 2532 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2532in_input = id2531out_result[getCycle()%2];

    id2532out_output = id2532in_input;
  }
  { // Node ID: 2534 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2534in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2534in_option0 = in_vars.id2533out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2534in_option1 = id2532out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2534x_1;

    switch((id2534in_sel.getValueAsLong())) {
      case 0l:
        id2534x_1 = id2534in_option0;
        break;
      case 1l:
        id2534x_1 = id2534in_option1;
        break;
      default:
        id2534x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2534out_result[(getCycle()+1)%2] = (id2534x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2535out_output;

  { // Node ID: 2535 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2535in_input = id2534out_result[getCycle()%2];

    id2535out_output = id2535in_input;
  }
  { // Node ID: 2537 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2537in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2537in_option0 = in_vars.id2536out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2537in_option1 = id2535out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2537x_1;

    switch((id2537in_sel.getValueAsLong())) {
      case 0l:
        id2537x_1 = id2537in_option0;
        break;
      case 1l:
        id2537x_1 = id2537in_option1;
        break;
      default:
        id2537x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2537out_result[(getCycle()+1)%2] = (id2537x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2538out_output;

  { // Node ID: 2538 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2538in_input = id2537out_result[getCycle()%2];

    id2538out_output = id2538in_input;
  }
  { // Node ID: 2540 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2540in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2540in_option0 = in_vars.id2539out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2540in_option1 = id2538out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2540x_1;

    switch((id2540in_sel.getValueAsLong())) {
      case 0l:
        id2540x_1 = id2540in_option0;
        break;
      case 1l:
        id2540x_1 = id2540in_option1;
        break;
      default:
        id2540x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2540out_result[(getCycle()+1)%2] = (id2540x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2541out_output;

  { // Node ID: 2541 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2541in_input = id2540out_result[getCycle()%2];

    id2541out_output = id2541in_input;
  }
  { // Node ID: 2543 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2543in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2543in_option0 = in_vars.id2542out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2543in_option1 = id2541out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2543x_1;

    switch((id2543in_sel.getValueAsLong())) {
      case 0l:
        id2543x_1 = id2543in_option0;
        break;
      case 1l:
        id2543x_1 = id2543in_option1;
        break;
      default:
        id2543x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2543out_result[(getCycle()+1)%2] = (id2543x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2544out_output;

  { // Node ID: 2544 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2544in_input = id2543out_result[getCycle()%2];

    id2544out_output = id2544in_input;
  }
  { // Node ID: 2546 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2546in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2546in_option0 = in_vars.id2545out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2546in_option1 = id2544out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2546x_1;

    switch((id2546in_sel.getValueAsLong())) {
      case 0l:
        id2546x_1 = id2546in_option0;
        break;
      case 1l:
        id2546x_1 = id2546in_option1;
        break;
      default:
        id2546x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2546out_result[(getCycle()+1)%2] = (id2546x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2547out_output;

  { // Node ID: 2547 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2547in_input = id2546out_result[getCycle()%2];

    id2547out_output = id2547in_input;
  }
  { // Node ID: 2549 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2549in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2549in_option0 = in_vars.id2548out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2549in_option1 = id2547out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2549x_1;

    switch((id2549in_sel.getValueAsLong())) {
      case 0l:
        id2549x_1 = id2549in_option0;
        break;
      case 1l:
        id2549x_1 = id2549in_option1;
        break;
      default:
        id2549x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2549out_result[(getCycle()+1)%2] = (id2549x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2550out_output;

  { // Node ID: 2550 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2550in_input = id2549out_result[getCycle()%2];

    id2550out_output = id2550in_input;
  }
  { // Node ID: 2552 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2552in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2552in_option0 = in_vars.id2551out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2552in_option1 = id2550out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2552x_1;

    switch((id2552in_sel.getValueAsLong())) {
      case 0l:
        id2552x_1 = id2552in_option0;
        break;
      case 1l:
        id2552x_1 = id2552in_option1;
        break;
      default:
        id2552x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2552out_result[(getCycle()+1)%2] = (id2552x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2553out_output;

  { // Node ID: 2553 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2553in_input = id2552out_result[getCycle()%2];

    id2553out_output = id2553in_input;
  }
  { // Node ID: 2555 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2555in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2555in_option0 = in_vars.id2554out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2555in_option1 = id2553out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2555x_1;

    switch((id2555in_sel.getValueAsLong())) {
      case 0l:
        id2555x_1 = id2555in_option0;
        break;
      case 1l:
        id2555x_1 = id2555in_option1;
        break;
      default:
        id2555x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2555out_result[(getCycle()+1)%2] = (id2555x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2556out_output;

  { // Node ID: 2556 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2556in_input = id2555out_result[getCycle()%2];

    id2556out_output = id2556in_input;
  }
  { // Node ID: 2558 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2558in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2558in_option0 = in_vars.id2557out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2558in_option1 = id2556out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2558x_1;

    switch((id2558in_sel.getValueAsLong())) {
      case 0l:
        id2558x_1 = id2558in_option0;
        break;
      case 1l:
        id2558x_1 = id2558in_option1;
        break;
      default:
        id2558x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2558out_result[(getCycle()+1)%2] = (id2558x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2559out_output;

  { // Node ID: 2559 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2559in_input = id2558out_result[getCycle()%2];

    id2559out_output = id2559in_input;
  }
  { // Node ID: 2561 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2561in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2561in_option0 = in_vars.id2560out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2561in_option1 = id2559out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2561x_1;

    switch((id2561in_sel.getValueAsLong())) {
      case 0l:
        id2561x_1 = id2561in_option0;
        break;
      case 1l:
        id2561x_1 = id2561in_option1;
        break;
      default:
        id2561x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2561out_result[(getCycle()+1)%2] = (id2561x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2562out_output;

  { // Node ID: 2562 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2562in_input = id2561out_result[getCycle()%2];

    id2562out_output = id2562in_input;
  }
  { // Node ID: 2564 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2564in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2564in_option0 = in_vars.id2563out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2564in_option1 = id2562out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2564x_1;

    switch((id2564in_sel.getValueAsLong())) {
      case 0l:
        id2564x_1 = id2564in_option0;
        break;
      case 1l:
        id2564x_1 = id2564in_option1;
        break;
      default:
        id2564x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2564out_result[(getCycle()+1)%2] = (id2564x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2565out_output;

  { // Node ID: 2565 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2565in_input = id2564out_result[getCycle()%2];

    id2565out_output = id2565in_input;
  }
  { // Node ID: 2567 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2567in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2567in_option0 = in_vars.id2566out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2567in_option1 = id2565out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2567x_1;

    switch((id2567in_sel.getValueAsLong())) {
      case 0l:
        id2567x_1 = id2567in_option0;
        break;
      case 1l:
        id2567x_1 = id2567in_option1;
        break;
      default:
        id2567x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2567out_result[(getCycle()+1)%2] = (id2567x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2568out_output;

  { // Node ID: 2568 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2568in_input = id2567out_result[getCycle()%2];

    id2568out_output = id2568in_input;
  }
  { // Node ID: 2570 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2570in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2570in_option0 = in_vars.id2569out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2570in_option1 = id2568out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2570x_1;

    switch((id2570in_sel.getValueAsLong())) {
      case 0l:
        id2570x_1 = id2570in_option0;
        break;
      case 1l:
        id2570x_1 = id2570in_option1;
        break;
      default:
        id2570x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2570out_result[(getCycle()+1)%2] = (id2570x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2571out_output;

  { // Node ID: 2571 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2571in_input = id2570out_result[getCycle()%2];

    id2571out_output = id2571in_input;
  }
  { // Node ID: 2573 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2573in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2573in_option0 = in_vars.id2572out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2573in_option1 = id2571out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2573x_1;

    switch((id2573in_sel.getValueAsLong())) {
      case 0l:
        id2573x_1 = id2573in_option0;
        break;
      case 1l:
        id2573x_1 = id2573in_option1;
        break;
      default:
        id2573x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2573out_result[(getCycle()+1)%2] = (id2573x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2574out_output;

  { // Node ID: 2574 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2574in_input = id2573out_result[getCycle()%2];

    id2574out_output = id2574in_input;
  }
  { // Node ID: 2576 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2576in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2576in_option0 = in_vars.id2575out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2576in_option1 = id2574out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2576x_1;

    switch((id2576in_sel.getValueAsLong())) {
      case 0l:
        id2576x_1 = id2576in_option0;
        break;
      case 1l:
        id2576x_1 = id2576in_option1;
        break;
      default:
        id2576x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2576out_result[(getCycle()+1)%2] = (id2576x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2577out_output;

  { // Node ID: 2577 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2577in_input = id2576out_result[getCycle()%2];

    id2577out_output = id2577in_input;
  }
  { // Node ID: 2579 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2579in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2579in_option0 = in_vars.id2578out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2579in_option1 = id2577out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2579x_1;

    switch((id2579in_sel.getValueAsLong())) {
      case 0l:
        id2579x_1 = id2579in_option0;
        break;
      case 1l:
        id2579x_1 = id2579in_option1;
        break;
      default:
        id2579x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2579out_result[(getCycle()+1)%2] = (id2579x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2580out_output;

  { // Node ID: 2580 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2580in_input = id2579out_result[getCycle()%2];

    id2580out_output = id2580in_input;
  }
  { // Node ID: 2582 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2582in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2582in_option0 = in_vars.id2581out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2582in_option1 = id2580out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2582x_1;

    switch((id2582in_sel.getValueAsLong())) {
      case 0l:
        id2582x_1 = id2582in_option0;
        break;
      case 1l:
        id2582x_1 = id2582in_option1;
        break;
      default:
        id2582x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2582out_result[(getCycle()+1)%2] = (id2582x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2583out_output;

  { // Node ID: 2583 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2583in_input = id2582out_result[getCycle()%2];

    id2583out_output = id2583in_input;
  }
  { // Node ID: 2585 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2585in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2585in_option0 = in_vars.id2584out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2585in_option1 = id2583out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2585x_1;

    switch((id2585in_sel.getValueAsLong())) {
      case 0l:
        id2585x_1 = id2585in_option0;
        break;
      case 1l:
        id2585x_1 = id2585in_option1;
        break;
      default:
        id2585x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2585out_result[(getCycle()+1)%2] = (id2585x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2586out_output;

  { // Node ID: 2586 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2586in_input = id2585out_result[getCycle()%2];

    id2586out_output = id2586in_input;
  }
  { // Node ID: 2588 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2588in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2588in_option0 = in_vars.id2587out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2588in_option1 = id2586out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2588x_1;

    switch((id2588in_sel.getValueAsLong())) {
      case 0l:
        id2588x_1 = id2588in_option0;
        break;
      case 1l:
        id2588x_1 = id2588in_option1;
        break;
      default:
        id2588x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2588out_result[(getCycle()+1)%2] = (id2588x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2589out_output;

  { // Node ID: 2589 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2589in_input = id2588out_result[getCycle()%2];

    id2589out_output = id2589in_input;
  }
  { // Node ID: 2591 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2591in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2591in_option0 = in_vars.id2590out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2591in_option1 = id2589out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2591x_1;

    switch((id2591in_sel.getValueAsLong())) {
      case 0l:
        id2591x_1 = id2591in_option0;
        break;
      case 1l:
        id2591x_1 = id2591in_option1;
        break;
      default:
        id2591x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2591out_result[(getCycle()+1)%2] = (id2591x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2592out_output;

  { // Node ID: 2592 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2592in_input = id2591out_result[getCycle()%2];

    id2592out_output = id2592in_input;
  }
  { // Node ID: 2594 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2594in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2594in_option0 = in_vars.id2593out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2594in_option1 = id2592out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2594x_1;

    switch((id2594in_sel.getValueAsLong())) {
      case 0l:
        id2594x_1 = id2594in_option0;
        break;
      case 1l:
        id2594x_1 = id2594in_option1;
        break;
      default:
        id2594x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2594out_result[(getCycle()+1)%2] = (id2594x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2595out_output;

  { // Node ID: 2595 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2595in_input = id2594out_result[getCycle()%2];

    id2595out_output = id2595in_input;
  }
  { // Node ID: 2597 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2597in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2597in_option0 = in_vars.id2596out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2597in_option1 = id2595out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2597x_1;

    switch((id2597in_sel.getValueAsLong())) {
      case 0l:
        id2597x_1 = id2597in_option0;
        break;
      case 1l:
        id2597x_1 = id2597in_option1;
        break;
      default:
        id2597x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2597out_result[(getCycle()+1)%2] = (id2597x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2598out_output;

  { // Node ID: 2598 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2598in_input = id2597out_result[getCycle()%2];

    id2598out_output = id2598in_input;
  }
  { // Node ID: 2600 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2600in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2600in_option0 = in_vars.id2599out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2600in_option1 = id2598out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2600x_1;

    switch((id2600in_sel.getValueAsLong())) {
      case 0l:
        id2600x_1 = id2600in_option0;
        break;
      case 1l:
        id2600x_1 = id2600in_option1;
        break;
      default:
        id2600x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2600out_result[(getCycle()+1)%2] = (id2600x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2601out_output;

  { // Node ID: 2601 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2601in_input = id2600out_result[getCycle()%2];

    id2601out_output = id2601in_input;
  }
  { // Node ID: 2603 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2603in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2603in_option0 = in_vars.id2602out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2603in_option1 = id2601out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2603x_1;

    switch((id2603in_sel.getValueAsLong())) {
      case 0l:
        id2603x_1 = id2603in_option0;
        break;
      case 1l:
        id2603x_1 = id2603in_option1;
        break;
      default:
        id2603x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2603out_result[(getCycle()+1)%2] = (id2603x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2604out_output;

  { // Node ID: 2604 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2604in_input = id2603out_result[getCycle()%2];

    id2604out_output = id2604in_input;
  }
  { // Node ID: 2606 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2606in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2606in_option0 = in_vars.id2605out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2606in_option1 = id2604out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2606x_1;

    switch((id2606in_sel.getValueAsLong())) {
      case 0l:
        id2606x_1 = id2606in_option0;
        break;
      case 1l:
        id2606x_1 = id2606in_option1;
        break;
      default:
        id2606x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2606out_result[(getCycle()+1)%2] = (id2606x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2607out_output;

  { // Node ID: 2607 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2607in_input = id2606out_result[getCycle()%2];

    id2607out_output = id2607in_input;
  }
  { // Node ID: 2609 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2609in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2609in_option0 = in_vars.id2608out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2609in_option1 = id2607out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2609x_1;

    switch((id2609in_sel.getValueAsLong())) {
      case 0l:
        id2609x_1 = id2609in_option0;
        break;
      case 1l:
        id2609x_1 = id2609in_option1;
        break;
      default:
        id2609x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2609out_result[(getCycle()+1)%2] = (id2609x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2610out_output;

  { // Node ID: 2610 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2610in_input = id2609out_result[getCycle()%2];

    id2610out_output = id2610in_input;
  }
  { // Node ID: 2612 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2612in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2612in_option0 = in_vars.id2611out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2612in_option1 = id2610out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2612x_1;

    switch((id2612in_sel.getValueAsLong())) {
      case 0l:
        id2612x_1 = id2612in_option0;
        break;
      case 1l:
        id2612x_1 = id2612in_option1;
        break;
      default:
        id2612x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2612out_result[(getCycle()+1)%2] = (id2612x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2613out_output;

  { // Node ID: 2613 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2613in_input = id2612out_result[getCycle()%2];

    id2613out_output = id2613in_input;
  }
  { // Node ID: 2615 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2615in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2615in_option0 = in_vars.id2614out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2615in_option1 = id2613out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2615x_1;

    switch((id2615in_sel.getValueAsLong())) {
      case 0l:
        id2615x_1 = id2615in_option0;
        break;
      case 1l:
        id2615x_1 = id2615in_option1;
        break;
      default:
        id2615x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2615out_result[(getCycle()+1)%2] = (id2615x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2616out_output;

  { // Node ID: 2616 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2616in_input = id2615out_result[getCycle()%2];

    id2616out_output = id2616in_input;
  }
  { // Node ID: 2618 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2618in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2618in_option0 = in_vars.id2617out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2618in_option1 = id2616out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2618x_1;

    switch((id2618in_sel.getValueAsLong())) {
      case 0l:
        id2618x_1 = id2618in_option0;
        break;
      case 1l:
        id2618x_1 = id2618in_option1;
        break;
      default:
        id2618x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2618out_result[(getCycle()+1)%2] = (id2618x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2619out_output;

  { // Node ID: 2619 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2619in_input = id2618out_result[getCycle()%2];

    id2619out_output = id2619in_input;
  }
  { // Node ID: 2621 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2621in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2621in_option0 = in_vars.id2620out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2621in_option1 = id2619out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2621x_1;

    switch((id2621in_sel.getValueAsLong())) {
      case 0l:
        id2621x_1 = id2621in_option0;
        break;
      case 1l:
        id2621x_1 = id2621in_option1;
        break;
      default:
        id2621x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2621out_result[(getCycle()+1)%2] = (id2621x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2622out_output;

  { // Node ID: 2622 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2622in_input = id2621out_result[getCycle()%2];

    id2622out_output = id2622in_input;
  }
  { // Node ID: 2624 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2624in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2624in_option0 = in_vars.id2623out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2624in_option1 = id2622out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2624x_1;

    switch((id2624in_sel.getValueAsLong())) {
      case 0l:
        id2624x_1 = id2624in_option0;
        break;
      case 1l:
        id2624x_1 = id2624in_option1;
        break;
      default:
        id2624x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2624out_result[(getCycle()+1)%2] = (id2624x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2625out_output;

  { // Node ID: 2625 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2625in_input = id2624out_result[getCycle()%2];

    id2625out_output = id2625in_input;
  }
  { // Node ID: 2627 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2627in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2627in_option0 = in_vars.id2626out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2627in_option1 = id2625out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2627x_1;

    switch((id2627in_sel.getValueAsLong())) {
      case 0l:
        id2627x_1 = id2627in_option0;
        break;
      case 1l:
        id2627x_1 = id2627in_option1;
        break;
      default:
        id2627x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2627out_result[(getCycle()+1)%2] = (id2627x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2628out_output;

  { // Node ID: 2628 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2628in_input = id2627out_result[getCycle()%2];

    id2628out_output = id2628in_input;
  }
  { // Node ID: 2630 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2630in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2630in_option0 = in_vars.id2629out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2630in_option1 = id2628out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2630x_1;

    switch((id2630in_sel.getValueAsLong())) {
      case 0l:
        id2630x_1 = id2630in_option0;
        break;
      case 1l:
        id2630x_1 = id2630in_option1;
        break;
      default:
        id2630x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2630out_result[(getCycle()+1)%2] = (id2630x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2631out_output;

  { // Node ID: 2631 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2631in_input = id2630out_result[getCycle()%2];

    id2631out_output = id2631in_input;
  }
  { // Node ID: 2633 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2633in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2633in_option0 = in_vars.id2632out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2633in_option1 = id2631out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2633x_1;

    switch((id2633in_sel.getValueAsLong())) {
      case 0l:
        id2633x_1 = id2633in_option0;
        break;
      case 1l:
        id2633x_1 = id2633in_option1;
        break;
      default:
        id2633x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2633out_result[(getCycle()+1)%2] = (id2633x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2634out_output;

  { // Node ID: 2634 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2634in_input = id2633out_result[getCycle()%2];

    id2634out_output = id2634in_input;
  }
  { // Node ID: 2636 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2636in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2636in_option0 = in_vars.id2635out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2636in_option1 = id2634out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2636x_1;

    switch((id2636in_sel.getValueAsLong())) {
      case 0l:
        id2636x_1 = id2636in_option0;
        break;
      case 1l:
        id2636x_1 = id2636in_option1;
        break;
      default:
        id2636x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2636out_result[(getCycle()+1)%2] = (id2636x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2637out_output;

  { // Node ID: 2637 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2637in_input = id2636out_result[getCycle()%2];

    id2637out_output = id2637in_input;
  }
  { // Node ID: 2639 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2639in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2639in_option0 = in_vars.id2638out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2639in_option1 = id2637out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2639x_1;

    switch((id2639in_sel.getValueAsLong())) {
      case 0l:
        id2639x_1 = id2639in_option0;
        break;
      case 1l:
        id2639x_1 = id2639in_option1;
        break;
      default:
        id2639x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2639out_result[(getCycle()+1)%2] = (id2639x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2640out_output;

  { // Node ID: 2640 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2640in_input = id2639out_result[getCycle()%2];

    id2640out_output = id2640in_input;
  }
  { // Node ID: 2642 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2642in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2642in_option0 = in_vars.id2641out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2642in_option1 = id2640out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2642x_1;

    switch((id2642in_sel.getValueAsLong())) {
      case 0l:
        id2642x_1 = id2642in_option0;
        break;
      case 1l:
        id2642x_1 = id2642in_option1;
        break;
      default:
        id2642x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2642out_result[(getCycle()+1)%2] = (id2642x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2643out_output;

  { // Node ID: 2643 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2643in_input = id2642out_result[getCycle()%2];

    id2643out_output = id2643in_input;
  }
  { // Node ID: 2645 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2645in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2645in_option0 = in_vars.id2644out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2645in_option1 = id2643out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2645x_1;

    switch((id2645in_sel.getValueAsLong())) {
      case 0l:
        id2645x_1 = id2645in_option0;
        break;
      case 1l:
        id2645x_1 = id2645in_option1;
        break;
      default:
        id2645x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2645out_result[(getCycle()+1)%2] = (id2645x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2646out_output;

  { // Node ID: 2646 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2646in_input = id2645out_result[getCycle()%2];

    id2646out_output = id2646in_input;
  }
  { // Node ID: 2648 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2648in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2648in_option0 = in_vars.id2647out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2648in_option1 = id2646out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2648x_1;

    switch((id2648in_sel.getValueAsLong())) {
      case 0l:
        id2648x_1 = id2648in_option0;
        break;
      case 1l:
        id2648x_1 = id2648in_option1;
        break;
      default:
        id2648x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2648out_result[(getCycle()+1)%2] = (id2648x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2649out_output;

  { // Node ID: 2649 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2649in_input = id2648out_result[getCycle()%2];

    id2649out_output = id2649in_input;
  }
  { // Node ID: 2651 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2651in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2651in_option0 = in_vars.id2650out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2651in_option1 = id2649out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2651x_1;

    switch((id2651in_sel.getValueAsLong())) {
      case 0l:
        id2651x_1 = id2651in_option0;
        break;
      case 1l:
        id2651x_1 = id2651in_option1;
        break;
      default:
        id2651x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2651out_result[(getCycle()+1)%2] = (id2651x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2652out_output;

  { // Node ID: 2652 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2652in_input = id2651out_result[getCycle()%2];

    id2652out_output = id2652in_input;
  }
  { // Node ID: 2654 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2654in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2654in_option0 = in_vars.id2653out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2654in_option1 = id2652out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2654x_1;

    switch((id2654in_sel.getValueAsLong())) {
      case 0l:
        id2654x_1 = id2654in_option0;
        break;
      case 1l:
        id2654x_1 = id2654in_option1;
        break;
      default:
        id2654x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2654out_result[(getCycle()+1)%2] = (id2654x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2655out_output;

  { // Node ID: 2655 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2655in_input = id2654out_result[getCycle()%2];

    id2655out_output = id2655in_input;
  }
  { // Node ID: 2657 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2657in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2657in_option0 = in_vars.id2656out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2657in_option1 = id2655out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2657x_1;

    switch((id2657in_sel.getValueAsLong())) {
      case 0l:
        id2657x_1 = id2657in_option0;
        break;
      case 1l:
        id2657x_1 = id2657in_option1;
        break;
      default:
        id2657x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2657out_result[(getCycle()+1)%2] = (id2657x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2658out_output;

  { // Node ID: 2658 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2658in_input = id2657out_result[getCycle()%2];

    id2658out_output = id2658in_input;
  }
  { // Node ID: 2660 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2660in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2660in_option0 = in_vars.id2659out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2660in_option1 = id2658out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2660x_1;

    switch((id2660in_sel.getValueAsLong())) {
      case 0l:
        id2660x_1 = id2660in_option0;
        break;
      case 1l:
        id2660x_1 = id2660in_option1;
        break;
      default:
        id2660x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2660out_result[(getCycle()+1)%2] = (id2660x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2661out_output;

  { // Node ID: 2661 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2661in_input = id2660out_result[getCycle()%2];

    id2661out_output = id2661in_input;
  }
  { // Node ID: 2663 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2663in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2663in_option0 = in_vars.id2662out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2663in_option1 = id2661out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2663x_1;

    switch((id2663in_sel.getValueAsLong())) {
      case 0l:
        id2663x_1 = id2663in_option0;
        break;
      case 1l:
        id2663x_1 = id2663in_option1;
        break;
      default:
        id2663x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2663out_result[(getCycle()+1)%2] = (id2663x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2664out_output;

  { // Node ID: 2664 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2664in_input = id2663out_result[getCycle()%2];

    id2664out_output = id2664in_input;
  }
  { // Node ID: 2666 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2666in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2666in_option0 = in_vars.id2665out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2666in_option1 = id2664out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2666x_1;

    switch((id2666in_sel.getValueAsLong())) {
      case 0l:
        id2666x_1 = id2666in_option0;
        break;
      case 1l:
        id2666x_1 = id2666in_option1;
        break;
      default:
        id2666x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2666out_result[(getCycle()+1)%2] = (id2666x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2667out_output;

  { // Node ID: 2667 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2667in_input = id2666out_result[getCycle()%2];

    id2667out_output = id2667in_input;
  }
  { // Node ID: 2669 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2669in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2669in_option0 = in_vars.id2668out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2669in_option1 = id2667out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2669x_1;

    switch((id2669in_sel.getValueAsLong())) {
      case 0l:
        id2669x_1 = id2669in_option0;
        break;
      case 1l:
        id2669x_1 = id2669in_option1;
        break;
      default:
        id2669x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2669out_result[(getCycle()+1)%2] = (id2669x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2670out_output;

  { // Node ID: 2670 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2670in_input = id2669out_result[getCycle()%2];

    id2670out_output = id2670in_input;
  }
  { // Node ID: 2672 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2672in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2672in_option0 = in_vars.id2671out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2672in_option1 = id2670out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2672x_1;

    switch((id2672in_sel.getValueAsLong())) {
      case 0l:
        id2672x_1 = id2672in_option0;
        break;
      case 1l:
        id2672x_1 = id2672in_option1;
        break;
      default:
        id2672x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2672out_result[(getCycle()+1)%2] = (id2672x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2673out_output;

  { // Node ID: 2673 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2673in_input = id2672out_result[getCycle()%2];

    id2673out_output = id2673in_input;
  }
  { // Node ID: 2675 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2675in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2675in_option0 = in_vars.id2674out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2675in_option1 = id2673out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2675x_1;

    switch((id2675in_sel.getValueAsLong())) {
      case 0l:
        id2675x_1 = id2675in_option0;
        break;
      case 1l:
        id2675x_1 = id2675in_option1;
        break;
      default:
        id2675x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2675out_result[(getCycle()+1)%2] = (id2675x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2676out_output;

  { // Node ID: 2676 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2676in_input = id2675out_result[getCycle()%2];

    id2676out_output = id2676in_input;
  }
  { // Node ID: 2678 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2678in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2678in_option0 = in_vars.id2677out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2678in_option1 = id2676out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2678x_1;

    switch((id2678in_sel.getValueAsLong())) {
      case 0l:
        id2678x_1 = id2678in_option0;
        break;
      case 1l:
        id2678x_1 = id2678in_option1;
        break;
      default:
        id2678x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2678out_result[(getCycle()+1)%2] = (id2678x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2679out_output;

  { // Node ID: 2679 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2679in_input = id2678out_result[getCycle()%2];

    id2679out_output = id2679in_input;
  }
  { // Node ID: 2681 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2681in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2681in_option0 = in_vars.id2680out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2681in_option1 = id2679out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2681x_1;

    switch((id2681in_sel.getValueAsLong())) {
      case 0l:
        id2681x_1 = id2681in_option0;
        break;
      case 1l:
        id2681x_1 = id2681in_option1;
        break;
      default:
        id2681x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2681out_result[(getCycle()+1)%2] = (id2681x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2682out_output;

  { // Node ID: 2682 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2682in_input = id2681out_result[getCycle()%2];

    id2682out_output = id2682in_input;
  }
  { // Node ID: 2684 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2684in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2684in_option0 = in_vars.id2683out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2684in_option1 = id2682out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2684x_1;

    switch((id2684in_sel.getValueAsLong())) {
      case 0l:
        id2684x_1 = id2684in_option0;
        break;
      case 1l:
        id2684x_1 = id2684in_option1;
        break;
      default:
        id2684x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2684out_result[(getCycle()+1)%2] = (id2684x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2685out_output;

  { // Node ID: 2685 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2685in_input = id2684out_result[getCycle()%2];

    id2685out_output = id2685in_input;
  }
  { // Node ID: 2687 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2687in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2687in_option0 = in_vars.id2686out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2687in_option1 = id2685out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2687x_1;

    switch((id2687in_sel.getValueAsLong())) {
      case 0l:
        id2687x_1 = id2687in_option0;
        break;
      case 1l:
        id2687x_1 = id2687in_option1;
        break;
      default:
        id2687x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2687out_result[(getCycle()+1)%2] = (id2687x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2688out_output;

  { // Node ID: 2688 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2688in_input = id2687out_result[getCycle()%2];

    id2688out_output = id2688in_input;
  }
  { // Node ID: 2690 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2690in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2690in_option0 = in_vars.id2689out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2690in_option1 = id2688out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2690x_1;

    switch((id2690in_sel.getValueAsLong())) {
      case 0l:
        id2690x_1 = id2690in_option0;
        break;
      case 1l:
        id2690x_1 = id2690in_option1;
        break;
      default:
        id2690x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2690out_result[(getCycle()+1)%2] = (id2690x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2691out_output;

  { // Node ID: 2691 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2691in_input = id2690out_result[getCycle()%2];

    id2691out_output = id2691in_input;
  }
  { // Node ID: 2693 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2693in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2693in_option0 = in_vars.id2692out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2693in_option1 = id2691out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2693x_1;

    switch((id2693in_sel.getValueAsLong())) {
      case 0l:
        id2693x_1 = id2693in_option0;
        break;
      case 1l:
        id2693x_1 = id2693in_option1;
        break;
      default:
        id2693x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2693out_result[(getCycle()+1)%2] = (id2693x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2694out_output;

  { // Node ID: 2694 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2694in_input = id2693out_result[getCycle()%2];

    id2694out_output = id2694in_input;
  }
  { // Node ID: 2696 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2696in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2696in_option0 = in_vars.id2695out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2696in_option1 = id2694out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2696x_1;

    switch((id2696in_sel.getValueAsLong())) {
      case 0l:
        id2696x_1 = id2696in_option0;
        break;
      case 1l:
        id2696x_1 = id2696in_option1;
        break;
      default:
        id2696x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2696out_result[(getCycle()+1)%2] = (id2696x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2697out_output;

  { // Node ID: 2697 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2697in_input = id2696out_result[getCycle()%2];

    id2697out_output = id2697in_input;
  }
  { // Node ID: 2699 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2699in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2699in_option0 = in_vars.id2698out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2699in_option1 = id2697out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2699x_1;

    switch((id2699in_sel.getValueAsLong())) {
      case 0l:
        id2699x_1 = id2699in_option0;
        break;
      case 1l:
        id2699x_1 = id2699in_option1;
        break;
      default:
        id2699x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2699out_result[(getCycle()+1)%2] = (id2699x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2700out_output;

  { // Node ID: 2700 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2700in_input = id2699out_result[getCycle()%2];

    id2700out_output = id2700in_input;
  }
  { // Node ID: 2702 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2702in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2702in_option0 = in_vars.id2701out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2702in_option1 = id2700out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2702x_1;

    switch((id2702in_sel.getValueAsLong())) {
      case 0l:
        id2702x_1 = id2702in_option0;
        break;
      case 1l:
        id2702x_1 = id2702in_option1;
        break;
      default:
        id2702x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2702out_result[(getCycle()+1)%2] = (id2702x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2703out_output;

  { // Node ID: 2703 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2703in_input = id2702out_result[getCycle()%2];

    id2703out_output = id2703in_input;
  }
  { // Node ID: 2705 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2705in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2705in_option0 = in_vars.id2704out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2705in_option1 = id2703out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2705x_1;

    switch((id2705in_sel.getValueAsLong())) {
      case 0l:
        id2705x_1 = id2705in_option0;
        break;
      case 1l:
        id2705x_1 = id2705in_option1;
        break;
      default:
        id2705x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2705out_result[(getCycle()+1)%2] = (id2705x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2706out_output;

  { // Node ID: 2706 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2706in_input = id2705out_result[getCycle()%2];

    id2706out_output = id2706in_input;
  }
  { // Node ID: 2708 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2708in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2708in_option0 = in_vars.id2707out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2708in_option1 = id2706out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2708x_1;

    switch((id2708in_sel.getValueAsLong())) {
      case 0l:
        id2708x_1 = id2708in_option0;
        break;
      case 1l:
        id2708x_1 = id2708in_option1;
        break;
      default:
        id2708x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2708out_result[(getCycle()+1)%2] = (id2708x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2709out_output;

  { // Node ID: 2709 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2709in_input = id2708out_result[getCycle()%2];

    id2709out_output = id2709in_input;
  }
  { // Node ID: 2711 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2711in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2711in_option0 = in_vars.id2710out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2711in_option1 = id2709out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2711x_1;

    switch((id2711in_sel.getValueAsLong())) {
      case 0l:
        id2711x_1 = id2711in_option0;
        break;
      case 1l:
        id2711x_1 = id2711in_option1;
        break;
      default:
        id2711x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2711out_result[(getCycle()+1)%2] = (id2711x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2712out_output;

  { // Node ID: 2712 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2712in_input = id2711out_result[getCycle()%2];

    id2712out_output = id2712in_input;
  }
  { // Node ID: 2714 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2714in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2714in_option0 = in_vars.id2713out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2714in_option1 = id2712out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2714x_1;

    switch((id2714in_sel.getValueAsLong())) {
      case 0l:
        id2714x_1 = id2714in_option0;
        break;
      case 1l:
        id2714x_1 = id2714in_option1;
        break;
      default:
        id2714x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2714out_result[(getCycle()+1)%2] = (id2714x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2715out_output;

  { // Node ID: 2715 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2715in_input = id2714out_result[getCycle()%2];

    id2715out_output = id2715in_input;
  }
  { // Node ID: 2717 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2717in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2717in_option0 = in_vars.id2716out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2717in_option1 = id2715out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2717x_1;

    switch((id2717in_sel.getValueAsLong())) {
      case 0l:
        id2717x_1 = id2717in_option0;
        break;
      case 1l:
        id2717x_1 = id2717in_option1;
        break;
      default:
        id2717x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2717out_result[(getCycle()+1)%2] = (id2717x_1);
  }

  sliding_window10Block6Vars out_vars;
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
  return out_vars;
};

};
