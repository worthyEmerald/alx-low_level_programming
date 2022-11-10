#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Character to write
 *
 * Return: On Success 1 else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
