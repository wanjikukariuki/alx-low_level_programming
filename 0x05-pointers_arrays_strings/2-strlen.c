#include "main.h"
/**
 * _strlen - finds the lenght of a string
 * @s: string pointer to the string whose lenght is to be found
 * Return: returns the lenght of the string
 */
int _strlen(char *s)
{
	int p = 0;

	while (*(s + p)!= 0)
	{
		p++;
	}
	return (p);
}
