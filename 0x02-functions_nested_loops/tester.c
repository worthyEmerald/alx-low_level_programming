#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char f[10];

	printf("Where are you from?\n");

	scanf("%s", f);
	printf("Where are you from: %s.\n", f);
	return (0);
}
