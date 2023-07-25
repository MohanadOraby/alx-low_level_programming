#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 25; i > -1; i--)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
