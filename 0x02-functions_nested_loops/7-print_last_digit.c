#include "main.h"

/**
 * print_last_digit - Prints the last digit
 *
 * Return: the value of the last digit
 */
int print_last_digit(int)
{
	int c;
	print_last_digit(98);
	print_last_digit(0);
	c = print_last_digit(-1024);
	_putchar('0' + c);
	_putchar('\n');
	return (0);
}
