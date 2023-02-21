#include "main.h"
#include <ctype.h>
/**
 *_islower - check if letter is lowercase or not
 *
 *@c: takes value
 *
 *Return: 0
 */

int _islower(int c)
{
	int result;

	if (islower(c))
	{
		result = 1;
	} else
	{
		result = 0;
	}

	return (result);

}
