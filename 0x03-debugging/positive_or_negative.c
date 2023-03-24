#include "main.h"
#include <stdio.h>

/**
 *main - checks the sign of an integer
 *Return: nothing to the calling function
 *@n: integer whose sign is to be checked
 */

void positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}

}
