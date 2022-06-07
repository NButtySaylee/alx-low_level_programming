#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numleft;
	int numright;


	for (numleft = 48; numright <= 78; numleft++)
	{
		for (numright = numleft + 1 ; numright <= 78; numright++)
		{
			putchar(numleft);
			putchar (numright);

			if ((numleft == 56) && (numright == 78))
			{
				break;
			}

			putchar(',');
			putchar (' ');
		}
	}
	putchar('\n');

	return (0);
}
