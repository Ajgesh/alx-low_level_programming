#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always return o
 */
int main(void)
{
	int i;
		int j;
		int k;

		for (i = 48; j < 58; i++)
		{
			for (j = 49; j < 58; j++)
			{
				for (k = 50; k < 58; k++)
				{
					if (k > j && j > i)
					{
					putchar (i);
					putchar (j);
					putchar (k);
					if (i != 55 || j != 56)
					{
						putchar (',');
						putchar (' ');
					}
				}
			}
		}
		putchar ('\n');
		return (0);
}
