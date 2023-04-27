#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int k, fpo;

	k = 612852475143;
	for (po = 2; po <= k; po++)
	{
		if (k % po == 0)
		{
			n /= po;
			po--;
		}

	}
	printf("%ld\n", po);
	return (0);
}
