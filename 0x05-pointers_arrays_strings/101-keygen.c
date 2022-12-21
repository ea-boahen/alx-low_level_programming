#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char pass[84];
	int index = 0, sum = 0, p1, p2;

	srand(time(0));

	while (sum < 2772)
	{
		pass[index] = 33 + rand() % 94;
		sum += pass[index++];
	}

	pass[index] = '\0';

	if (sum != 2772)
	{
		p1 = (sum - 2772) / 2;
		p2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			p1++;

		for (index = 0; pass[index]; index++)
		{
			if (pass[index] >= (33 + p1))
			{
				pass[index] -= p1;
				break;
			}
		}
		for (index = 0; pass[index]; index++)
		{
			if (pass[index] >= (33 + p2))
			{
				pass[index] -= p2;
				break;
			}
		}
	}

	printf("%s", pass);

	return (0);
}
