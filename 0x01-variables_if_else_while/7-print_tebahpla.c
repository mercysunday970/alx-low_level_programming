#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print letters backwards
 *
 * Return: Always 0 (Success)
 */ 
int main (void)
{
	int ch = 122;

	while (ch >= 97)
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
