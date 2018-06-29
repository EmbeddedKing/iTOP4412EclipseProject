/*
 * sys.c
 *
 *  Created on: 2018Äê6ÔÂ2ÈÕ
 *      Author: EmbeddedKing
 */

#include "sys.h"

inline void delay_ms(unsigned int x)
{
	unsigned int i, j;
	for (i = 0; i < x; i++)
		for (j = 0; j < 1800; j++);
}
