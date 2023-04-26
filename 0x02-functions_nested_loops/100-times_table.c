#include "main.h"
/**
 * print_times_table - Prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}
	int a, b, op;

		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				op = a * b;

				if (op > 99)
				{
					continue;
				}
				if (b > 0)
				{
					_putchar(' ');
				}
				if (op < 10)
				{
					_putchar(' ');
				}
				_putchar((op / 10) + '0');
				_putchar((op % 10) + '0');
				if (b < n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
}
