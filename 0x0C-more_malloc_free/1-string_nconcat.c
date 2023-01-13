#include <stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat- prints a string recursively
 * @s1: string to be printed recursively
 * @s2: second string
 * @n: size to be added 
 *
 * Return: void.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size = _strlen(s1) + n + 1;
	int number = n, i = 0, j = 0;
	char *s;

	if ( s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) /* account for negative n bytes */
		return (NULL);
	if (num >= _strlen(s2)) /* account for n too big */
		num = _strlen(s2);

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++) /* concat */
		s[i] = s1[i];
	for (j = 0; j < number; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';
	return (s);
}
