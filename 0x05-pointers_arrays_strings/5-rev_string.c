#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s : character input to function
 * Return: void.
 */
void rev_string(char *s)
{
	int x;
	char tmp;
	int c = strlen(s);

	for (x = c - 1; x >= c / 2; x--)
	{
		tmp = s[x];
		s[x] =  s[c - x - 1];
		s[c - x - 1] = tmp;
	}
}
