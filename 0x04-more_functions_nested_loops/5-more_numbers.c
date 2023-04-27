#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 * Return: 0
 */
void more_numbers(void)
{
	int k, j;

		for (k = 0; k < 10; k++)
		{
			for (j = 0; j <= 14; j++)
			{
				if (j >= 10)
					_putchar((j / 10) + 48);
				_putchar((j % 10) + 48);
			}
			_putchar('\n');
	}
}
