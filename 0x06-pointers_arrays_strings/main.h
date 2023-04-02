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
 * _strcat - concatenates two strings by appending the souce to the destination
 * @src: the pointer to the source string
 * @dest: the pointer to the destination string
 *
 * Return: the pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src);



/**
 * _strncat - appends n bytes fro the source string to the destination string
 * @src: the pointer to the source string
 * @dst: the pointer to the destination string
 *
 * Return: the pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n);



/**
 * _strncpy - copies n bytes from the source string into the destination string
 * @src: string from which n bytes will be copied from
 * @dest: string from which the copied n bytes will be placed into
 *
 * Return: the resulting destination string
 */
char *_strncpy(char *dest, char *src, int n);



/**
 * _strcmp - compares two strings
 * @src: the source string
 * @dest: the destiantion string
 *
 * Return: zero if the two strings are not the same otherwise a positive number is returned
 */
int _strcmp(char *s1, char *s2);


/**
 * reverse_array - reverses all n elements in an array
 * @a: the array to be revered
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n);


/**
 * string_toupper - changes all lower case letters in a string to upper case
 * @s: pointed to string which needs to undergo the conversion
 *
 * Return: the converted string
 */
char *string_toupper(char *);


/**
 * cap_string - capitalizes all characters in a string
 * @str: the pointer to the string to be capitalized
 *
 * Return: the capitalized string
 */
char *cap_string(char *);



/**
 * leet - encodes a strig into 1337
 * @a: pionter of string to be encoded
 *
 * Return: pointer of the encoded string
 */
char *leet(char *);


char *rot13(char *);

void print_number(int n);

char *infinite_add(char *n1, char *n2, char *r, int size_r);

void print_buffer(char *b, int size);


#endif
