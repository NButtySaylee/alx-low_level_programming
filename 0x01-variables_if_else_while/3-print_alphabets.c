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
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	putchar(alp);
	putchar("%c", toupper(alp));
	putchar('\n');
	return (0);
}
