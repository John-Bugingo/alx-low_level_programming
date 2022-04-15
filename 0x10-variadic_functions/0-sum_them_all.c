#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - this is a function to add all numbers
 * @n : numbers to be added
 * Return: sum of the all numbesum of the all numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	int summation = 0;

	va_start(sum, n);
	for (i = 1; i <= n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			summation += va_arg(sum, int);
		}
	}
	va_end(sum);
	return (summation);
}
