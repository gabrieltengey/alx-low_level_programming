#include "main.h"
#include <string.h>


/**
 *print_rev - print string in reverse, followed by a new line;
 *
 *@s: holds the string;
 *
 *return: always 0.
 */
void print_rev(char *s)
{
	int len, c;

	len = strlen(s);

	for (c = len - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');

}
