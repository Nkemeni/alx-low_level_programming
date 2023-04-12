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
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: size of the array
 * @c: the character that will used to initialize the array
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup() - a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
 * @str: pointer to string
 * 
 * Return: NULL if str = NULL or On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
 */
char *_strdup(char *str);

/**
 * str_concat - concatenates two strings.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * 
 * Return: returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated, NULL on failure
 */
char *str_concat(char *s1, char *s2);


int **alloc_grid(int width, int height);


void free_grid(int **grid, int height);


char *argstostr(int ac, char **av);



char **strtow(char *str);





#endif
