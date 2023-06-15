#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory block to reallocate
 * @old_size: Size of the old memory block in bytes
 * @new_size: Size of the new memory block in bytes
 *
 * Return: Pointer to the reallocated memory block or NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *p, *np;
	unsigned int i;

	if (new_size == old_size)
	return (ptr);

	if (ptr == NULL)
	return (malloc(new_size));

	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	return (NULL);

	if (new_size < old_size)
	old_size = new_size;

	p = (char *)ptr;
	np = (char *)new_ptr;

	for (i = 0; i < old_size; i++)
	np[i] = p[i];

	free(ptr);

	return (new_ptr);
}
