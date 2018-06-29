#include "exynos_4412.h"
#include "sys.h"
#include "uart.h"
#include "debug.h"
#include "beep.h"
#include "wdt.h"

int main()
{
	uart_init();
	beep_init();
	debug_pll_mpll();
	wdt_init();

	while (1) {
		WDT.WTCNT = 3000;
		delay_ms(100);
	}
	return 0;
}
