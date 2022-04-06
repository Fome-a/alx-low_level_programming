#include "main.h"
#include <stdlib.h>
/**
 * main - create an array of chars
 *
 * Return: Null if size=0 or Null if it fails
 *
 */

char *creat_array (unsigned int size, char c)
{
	unsigned int i;
	char c;
	char *cr;

	i = 0;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size)
	
	if (cr == 0)
		return (NULL);
	for(i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}

