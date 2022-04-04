#include "main.h"

/**
 * create_array - It is a function to create an array.
 * @size:size of string in an array.
 * @c:variable name for characters that will be printed.
 * Return:returns Null if size is 0 else return string.
 */
char *create_array(unsigned int size, char c)
{
	char arr[];
	if (sizeof(size) == 0)
	{
		return (NULL);
	}
	else
	{
		int i;
		for (i = 0; i < size; i++)
		{
			arr.append(c[i]);
		}
	}
	return (arr);y
}
