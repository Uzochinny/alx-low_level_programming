#include "main.h"
/**
 * print_alphabet - function that prints alphabet in lower case
 *
 * Return: No return value since the function parameter is void
 */


void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
