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
		int g;

		for (i = 48; i <= 57; i++)
		{
			for (j = 48; j <= 57; j++)
			{
				for (k = 48; k <= 57; k++)
				{
					for (g = 48; g <= 57; g++)
					{
					if (((i + j) > (g + k) && i > g) || g < i)
					{
					putchar (i);
					putchar (j);
					putchar (' ');
					putchar (g);
					putchar (k);
					if (i + j + k + g == 227 && i == 57
					{
						break;
					}
					else
					{
						putchar (',');
						putchar (' ');
					}
					}
					}
				}
		}
		putchar ('\n');
		return (0);
}
