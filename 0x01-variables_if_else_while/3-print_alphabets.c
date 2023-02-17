#include <stdio.h>

/**
 *main - starting point of c program
 *
 *Description: using the main function,
 *this program output alphabets in both
 *lower and upper case.
 *
 *Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);

}
