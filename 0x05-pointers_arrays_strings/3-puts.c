#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a new string
 * @*str: the string pointer to print
 * @str: the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
