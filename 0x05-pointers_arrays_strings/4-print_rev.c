#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @*s: pointer to print
 * @s: character to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int o;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (o = i; o > 0; o--)
	{
		_Putchar(*s);
		s--;
	}
	_putchar('\n');
}
