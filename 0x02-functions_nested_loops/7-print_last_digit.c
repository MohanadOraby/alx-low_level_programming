#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int j;

	j = n % 10;
	if (j < 0)
	{
		j = -j;
	}

	_putchar('0' + j);

	return (j);
}
