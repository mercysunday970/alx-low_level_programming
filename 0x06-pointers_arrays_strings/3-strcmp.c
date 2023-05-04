#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings
 * @s1: characters to compare
 * @s2: Another character to compare
 *
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
