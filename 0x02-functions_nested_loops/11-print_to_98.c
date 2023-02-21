#include "main.h"

/**
 *print_to_98 - function
 *
 *Description: count from n to 98
 *@n: represent the number
 *
 */

void print_to_98(int n)
{
	int counter;

	if (n < 98)
	{
		for (counter = n; n <= 98; counter++)
		{
			printf("%d, ", counter);

		}
	} else if (n > 98)
	{
		for (counter = n; n >= 98; counter--)
		{
			printf("%d, ", counter);
		}
	} else
	{
		printf("%d ", n);
	}
}
