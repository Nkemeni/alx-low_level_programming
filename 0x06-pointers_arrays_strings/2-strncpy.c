/**
 * _strncpy - copies n bytes from the source string into the destination string
 * @src: pointer to string from which n bytes will be copied from
 * @dest: pointer string from which the copied n bytes will be placed into
 * @n: the number of bytes to be copied
 *
 * Return: the resulting destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
