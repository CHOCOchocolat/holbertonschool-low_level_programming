#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	for (i = 0; i < 6; i++)
		putchar((i % 6) + 'a');
	putchar('\n');
	return (0);
}
