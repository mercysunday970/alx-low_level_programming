#include "main.h"
#include <stdio.h>

/**
 * print_number - prints number 0-9, followed by newline
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
}
