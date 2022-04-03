#include <stdio.h>
/**
 * main - print different combinations of two digits
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 98; i++)
	{
		for (j = 0; j < 99; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				puthcar(',');
				if (i == 98 && j == 99)
				{
					break;
				}
			}
		}
	}

}

