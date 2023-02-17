#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 *main - starting point of c program
 *
 *Description: using the main function,
 *this program print the last digit in a randomly
 *generated number.
 *
 *Return: 0
*/
int main(void)
{
	int ld;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	} else if ((ld < 6) && (ld != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	} else
		printf("Last digit of %d is %d and is 0\n", n, ld);
	return (0);
}
