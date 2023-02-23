#include "main.h"


/**
 *more_numbers - pring numbers from 0-14
 *
 *Return: always 0
 */

void more_numbers(void)
{
	int i, j;

	i = 0;

	while (i < 15)
	{
		j = 0;

		while (j < 15)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
