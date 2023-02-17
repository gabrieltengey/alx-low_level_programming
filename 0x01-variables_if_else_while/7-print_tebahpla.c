#include <stdio.h>

/**
 *main - start point
 *
 *Description: using the main function,
 *this program print alphabets in the opposite
 *direction
 *
 *Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
