#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar - print the alphabet in lowercase except and upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	putchar(alp);
	putchar(toupper(alp));
	putchar('\n');
	return (0);
}
