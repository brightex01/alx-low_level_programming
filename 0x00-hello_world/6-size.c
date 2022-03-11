#include <stdio.h>

 /**
  * main - print the string in the put function
  * Description: using the main function
  * this program prints "Programming is likr building a multilingual puzzle"
  * Return: Always 0
  */

int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of a char: %ld byte(s)\n", sizeof(acharacter));
	printf("Size of an int: %ld byte(s)\n", sizeof(ainteger));
	printf("Size of a long int: %ld byte(s)\n", sizeof(along));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(alonglong));
	printf("Size of a float: %ld byte(s)\n", sizeof(afloat));

	return (0);
}
