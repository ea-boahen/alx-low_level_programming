#include "variadic_functions.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings.
 * @format: string specifying format of printout
 *
 * Return: void (SUCCESS)
 */
void print_all(const char *format, ...)
{
	va_list args;
	char *str;
	int count = 0;
	int flen = strlen(format);

	va_start(args, format);

	while (*format && count < 9)
	{
		int i = 0;

		switch (*format++)
		{
			case 'i':
				printf("%d", va_arg(args, int));
				i = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				i = 1;
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				i = 1;
				break;
			case 's':
				str = va_arg(args, char*);

				if (str == NULL || str[0] == '\0')
				{
					printf("nill");
				}
				else
					printf("%s", str);
				i = 1;
				break;
			default:
				/*ignore other characters in format string*/
				break;
			}

		if (count < flen - 1 && i != 0)
			printf(", ");
		count++;
	}
	va_end(args);
	putchar('\n');
}
