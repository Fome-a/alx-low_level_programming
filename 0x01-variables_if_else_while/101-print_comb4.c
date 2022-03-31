#include <stdio.h>

/**
 * main - prints all possible combinations of 3 digits
 * Return : always 0 (success)
 */

int main(void)
{
	int i, j, k;

	for (i = '0'; i < '8'; i++)
	{
		for (j = '1'; j < '9'; j++)
		{
			for (k = '2'; k <= '9'; k++)
			{
				if (j != k && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == '7' && j == '8' && k == '9')
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
