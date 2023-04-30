#include <stdio.h>

/**
 * main - program execution begins here.
 * the program prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: pointer to strings passed on the command line
 *
 * Return: (0) on success
 */


int main(int argc, char *argv[])
{

	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}

	return (0);

}
