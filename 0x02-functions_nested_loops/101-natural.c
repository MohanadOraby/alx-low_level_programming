#include "main.h"
#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int tmp;
	tmp = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i%3 == 0) || (i%5 == 0))
		{
			tmp = tmp + i;
		}
	}
	return (tmp);
}
