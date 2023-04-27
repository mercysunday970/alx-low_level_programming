#include <stdio.h>

/**
 * main - find and print the su of even- valued terms
 *
 * Return: Alway s0
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while ((k + j) < 4000000)
	{
	k += j;
	if (k % 2 == 0)
	sum += k;
	k = j -k;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}
