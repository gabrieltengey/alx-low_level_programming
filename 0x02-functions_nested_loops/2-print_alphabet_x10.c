#include "main.h"

/**
 *print_alphabet_x10 - print alphabet
 *
 *Return: 0
 */

void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{

			_putchar(alpha);
		}
		_putchar('\n');
	}

}

