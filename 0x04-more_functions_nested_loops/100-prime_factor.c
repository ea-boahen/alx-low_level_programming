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
	long n = 612852475143;
	double sq = sqrt(n);
	long isPrime;

	for (x = 2; x <= sq; x++)
	{
		if (n % x == 0)
		{
			isPrime = n / x;
		}
	}
	printf("%ld\n", isPrime);

	return (0);
}
