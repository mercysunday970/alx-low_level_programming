#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the content of an array
 * @a: integer of arrays
 * @n: integer of arrays
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
