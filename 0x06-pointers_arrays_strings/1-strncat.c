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
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i];
	return (dest);
}
