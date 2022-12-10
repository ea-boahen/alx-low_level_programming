#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: "prints all alphabets"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int i = 0;
	char ch = 'a';

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
