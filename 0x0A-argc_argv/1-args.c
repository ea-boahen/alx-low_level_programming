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
	(void)argv;
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
	return (0);
}
