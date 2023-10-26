#include "main.h"
#include <stdio.h>

/**
 * get_bit - return the value of a bit
 * at a given index
 * @index: is the index
 * @n: the bit
 * 
 * Return:the value of the bit at the index
 * if error, -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
