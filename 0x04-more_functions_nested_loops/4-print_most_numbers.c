#include "main.h"
/**
 * print_most_numbers - prints the numbers 0-9 exclusing 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		if (j != '2' && j != '4')
			_putchar(j);
	}
	{
		_putchar('\n');
	}
}
