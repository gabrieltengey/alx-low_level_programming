#include <stdio.h>

/**
 *main - starting point of c program
 *
 *Description: using the main function,
 *this program will print all single digit number.
 *
 *Return: 0
 */

int main(void)
{
	int a, b;

	b = 10;
	while (a < b)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
