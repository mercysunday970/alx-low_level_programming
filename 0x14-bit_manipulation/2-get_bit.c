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
	int i;
	if (index > 63)
		return (-1);
	i = (n >> index) & 1;
	return (i);
}
