#include "main.h"
#include <stdio.h>

/**
 * _isdigit: Prints digits 0-9
 * @c: The integer to print
 *
 * Retrun; 1 if c is a digit 0-9
 * 0 if it is not
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
