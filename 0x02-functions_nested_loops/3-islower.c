#include "main.h"

/**
 * _islower - function to print lower case alpha
 *
 * @c: parameter that is printed
 *
 * Return: 1 if lower and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
