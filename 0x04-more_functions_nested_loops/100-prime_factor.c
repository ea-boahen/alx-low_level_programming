#include <stdio.h>
#include <math.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long x;
	double sq = sqrt(612852475143);
	long isPrime;

	for (x = 2; x <= sq; x++)
	{
		if (612852475143 % x == 0)
		{
			isPrime = 612852475143 / x;
		}
	}
	printf("%ld\n", isPrime);

	return (0);
}
