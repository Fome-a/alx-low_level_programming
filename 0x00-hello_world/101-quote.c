#include <stdio.h>

/**
 * main - print string without using puts or printf
 *
 * Return: 1 if successfull
 */

int main(void)
{
	int i;

	char ch[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (i = 0; i < 59; i++)
		putchar(ch[i]);
		putchar(\n);

	return (1);
}
