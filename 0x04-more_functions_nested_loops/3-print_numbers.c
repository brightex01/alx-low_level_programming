#include "main.h"

/**
 * print_numbers - print numbers, from 0 to 9
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	char num[9] = "0123456789";
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(num[i]);
	}
	_putchar('\n');
	return (0);

}
