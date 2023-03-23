#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if character is upper
 * @c: takes input to function
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	int value;
	char s = c;

	if (isupper(s))
		value = 1;
	else
		value = 0;

	return (value);
}
