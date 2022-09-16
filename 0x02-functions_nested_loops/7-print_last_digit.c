#include "main.h"

 /**
  * print_last_digit -print last nuber
  * @n: digit
  *
  * Return: int value
  */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = (-1 * last_digit);
		_putchar(last_digit + '0');
		return (last_digit);
}
else
{
	_putchar(last_digit);
	return (last_digit);
}
}
