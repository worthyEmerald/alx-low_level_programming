#include "main.h"

/**
 * _abs - Checks the absolute value of integer
 * @a:The integer to be checked
 * Return: returns the absvalue.
 */
int _abs(int a)
{
	int k = a;
	int absvalue;

	if (k < 0)
	{
		k = k * (-1);
	}
	absvalue = k;
	return (absvalue);
}
