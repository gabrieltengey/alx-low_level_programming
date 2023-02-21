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
			_putchar(counter + '0');
			_putchar(',');
			_putchar(' ');

		}
	} else if (n > 98)
	{
		for (counter = n; n >= 98; counter--)
		{
			_putchar(counter + '0');
			_putchar(',');
			_putchar(' ');
		}
	} else
	{
		_putchar(n);
	}
}
