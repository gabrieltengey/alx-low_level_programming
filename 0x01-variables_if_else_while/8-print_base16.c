#include <stdio.h>

/**
 *main - starting point
 *
 *Description: using the main function,
 *this program will pring all base 16 numbers
 *
 *Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
		putchar('0' + ch);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);

}
