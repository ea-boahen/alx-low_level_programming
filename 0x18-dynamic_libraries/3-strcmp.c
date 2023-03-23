#include "main.h"
#include <string.h>

/**
 * _strcmp - resets value of n to 98
 * @s1: destination string
 * @s2: source string
 *
 * Return: void.
 */
int _strcmp(char *s1, char *s2)
{
	/*declare variables*/
	int i = 0;
	int s = 0;
	int x = 0;

	/*check for the longest string*/
	if (strlen(s1) < strlen(s2))
		s = strlen(s2);
	else
		s = strlen(s1);

	/*add characters in source to destination*/
	for (i = 0; i < s; i++)
	{
		if (s1[i] != s2[i])
		{
			x = s1[i] - s2[i];
			break;
		}
	}
	return (x);
}
