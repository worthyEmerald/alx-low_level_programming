#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (Always)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	if (i == 'e' || i == 'q')
		continue;
	}
	putchar('\n');
	return (0);
}
