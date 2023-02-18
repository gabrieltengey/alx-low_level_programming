#include <stdio.h>

/**
 *main - start point
 *
 *Description: using the main function,
 *this program will print all possible different
 *combinations of all digits, separated with comma and space.
 *
 *Return: 0
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar('0' + num1);
			putchar('0' + num2);
			if (num1 == 8 && num2 == 9)
			{
				continue;
			}
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
