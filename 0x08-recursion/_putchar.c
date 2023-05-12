#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the character
 * @c: the character to print
 *
 * Return: On success 1, On error
 * set appropriately
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
