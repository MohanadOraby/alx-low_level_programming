#include<stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for(j = i + 1; j < 10; j++)
		{
			putchar(i);
			putchar(j);

			if(i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	
	return (0);
}
