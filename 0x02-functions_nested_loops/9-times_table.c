#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int e, f, i, j, k;

	for (e = 0; e <= 9; e++)
	{
	for (f = 0; f <= 9; f++)
	{
	i = e * f;
	if (i > 9)
	{
	j = i % 10;
	k = (i - j) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(k + '0');
	_putchar(j + '0');
	}
	else
	{
	if (f != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(i + '0');
	}
	}
	_putchar('\n');
	}
}
