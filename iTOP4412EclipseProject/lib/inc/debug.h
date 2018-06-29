#ifndef __DEBUG_H__
#define __DEBUG_H__

#include "../../common/inc/exynos_4412.h"

void debug_chipid();

void debug_pll_apll();
void debug_pll_mpll();
void debug_pll_epll();
void debug_pll_vpll();

void debug_clock_leftbus();
void debug_clock_rightbus();

void debug_clock_cpu();
void debug_clock_dmc();

#endif
