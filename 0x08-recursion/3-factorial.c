#include "main.h"
#include <stdio.h>

/**
 * factorial - is a function that returns a factorial
 * @n:is a number that will be targeted to find factorial
 * Return:returns factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
