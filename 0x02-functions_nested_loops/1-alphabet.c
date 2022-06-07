#include "main.h"

/**
 * print_alpha - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alpha(void)
{
	char alp;

	alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}

	_putchar('\n');
}
