#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers -a function that prints numbers
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers_printed;
	unsigned int i;

	va_start(numbers_printed, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers_printed, int));
		if (separator && i < n - 1)
			{
				printf("%s", separator);
			}
	}
	putchar('\n');
}
