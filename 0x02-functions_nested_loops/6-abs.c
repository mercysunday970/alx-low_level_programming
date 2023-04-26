#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute
 * value of an integer
 *
 * @i: the number as an integer
 *
 * Return: the absolute value
 */
int _abs(int i)
{
	if (i < 0)
	{
	int abs_val;

	abs_val = i * -1;
	return (abs_val);
	}
	return (i);
}
