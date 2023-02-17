#include <stdio.h>


/**
 *main - start point
 *
 *Description: using the main fucntion,
 * this program will print single digits,
 *separated with comma and whitespace.
 *
 *Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar('0' + ch);
		if (ch < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);

}
