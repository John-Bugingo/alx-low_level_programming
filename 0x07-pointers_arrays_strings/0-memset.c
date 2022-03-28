#include "main.h"
#include <stdio.h>
char *_memset(char *s, char b, unsigned int n)
{
/**_memset - prints constant bytes
 * @s : the address of memmory to print
 *
 * Return: a pointer to the pointer s.
 */
 
	for (int i = 0; i<n; i++){
		if (i%10)
			{
			_putchar((" ");
			}
		if (!(i % 10) && i)
			{
			_putchar("\n");

			}
		_putchar("0x%02x", s[i]);
	}
	_putchar("\n");

}
/** main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
char s[98] = "b";
_memset(s,98);
_putchar("-");
_putchar("\n");
_memset(s,98);
return (0);
}
