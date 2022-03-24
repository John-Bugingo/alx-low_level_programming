#include <stdio.h>
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		printf("%d", i);
		i++;

		if (i != 58)
		{
			printf(", ");
		}

	}
	printf("%c\n", i);
	return (0);
}
