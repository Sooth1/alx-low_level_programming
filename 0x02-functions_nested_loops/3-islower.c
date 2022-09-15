#include "main.h"

/**
 * _islower - Print lower case
 * @c: Character is checked
 *
 * Return: 0 or 1 (success)
 */
int _islower(int c)
{
	if (c == 'a' && c == 'z')
		return (1);
	else
		return (0);
}
