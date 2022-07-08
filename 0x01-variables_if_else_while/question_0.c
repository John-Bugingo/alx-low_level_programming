#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - varible that stores a value
 * Return: 0
 */
int main(void)
{
	srand(time(0));

	if (rand() < 0)
		printf("%d is negative\n", rand());
	else if (rand() == 0)
		printf("%d is zero\n", rand());
	else
		printf("%d is positive\n", rand());
	return (0);
}
