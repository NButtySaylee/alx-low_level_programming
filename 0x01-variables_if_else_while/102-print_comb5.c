#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int firstNums, secNums;


	for (firstNums = 0; firstNums < 100 ; firstNums++)
	{
		for (secNums = firstNums + 1 ; secNums < 100; secNums++)
		{
			putchar (firstNums / 10 + '0');
			putchar (firstNums % 10 + '0');

			putchar (' ');

			putchar (secNums / 10 + '0');
			putchar (secNums % 10 + '0');

			if (firstNums == 98 && secNums == 99)
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
