#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be printed in reverse order
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	i--;  /* Go to the character before the null character*/

	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}



