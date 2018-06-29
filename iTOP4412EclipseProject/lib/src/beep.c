#include "beep.h"

void beep_init()
{
	GPD0.CON = 0x01;
}

void beep_on()
{
	GPD0.DAT = 0x01;
}

void beep_off()
{
	GPD0.DAT = 0x00;
}
