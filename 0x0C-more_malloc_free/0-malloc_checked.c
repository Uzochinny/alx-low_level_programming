#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates the memory
 * @p: variable to store memory
 * @b: assigned paramete
 * @b: assigned parameter
 * Return: 98
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
	{
	fprintf(stderr, "Error: malloc failed to allocate %u bytes\n", b);
	exit(EXIT_FAILURE);
	}
	return (p);
}

