#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints alphabets
 * Description: program prints alphabets
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
