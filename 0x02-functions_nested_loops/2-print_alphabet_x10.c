#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
        char letter = 'a';
	int i;

	for(i = 0; i < 10; i++)
	{
	        while (letter <= 'z')
	        {
        	        _putchar(letter);
	                letter++;
	        }
        _putchar('\n');
	}
}
