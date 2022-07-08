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

	int n = rand() - RAND_MAX / 2;
	int l = n % 10;

	if (l > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, l);
	else if (l == 0)
		printf("the last digit of %d is %d and is zero\n", n, l);
	else if (l < 6 && l != 0)
		printf("the last digit of %d is less than 6 and not 0\n", n);
	return (0);
}
