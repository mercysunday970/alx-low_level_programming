#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: the number
 * @m: the number we flip n to
 *
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m, count = 0;

	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}

		return (count);
}
