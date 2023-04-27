#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: character being checked
 * Return: return 1 if c is uppercase and return 0 if otherwise
 */
int _isupper(char c)
{
	if (c >= 65 && c <= 90)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
