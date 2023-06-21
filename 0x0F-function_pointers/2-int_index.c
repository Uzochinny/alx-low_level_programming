
#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: Pointer to the function used for comparison.
 *
 * Return: Index of the first element where the cmp function does not return 0,
 * or -1 if no element matches or if size is less than or equal to 0.
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
