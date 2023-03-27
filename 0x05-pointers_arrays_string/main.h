#ifndef main_h
#define main_h

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c);

/**
 * reset_to_98 - updates the value of the variable it points to to 98
 * @n: the pointer to the variable to be updated
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps the value of two integers
 * @a: the pointer to the first integer
 * @b: the pointer to the second integer
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string
 * @s: the string whose length is to be determine
 *
 * Return: the length of the string as an integer
 */
int _strlen(char *s);

/**
 * _puts - prints a string, followed by a newline
 * @str: string to be printed on the stdout
 */
void _puts(char *str);

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be printed in reverse order
 */
void print_rev(char *s);

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s);

/**
 * puts2 - prints every other character of string, starting with the first character, followed by a new line
 * @str: string to be printed
 */
void puts2(char *str);

/**
 * puts_half - prints half of a string followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str);

/**
 * print_array - print n elements of an array of integers, followed by a new line
 * @a: is the array passed to the function
 * @n: is the number of elements of the array to be printed
 */
void print_array(int *a, int n);

/**
 * _strcpy - copies  the string pointed by src to the string pointed by dest
 * @src: the source to copy data from
 * @dest: the destination to store the copied data
 *
 * Return: the string copied
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted to an integer
 *
 * Return: the integer value obtained from the conversion
*/
int _atoi(char *s);


#endif
