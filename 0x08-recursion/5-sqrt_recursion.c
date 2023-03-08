#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n, or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0 || n == 1)
	{
	return (n);
	}
	else
	{
	int root = _sqrt_recursion(n / 4) * 2;

	if (root * root <= n && (root + 1) * (root + 1) > n)
	{
	return (root);
	}
	else if (root * root > n)
	{
	return (-1);
	}
	else
	{
	return (root + 1);
	}
	}
}

