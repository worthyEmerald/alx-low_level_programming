#include "main.h"

/**
 * _islower - Checks to see if the character is lowercase
 * @c:character to check
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
