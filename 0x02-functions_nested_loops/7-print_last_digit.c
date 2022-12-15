#include "main.h"

/**
 * print_last_digit - prints alphabets
 * Description: program prints alphabets
 * @d: takes input to function
 * Return: Always 0 (Success)
 */
int print_last_digit(int d)
{
	int i = d % 10; 
	if (i < 0)
		i *= -1;

	_putchar(i + '0');

	return (i);
}
