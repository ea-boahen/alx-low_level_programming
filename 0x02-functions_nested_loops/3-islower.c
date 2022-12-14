#include "main.h"
#include <ctype.h>

/**
 * _islower - checks if character is lower or upper
 * @c: takes input to function
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int value;

	if (islower(c))
		value = 1;
	if (!islower(c))
		value = 0;
	return (value);
}
