#include <stdio.h>

/**
 * swap_int - swap values to teo integers
 * @a: First integer to be swapped
 * @b: Second integer to be swaped
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
		*a = *b;
	*b = temp;
}
