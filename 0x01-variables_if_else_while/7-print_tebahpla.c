#include <stdio.h>

/**
 * main - main function code bin
 *
 * Return: always return zero after runnint
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
