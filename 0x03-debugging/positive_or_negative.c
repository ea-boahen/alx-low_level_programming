#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - checks if n is positive or negative
 *
 * Description: "checks if n is negative or positive"
 * 
 * @n: feeds input to function
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
