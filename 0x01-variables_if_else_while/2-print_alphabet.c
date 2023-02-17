#include <stdio.h>

/**
 *main - startig point oc c program
 *
 *Description: using the main function, this
 *program output alphabets from a-z in small caps
 *
 *Return: 0
 */

int main(void)
{
	int ch;

	for(ch ='a'; ch<='z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
