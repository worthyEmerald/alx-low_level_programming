#include "main.h"

/**
 * _isdigit - checks if there's a number between 0 - 9
 * @c: input character
 * Return: 1 if true else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
