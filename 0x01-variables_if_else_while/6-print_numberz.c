#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all single numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char num = "0123456789";

	for (i = 0; i < 10; i++)
	{
		putchar(num[i]);
	}
	putchar('\n');
	return (0);
}
