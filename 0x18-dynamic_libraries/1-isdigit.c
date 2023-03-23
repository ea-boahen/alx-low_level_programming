#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if character is digit
 * @c: takes input to function
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	int value;

	if (isdigit(c))
		value = 1;
	else
		value = 0;

	return (value);
}
