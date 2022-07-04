#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always Return 0
 */
int main(void)
{
	unsigned char a = '0';
	int i;

	for (1 = 0; i < 10; i++)
	{
		putchar (a);
		a++;
	}
	a = '1';
	for (i = 0; i < 6; i++)
	{
		putchar ('o' + a);
		a++;
	}
	putchar ('\n');
	return (0);
}
