#include <stdio.h>

/**
* main - Entry point
*
* Return: Always zero (Success)
*/

int main(void)
{

	char c;
	int i;
	float f;

	printf("Size of a char: %lu. byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu. byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %ld. byte(s)\n", (long)sizeof(i));
	printf("Size of a long long int: %lld. byte(s)\n", (long long)sizeof(i));
	printf("Size of a float: %lu. \n", (unsigned long)sizeof(f));

	return (0);
}
