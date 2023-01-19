#include "function_pointers.h"

/**
 * print_name - checks if character is upper
 * @name: takes input to function
 * @f: function that prints name
 *
 * Return: void (Success)
 */

void print_name(char *name, void (*f)(char *c))
{
	if (f != NULL)
		f(name);
}
