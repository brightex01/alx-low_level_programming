#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * @c: c is an ascii character
 *
 *  Return: 1 if lowercase
 */
void test_islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
