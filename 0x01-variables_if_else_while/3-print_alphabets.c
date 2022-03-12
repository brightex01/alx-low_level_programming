#include <stdio.h>

/**
 * main - Orint alphabet in lowercase and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALP[26] = "ABCDEFGHIJKLMOPQRSTUVWXYZ";
	int i, l;

	for (i = 0; i < 26; i++)
	for (l = 0; l < 26; l++)
	{
		putchar(alp[i]);
		putchar(ALP[L]);
	}
	putchar('\n');
	return (0);
}

