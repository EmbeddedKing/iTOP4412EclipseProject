#include "debug.h"

void debug_chipid()
{
	printf("ChipID:\n");
	printf("PRO_ID:0x%x\n", PRO_ID);
	printf("PACKAGE_ID:0x%x\n", PACKAGE_ID);
}

void debug_pll_apll()
{
	printf("APLL:\n");
	printf("APLL_LOCK:0x%x\n", APLL_LOCK);
	printf("APLL_CON0:0x%x\n", APLL_CON0);
	printf("APLL_CON1:0x%x\n", APLL_CON1);
}

void debug_pll_mpll()
{
	printf("MPLL:\n");
	printf("MPLL_LOCK:0x%x\n", MPLL_LOCK);
	printf("MPLL_CON0:0x%x\n", MPLL_CON0);
	printf("MPLL_CON1:0x%x\n", MPLL_CON1);
}

void debug_clock_leftbus()
{
	printf("LEFTBUS:\n");
	printf("CLK_SRC_LEFTBUS:0x%x\n",      CLK_SRC_LEFTBUS);
	printf("CLK_MUX_STAT_LEFTBUS:0x%x\n", CLK_MUX_STAT_LEFTBUS);
	printf("CLK_DIV_LEFTBUS:0x%x\n",      CLK_DIV_LEFTBUS);
	printf("CLK_DIV_STAT_LEFTBUS:0x%x\n", CLK_DIV_STAT_LEFTBUS);
	printf("CLK_GATE_IP_LEFTBUS:0x%x\n",  CLK_GATE_IP_LEFTBUS);
	printf("CLK_GATE_IP_IMAGE:0x%x\n",    CLK_GATE_IP_IMAGE);
	printf("CLKOUT_CMU_LEFTBUS:0x%x\n",   CLKOUT_CMU_LEFTBUS);
	printf("CLKOUT_CMU_LEFTBUS_DIV_STAT:0x%x\n", CLKOUT_CMU_LEFTBUS_DIV_STAT);
	printf("CLK_SRC_LEFTBUS:0x%x\n",      CLK_SRC_LEFTBUS);
}

void debug_clock_rightbus()
{
	printf("RIGHTBUS:\n");
	printf("CLK_SRC_RIGHTBUS:0x%x\n",      CLK_SRC_RIGHTBUS);
	printf("CLK_MUX_STAT_RIGHTBUS:0x%x\n", CLK_MUX_STAT_RIGHTBUS);
	printf("CLK_DIV_RIGHTBUS:0x%x\n",      CLK_DIV_RIGHTBUS);
	printf("CLK_DIV_STAT_RIGHTBUS:0x%x\n", CLK_DIV_STAT_RIGHTBUS);
	printf("CLK_GATE_IP_RIGHTBUS:0x%x\n",  CLK_GATE_IP_RIGHTBUS);
	printf("CLK_GATE_IP_PERIR:0x%x\n",     CLK_GATE_IP_PERIR);
	printf("CLKOUT_CMU_RIGHTBUS:0x%x\n",   CLKOUT_CMU_RIGHTBUS);
	printf("CLKOUT_CMU_RIGHTBUS_DIV_STAT:0x%x\n", CLKOUT_CMU_RIGHTBUS_DIV_STAT);
}

void debug_clock_cpu()
{
	printf("CPU:\n");
	printf("CLK_SRC_CPU:0x%x\n",       CLK_SRC_CPU);
	printf("CLK_MUX_STAT_CPU:0x%x\n",  CLK_MUX_STAT_CPU);
	printf("CLK_DIV_CPU0:0x%x\n",      CLK_DIV_CPU0);
	printf("CLK_DIV_CPU1:0x%x\n",      CLK_DIV_CPU1);
	printf("CLK_DIV_STAT_CPU0:0x%x\n", CLK_DIV_STAT_CPU0);
	printf("CLK_DIV_STAT_CPU1:0x%x\n", CLK_DIV_STAT_CPU1);
	printf("CLK_GATE_IP_CPU:0x%x\n",   CLK_GATE_IP_CPU);
	printf("CLKOUT_CMU_CPU:0x%x\n",    CLKOUT_CMU_CPU);
	printf("CLKOUT_CMU_CPU_DIV_STAT:0x%x\n",  CLKOUT_CMU_CPU_DIV_STAT);
}

void debug_clock_dmc()
{
	printf("DMC:\n");
	printf("CLK_SRC_DMC:0x%x\n",       CLK_SRC_DMC);
	printf("CLK_SRC_MASK_DMC:0x%x\n",  CLK_SRC_MASK_DMC);
	printf("CLK_MUX_STAT_DMC:0x%x\n",  CLK_MUX_STAT_DMC);
	printf("CLK_DIV_DMC0:0x%x\n",      CLK_DIV_DMC0);
	printf("CLK_DIV_DMC1:0x%x\n",      CLK_DIV_DMC1);
	printf("CLK_DIV_STAT_DMC0:0x%x\n", CLK_DIV_STAT_DMC0);
	printf("CLK_DIV_STAT_DMC1:0x%x\n", CLK_DIV_STAT_DMC1);
	printf("CLK_GATE_IP_DMC0:0x%x\n",  CLK_GATE_IP_DMC0);
	printf("CLK_GATE_IP_DMC1:0x%x\n",  CLK_GATE_IP_DMC1);
	printf("CLKOUT_CMU_DMC:0x%x\n",    CLKOUT_CMU_DMC);
	printf("CLKOUT_CMU_DMC_DIV_STAT:0x%x\n",  CLKOUT_CMU_DMC_DIV_STAT);
}

