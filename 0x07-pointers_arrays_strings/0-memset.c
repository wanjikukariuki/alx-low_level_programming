#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of a memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	char* p = s;

	for (unsigned int i = 0; i < n; i++)
	{
		*p++ = b;
	}
	return (s);
}
