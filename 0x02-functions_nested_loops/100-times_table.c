#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: number times table
 * Return: 0
 */
void print_times_table(int n)
{
	int a, b, k;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; b++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
		{
			k = a * b;
			_putchar(44);
			_putchar(32);
			if (k <= 9)
			{
				_putchar(32);
				_putchar(32);
				_putchar(k + 48);
			}
			else if (k <= 99)
			{
				_putchar(32);
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}
			else
			{
				_putchar(((k / 100) % 10) + 48);
				_putchar(((k / 10) % 10) + 48);
				_putchar((k % 10) + 48);
			}
		}
			_putchar('\n');
		}
	}
}
