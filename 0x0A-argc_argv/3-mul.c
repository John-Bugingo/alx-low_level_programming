#include <stdlib.h>
#include <stdio.h>
/**
 * main - a function that prints a multiples of two numbers.
 * @argc: a counter
 * @argv: an array
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int mult = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else

		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}

	printf("%d\n", mult);
	return (0);
}
