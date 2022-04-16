#include <stdio.h>
/**
 * main - main function
 * @argc: is a counter
 * @argv: is an array of a string
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

