#include "main.h"

/**
 * jack_bauer - Print time until 24 hours
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d, i;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	for (i = 0; i < 1440; i++)
	{
		_putchar('0' + a);
		_putchar('0' + b);
		_putchar(':');
		_putchar('0' + c);
		_putchar('0' + d);
		_putchar('\n');
		d++;
		if (d > 9)
		{
			d = 0;
			c++;
		}
		if (c > 5)
		{
			c = 0;
			b++;
		}
		if (b > 9)
		{
			b = 0;
			a++;
		}
	}
}
