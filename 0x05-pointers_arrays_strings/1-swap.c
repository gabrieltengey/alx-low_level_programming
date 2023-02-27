#include "main.h"


/**
 *swap_int - swap two integers using pointer
 *
 *@a: holds the first int value
 *@b: holds the second int value
 *
 *Return: always 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;

}
