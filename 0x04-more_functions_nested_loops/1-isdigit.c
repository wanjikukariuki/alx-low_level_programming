#include "main.h"
/**
 * _isdigit - writes a function that checks for a digit between 0 to 9
 * @c: input number
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
