#include "main.h"
/**
 * _strlen_recursion - returns the lenght of of a string
 * @s: string to be measured
 * Return: lenght of a string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
