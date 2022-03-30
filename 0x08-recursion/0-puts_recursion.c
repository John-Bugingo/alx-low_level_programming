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
	while (*s != "\0")
	{
		_putchar("%c", *s);
		*s++;
	}
	_putchar("\n");
}
void main(void)
{
	char word[50];
	gets(word);
	_puts_recursion(word);
	return (0);
}
