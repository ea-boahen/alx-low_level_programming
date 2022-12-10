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

	char ch = 'a';

	while (ch <= 'z')
	{
		printf("%c", ch);
		ch++;
	}
	printf("\n");
	return (0);
}
