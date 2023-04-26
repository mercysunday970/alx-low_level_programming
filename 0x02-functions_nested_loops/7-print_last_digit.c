#include "main.h"

/**
 * print_last_digit - Prints the last digit
 *
 * @c: the number as an integer
 *
 * Return: the value of the last digit
 */
int print_last_digit(int c)
{
	int i;

	i = c % 10;
	if (i < 0)
	{
	i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
