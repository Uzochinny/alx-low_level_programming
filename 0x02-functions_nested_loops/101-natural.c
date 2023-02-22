#include <stdio.h>
/**
 * main - main function
 * Return: always zero
 */

int main(void)
{
	int i;
	int sum;

	for (i = 0 ; i < 10 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);

}
