#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print lower and uppercase letters
 * Return 0 (Success)
 */
int main(void)
{
	char alp[52] = "a-zA-Z";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
