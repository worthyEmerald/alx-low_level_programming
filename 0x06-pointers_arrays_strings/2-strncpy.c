#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination for result
 * @src: source of code
 * @n: number of bytes to be copied from src.
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
