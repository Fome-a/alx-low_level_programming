#include <stdio.h>

/**
* main entry point 
* print out lowercase and then uppercase letters
* always return 0(success)
*/ 
int main (void)
{
	char ch;
	for(ch = 'a', ch = 'A';ch <= 'z'|| ch <= 'Z';ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}	
