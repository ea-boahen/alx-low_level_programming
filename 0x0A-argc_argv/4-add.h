#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main- prints number of args
 * @argc: size
 * @argv: string
 *
 * Return: character array.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (isdigit(atoi(argv[i])) || atoi(argv[i]) > 0)
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", sum);
	return (0);
}
