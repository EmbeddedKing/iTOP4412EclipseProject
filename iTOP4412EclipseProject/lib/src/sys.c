/*
 * sys.c
 *
 *  Created on: 2018��6��2��
 *      Author: EmbeddedKing
 */

#include "sys.h"

inline void delay_ms(unsigned int x)
{
	unsigned int i, j;
	for (i = 0; i < x; i++)
		for (j = 0; j < 1800; j++);
}
