#include <stdio.h>

/**
 * main - program execution begins here.
 * the program printsall arguments it receives
 * @argc: number of command line arguments
 * @argv: pointer to strings passed on the command line
 *
 * Return: (0) on success
 */


int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}

	return (0);

}
