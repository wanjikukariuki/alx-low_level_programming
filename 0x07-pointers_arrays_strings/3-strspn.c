#include "main.h"
/**
 * _strspn - function thst gets the lenght of a prfix substring
 * @s: input
 * @accept: input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s);
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
