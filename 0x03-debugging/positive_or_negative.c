#include "main.h"
/**
 * positive_or_negative -checks +ve and -ve
 *
 * @i: the number to be checked
 *
 * Return: always zero
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf(“ % d is negative\n”,i);
	else
		printf(“ % d is positive\n”,i);
}
