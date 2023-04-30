#include <stdio.h>

/**
 * main - program execution begins here.
 * the program prints its name followed by a newline
 * @argc: number of command line arguments
 * @argv: pointer to strings passed on the command line
 *
 * Return: (0) on success
 */


int main(int argc, char *argv[])
{

	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);

}
