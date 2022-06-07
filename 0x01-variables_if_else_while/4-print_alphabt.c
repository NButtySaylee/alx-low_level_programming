#include <stdio.h>
/**
 * main - Entry point
 *
 * putchar - print all alphabet except e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e')
			continue;

		else if (alpha == 'q')
			continue;

		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
