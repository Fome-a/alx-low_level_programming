include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char i = 'A';
	int isupper = 0;

	while (i <= 'Z')
	{
		if (c == i)
			isupper = 1;
		i++;
	}

	return (isupper);
}
