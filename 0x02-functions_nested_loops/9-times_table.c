#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table
 *
 * Return: void
 */


void times_table(void)
{
	int m;
        int a;
	int b;

	for (m = 0; m <= 9; m++)
	{
		for (a = 0; a <= 9; a++)
		{
			b = a * m;	
			if (b == 0)
				_putchar(b + '0');	
			else if (b <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(b + '0');																		}
			if(b > 9)
		      	{
				_putchar(',');
				_putchar(' ');						
				_putchar((b / 10) + '0');
				_putchar((b % 10) + '0');
			}
		}
		_putchar('\n');
	}
	return(0);
}
