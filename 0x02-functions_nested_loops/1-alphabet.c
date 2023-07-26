#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

int main(void)
{
	char letter = 'z';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
