i#include "main.h"

/**
 *_puts_recursion - a function that prints a string.
 *
 * @s:a varible that contain a string.
 * Return:returns values that is in s
 *
 */

void _puts_recursion(char *s)
{
	if (*s == "\0")
	{
		return;
	}
	else
	{
		_putchar("%c", *s);
	}
	_putchar("\n");
return (0);

}
