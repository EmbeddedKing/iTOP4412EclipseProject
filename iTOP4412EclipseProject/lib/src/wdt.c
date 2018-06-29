#include "wdt.h"

inline void wdt_init()
{
	/* �رն�ʱ�������Ĵ���дȨ�� */
	WDT.WTCON &= ~(0x01 << 5);

	/* ���õ�һ��Ԥ��Ƶ */
	WDT.WTCON &= ~(0xff << 8);
	WDT.WTCON |= (249 << 8);

	/* ���õڶ���Ԥ��Ƶ */
	WDT.WTCON &= ~(0x03 << 3);
	WDT.WTCON |= (0x02 << 3);

	/* ������λ */
	WDT.WTCON |= (0x01 << 2);
	WDT.WTCON |= (0x01 << 0);

	/* ������ʱ�� */
	WDT.WTCON |= (0x01 << 5);
}
