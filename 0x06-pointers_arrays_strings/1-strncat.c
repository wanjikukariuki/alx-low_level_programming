#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: bytes from src
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	size_t i = 0;
	while (i < n && *src != '\0')
	{
		*ptr++ = *src++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}
