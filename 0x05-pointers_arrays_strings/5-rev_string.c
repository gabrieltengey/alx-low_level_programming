#include "main.h"
#include <string.h>


/**
 *rev_string - print string in reverse, followed by a new line;
 *
 *@s: holds the string;
 *
 *return: always 0.
 */
void rev_string(char *s)
{
	int len, c;

	len = strlen(s);

	for (c = len - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');

}
