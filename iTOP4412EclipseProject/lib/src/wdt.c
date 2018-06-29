#include "wdt.h"

inline void wdt_init()
{
	/* 关闭定时器，给寄存器写权限 */
	WDT.WTCON &= ~(0x01 << 5);

	/* 设置第一次预分频 */
	WDT.WTCON &= ~(0xff << 8);
	WDT.WTCON |= (249 << 8);

	/* 设置第二次预分频 */
	WDT.WTCON &= ~(0x03 << 3);
	WDT.WTCON |= (0x02 << 3);

	/* 开启复位 */
	WDT.WTCON |= (0x01 << 2);
	WDT.WTCON |= (0x01 << 0);

	/* 开启定时器 */
	WDT.WTCON |= (0x01 << 5);
}
