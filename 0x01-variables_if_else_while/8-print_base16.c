#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char hexavalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexavalues[i]);
	}
	putchar('\n');
	return (0);
}
