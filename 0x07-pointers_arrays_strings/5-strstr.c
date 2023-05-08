#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: pointer to the string
 * @needle: pointer to the substring
 * return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	char *p = haystack;

	while (*p != '\0')
	{
		if (*p == *needle)
		{
			char *q = p + 1;
			char *r = needle + 1;

			while (*r != '\0' && *q == *r)
			{
				q++;
				r++;
			}
			if (*r == '\0')
			{
				return (p);
			}
		}
		p++;
	}
	return (NULL);
}
