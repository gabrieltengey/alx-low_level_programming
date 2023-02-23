#include "main.h"
#include <ctype.h>

/**
 *_isdigit - check if input is digit
 *
 *@c: holds input value
 *
 *Return: result
 */


int _isdigit(int c)
{
	int result;

	if (isdigit(c))
	{
		result = 1;
	} else
	{
		result = 0;
	}

	return (result);
}
