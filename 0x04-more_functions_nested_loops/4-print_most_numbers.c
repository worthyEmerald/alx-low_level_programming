#include "main.h"

/**
 * print_most_numbers - print numbers between 0-9 except 2 & 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		if (ch != 50 && ch != 52)
			_putchar(ch);
	}
	_putchar('\n');
}
