#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1
 * at a give index
 * @index: the index to set value at
 * @n: a pointer to the bit
 *
 * Return: on success 1. on error -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
