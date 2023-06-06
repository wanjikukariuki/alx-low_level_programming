#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int bit_value = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			bit_value = (bit_value << 1);

		else if (b[i] == '1')
			bit_value = (bit_value << 1) | 1;

		else
			return (0);
	}
	return (bit_value);
}
