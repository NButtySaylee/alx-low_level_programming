#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 1, b = 2, c, total = 0;

	while (b < 4000000)
	{
		if (b % 2 == 0)
		{
			total += b;
			c = b;
			b += a;
			a = c;
		}
	}

	printf("%d\n", total);
	return (0);
}
