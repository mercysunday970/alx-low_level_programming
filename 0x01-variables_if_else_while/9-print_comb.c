#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Single digits 
 *
 * Return: Always 0 (Successs)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
