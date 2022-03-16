#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l)
		}
		_putchar('\n');
	}
}
