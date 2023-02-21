#include "main.h"
#include <ctype.h>

/**
 *_isalpha - check for alphabets in string
 *
 *@c: holds the value
 *
 *Return: 0
 */
int _isalpha(int c)
{
	int result;

	if (isalpha(c))
	{
		result = 1;
	} else
	{
		result = 0;
	}

	return (result);
}

