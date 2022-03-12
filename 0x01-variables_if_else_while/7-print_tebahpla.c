#include <stdio.h>

/**
 * main - print the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ralp[26] = "zyxwvutsrqponmlkjihgfedcba";
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(ralp[n]);
	}
	putchar('\n');
	return (0);
}
