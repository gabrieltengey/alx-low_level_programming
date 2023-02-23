#include "main.h"

/**
 *_isupper - check if character is uppercase.
 *
 *@c: holds the value;
 *
 *Return: result
 */

int _isupper(int c)
{
	int result;

	if (isupper(c))
	{
		result = 1;
	} else
	{
		result = 0;
	}

	return (result);
}
