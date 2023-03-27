#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: the pointer to the first integer
 * @b: the pointer to the second integer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
