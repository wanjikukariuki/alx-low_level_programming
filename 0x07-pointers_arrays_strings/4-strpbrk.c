#include "main.h"
/**
 * _strpbrk - searches a sring for any of a set of bytes
 * @s: pointer of a string
 * @accept: the string
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
