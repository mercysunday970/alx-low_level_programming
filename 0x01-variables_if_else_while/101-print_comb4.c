#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Combination of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, i;

	for (n = 48; n <= 58; n++)
	{
		for (m = 49; m <= 58; m++)
		{
			for (i = 50; i <= 58; i++)
			{
				putchar(n);
				putchar(m);
				putchar(i);
				if (n != 55 || m != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
