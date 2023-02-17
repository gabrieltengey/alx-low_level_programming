#include <stdio.h>

/**
 *main - starting point of c program
 *
 *Description: using the main function,
 *this program prints all alphabets execept
 *'q' and 'e', all in lowercase
 *
 *Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch == 'e') || (ch == 'q'))
		{
			ch++;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
