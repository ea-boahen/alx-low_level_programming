#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - generates a password random strong
 *
 * Return: void.
 */
int main(void)
{
	char s[40];
	int c = 0;
	int tmp;

	srand(time(NULL));

	/** generate 5 random uppercase characters into string*/
	for (c = 0; c < 40; c++)
	{
		tmp = (rand() % (126 - 32 + 1)) + 32;
		s[c] = tmp;
	}
	/** print generated password*/
	printf("%s", s);
	return 0;

}
