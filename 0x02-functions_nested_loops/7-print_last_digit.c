#include "main.h"
/**
 * print_last_digit - prints the last digits of a number
 *@a: number to compute lat digit
 * Return: Last digit
 */
int print_last_digit(int a)
{
	int last_digit;

	last_digit = a % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);

}
