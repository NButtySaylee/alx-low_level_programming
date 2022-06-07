#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * putchar - print the alphabet in lowercase except and upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
	putchar(alp);
	}

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
	putchar(upper);
	}

	putchar('\n');
	return (0);
}
