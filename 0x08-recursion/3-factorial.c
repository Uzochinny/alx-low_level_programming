#include "main.h"
#include <stdio.h>

/**
 * factorial - what to calculate
 * @n: number to be calculated
 * Return: value
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
	return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

