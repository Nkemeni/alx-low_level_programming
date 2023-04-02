#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses all n elements in an array
 * @a: the array to be revered
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int tmp[20];
	int i;
	int j;



	for (i = 0; i < n; i++)
	{
		tmp[i] = a[i];
	}

	for (i = 0, j = n - 1; i < n && j >= 0; i++, j--)
	{
		a[i] = tmp[j];
	}
}
