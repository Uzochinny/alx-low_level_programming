#include <stdio.h>

/**
 * _strlen - Returns length of string
 * @str: String to get the length
 *
 * Return: return the length
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
