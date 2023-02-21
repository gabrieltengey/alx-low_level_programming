#include "main.h"

/**
 *print_sign - print signs
 *
 *@n: holds value
 *
 *Return: 0
 *
 */

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar(43);
		result = 1;
	} else if (n == 0)
	{
		_putchar(48);
		result = 0;
	} else
	{
		_putchar(45);
		result = -1;
	}

	return (result);

}
