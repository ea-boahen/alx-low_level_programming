#include <stdio.h>

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int m = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			m += i;
		if (i % 5 == 0)
			m += i;
	}
	printf("%d\n", m);
	return (0);
}
