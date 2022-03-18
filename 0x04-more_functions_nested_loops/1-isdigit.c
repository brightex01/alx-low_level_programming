#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character thats checks for digit
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	c = 9;

	for (c = 48; c < 57; c++)
	{
		printf("%d\n", c);
		return (1);
	}
	else
		return (0);
}
