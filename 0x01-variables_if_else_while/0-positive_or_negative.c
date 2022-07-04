#include <stdio.h>

/**
 * main - Assign a random number to the variables n each time its executed
 * and print the last digit of the number stored in the variables n
 * parameters : Determine positive numbers from rand
 * Return: 0 after complete
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
