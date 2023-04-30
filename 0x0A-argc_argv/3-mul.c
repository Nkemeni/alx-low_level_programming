#include <stdio.h>
#include <stdlib.h>
/**
 * main - program execution begins here.
 * the program multiples two integer numbers received from the commandline
 * and prints the result followed by a newline
 * @argc: number of command line arguments
 * @argv: pointer to strings passed on the command line
 *
 * Return: (0) on success
 */


int main(int argc, char *argv[])
{
	int product;

	product = 0;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
