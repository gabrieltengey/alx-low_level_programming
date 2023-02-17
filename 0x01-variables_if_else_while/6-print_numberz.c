#include <stdio.h>

/**
 *main - starting point
 *
 *Description: using the main function,
 *this program will print single digits.
 *
 *Return: 0
 */


int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
		putchar('0' + ch);
	putchar('\n');
	return (0);
}
