#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the integers
 * @*a: the pointer to swap
 * @a: the integer to swap
 * @*b: the pointer to swap
 * @b: the integer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
