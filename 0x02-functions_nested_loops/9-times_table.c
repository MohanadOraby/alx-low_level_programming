#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i;
	int j;
	int result;


	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			
			if (j == 0)
			{
				_putchar(j + '0');
				_putchar(',');
			}
			else if (result <= 9)
			{
				 if (j == 9)
                                {
                                        _putchar(' ');
                                        _putchar(' ');
                                        _putchar(result + '0');
                               	}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((result + '0'));
					_putchar(',');
				}
			}
			else
			{
				if (j == 9)
				{
					_putchar(' ');
					_putchar((result/10) + '0');
					_putchar((result%10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((result/10) + '0');
					_putchar((result%10) + '0');
					_putchar(',');
				}
			}
		}
	_putchar('\n');
	}
}
