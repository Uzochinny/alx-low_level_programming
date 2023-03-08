#include "main.h"
#include <stdio.h>

/**
 * factorial - computes the factorial of a number
 * @n: the number to compute the factorial of
 *
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
