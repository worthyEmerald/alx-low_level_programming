#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n:Number to check its sign
 * Return: 1 if n is greater than 0, 0 if n is equals, -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n = 0);
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
