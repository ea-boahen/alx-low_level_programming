#include "variadic_functions.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings.
 * @separator: more like a delimiter
 * @n: number of args.
 *
 * Return: integer (SUCCESS)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	for (; i < n; i++)
	{
		char *s = va_arg(args, char*);

		if (strcmp(s, "") == 0)
			printf("nill");
		else
			printf("%s", s);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
