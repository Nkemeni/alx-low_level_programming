#include <stdio.h>
#include <stdlib.h>
/**
 * main - program execution begins here.
 * the program adds positive integer numbers received from the commandline
 * and prints the result followed by a newline
 * prints Error followed by a newline if one of the arguments is not a number
 * @argc: number of command line arguments
 * @argv: pointer to strings passed on the command line
 *
 * Return: (0) on success
 */


int main(int argc, char *argv[])
{
	int sum;
	int i;

	sum = 0;
	i = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc;  i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			
			sum = sum +  atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	if (argc == 1)
	{
		printf("%d\n", sum);
	}

	return (0);
}
	
