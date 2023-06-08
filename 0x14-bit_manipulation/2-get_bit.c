#include "main.h"
#include <stdio.h>

/**
 * get_bit - return the value of a bit
 * at a given index
 * @index: is the index
 * @n: the bit
 * 
 * Return:the value of the int at the index
 * if error, -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return(-1);

	if ((n & (1 << index)) == 0)
		return(0);

	return(1);
}
