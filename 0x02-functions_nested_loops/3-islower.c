#include "main.h"
/**
 * _islower - function that checks for lowercase characters
 * @c: character to check if it is lowercase
 * Return: 1 if c is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
		return (0);
	}
}
