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
	int i;

	i = _abs(-1);
	printf("%d\n", i);
	i = _abs(0);
	i = _abs(1);
	i = _abs(-98);
	return (0);
}
