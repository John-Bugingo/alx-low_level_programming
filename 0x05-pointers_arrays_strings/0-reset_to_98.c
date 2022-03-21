#include <main.h>
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
int n = 402;
int *p = &n;
*p = 98;
return n;
}
