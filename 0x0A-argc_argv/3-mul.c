#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints number of args
 * @argc: size
 * @argv: string
 *
 * Return: if error 0
 *			eles 1.
 */
int main(int argc, char *argv[])
{
	int i, sum = 1;

	for (i = 1; i < argc; i++)
		sum = sum * atoi(argv[i]);
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", sum);
		return (0);
	}
	return (0);
}
