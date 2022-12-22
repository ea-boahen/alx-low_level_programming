#include "main.h"
#include <string.h>

/**
 * _strncat - resets value of n to 98
 * @dest: destination string
 * @src: source string
 * @n:number of characters from src to be added to dest
 *
 * Return: void.
 */
char *_strncat(char *dest, char *src, int n)
{
	/*declare variables*/
	int i = 0;
	int s = strlen(dest);

	/*add characters in source to destination*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[s + i] = src[i];

	/*append terminating null bite to destination*/
	dest[s + n + 1] = '\0';

	return (dest);
}
