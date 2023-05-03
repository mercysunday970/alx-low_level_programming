#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the string length
 * @*s: The pointer to string length
 * @s: The string length to be returned
 *
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
