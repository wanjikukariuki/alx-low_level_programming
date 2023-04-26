#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: first interger to be swapped
 * @b: second interger to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
