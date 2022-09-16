#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, a, b, c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
				_putchar('0');
			else if (c < 10)
			{
				_putchar(' ');
				_putchar('0' + a);
			}
			else
			{
				_putchar('0' + a);
				_putchar('0' + b);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
