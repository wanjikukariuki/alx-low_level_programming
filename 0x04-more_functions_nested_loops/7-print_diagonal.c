#include "main.h"
/**
 * print_diagonal - draws a diogonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(60);
	}
	_putchar('\n);
}
