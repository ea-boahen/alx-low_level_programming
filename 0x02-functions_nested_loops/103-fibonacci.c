#include <stdio.h>

/**
  * main - Prints the sum of Even Fibonacci numbers
  * less than 4000000.
  *
  * Return: Nothing!
  */
int main(void)
{
	int x = 0;
	long z = 1, m = 2, sum = m;

	while (m + z < 4000000)
	{
		m += z;

		if (m % 2 == 0)
			sum += m;

		z = m - z;

		++x;
	}

	printf("%ld\n", sum);
	return (0);
}
