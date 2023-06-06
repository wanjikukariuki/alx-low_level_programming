#include "main.h"

/**
 * set_bit - sets a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index of the bit to set to
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
