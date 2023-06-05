#include "variadic_function.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that sums all the parameters
 * in a variadic function
 * @n: number of integers to sum
 *
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list l;

	va_start(l, n);

	for(i = 0; i < n; i++)
		sum += va_arg(l, int);

	va_end(l);

	return(sum);
}
