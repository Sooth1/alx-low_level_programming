#include "main.h"

/**
 * print_sign - int n
 * @n: The number to check
 *
 * Return: 0, -1 or 1 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
