#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int c;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%d, %d, n1, n2);
	for (c = 0; c < 48; c++)
	{
		fn = n1 + n2;
		printf(",%d", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");
	return (0);
}
