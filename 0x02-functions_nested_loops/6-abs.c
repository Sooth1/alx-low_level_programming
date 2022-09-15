#include "main.h"

/**
 * _abs - Print a positive value
 * @n: Number is checked
 *
 * Return: positive value (success)
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
