#include <stdio.h>
#include <unistd.h>

/**
 * main - print string without using puts or printf
 *
 * Return: 1 if successfull
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
