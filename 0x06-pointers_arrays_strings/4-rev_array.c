#include main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return : 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int t;

	while (i < j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
}
