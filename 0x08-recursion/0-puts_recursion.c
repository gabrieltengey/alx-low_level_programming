#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print string followed by a newline;
 *
 *@s: holds the string to be printed
 *
 *Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	_putchar(*s);
	_puts_recursion(s + 1);

	_putchar('\n');
}
