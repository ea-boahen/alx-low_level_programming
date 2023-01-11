#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints number of args
 * @argc: size
 * @argv: string
 *
 * Return: character array.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	exit(EXIT_SUCCESS);
	return (0);
}
