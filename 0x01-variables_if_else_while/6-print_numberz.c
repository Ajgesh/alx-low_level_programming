#include <std.h>

/**
 * main - entry point
 *
 * Return: alway return success 0
 */
int main(void)
{
	int a = 0;

	for (; a < 10; a++)
		putchar ('0' + a);
	putchar ('\n');
	return (0);
}
