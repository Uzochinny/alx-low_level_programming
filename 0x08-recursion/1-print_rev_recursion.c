#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints character in reverse
 * @s: Pointer to string
 *
 * Return: zero
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}

