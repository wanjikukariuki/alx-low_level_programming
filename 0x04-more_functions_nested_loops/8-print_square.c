#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 * Return: 0
 */
void print_square(int size)
{
	int k, l;

	for (k = 0; k < size; k++)
	{
		for (l = 0; l < k; l++)
		{
			_putchar('#');
		}
		if (k < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
