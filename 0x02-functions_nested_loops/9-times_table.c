#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
<<<<<<< HEAD
	int i, j, k;
	
	for (i = 0; i < 10; i++
	{
			for (j = 0; j < 10; j++)
			{
			k = j * i;
			if (j == 0)
			{
			_putchar(k + '0');
			}
			if (k < 10 && j != 0);
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');																_putchar(k + '0');
			}
			else if(k >= 10)
			{
			_putchar(',');															        _putchar('');
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			}							
			_putchar('\n');
            }
=======
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
>>>>>>> de42bc7a2a532c082bc02c036a4f1c6af24ab6cc
	}
}
