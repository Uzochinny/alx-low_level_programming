#include "main.h"
/**
 * get_bit - Entry Point
 * @n: input
 * @index: index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int s;

	if (index > 63)
		return (-1);

	s = 1 << index;
	return ((n & s) > 0);
}
