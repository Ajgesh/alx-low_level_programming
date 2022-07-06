#include "main.h"

/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)

{

		int coun = 0;

			char alpha;
			
			while (coun++ <= 9)
			{
					for (alpha = 97; alpha <= 122; alpha++)
					_putchar(alpha);
				_putchar('\n');
			}

}
