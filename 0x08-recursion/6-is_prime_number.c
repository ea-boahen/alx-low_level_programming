#include "main.h"

/**
 * divisors - number is prime?
 * @n: integer params
 * @m: integer params
 * Return: integer
 */
int divs(int a, int b)
{
	if (b % a == 0)
	{
		return (0);
	}
	else if (b / 2 > a)
	{
		return (divs(a + 2, b));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks for prime
 * @n: integer 
 *
 * Return: integer
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divs(3, n));
	}
}
