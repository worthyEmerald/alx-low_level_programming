#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: source adress.
 * @to: target adress.
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
