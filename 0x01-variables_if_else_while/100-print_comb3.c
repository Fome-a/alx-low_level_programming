#include <stdio.h>

/**
 * main - prints numbers 01 to 89
 * Return: 0 always a success
 *
 */

int main(void)
{
	int e;
	int i;

	e = '0';
	i = '0';

	while (e < '9')
	{
		i = '0';
		while (i <= '9')
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == '8' && e == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
