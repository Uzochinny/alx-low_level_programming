#include <stdio.h>

/**
 *  main - initial function
 *
 *  Return: return o when done
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(a));
printf("Size of a int:  %lu byte(s)", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)", sizeof(f));
return (0);
}
