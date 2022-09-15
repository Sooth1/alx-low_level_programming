#include "main.h"

/**
 * _isalpha - Print lower case
 * @c: Character is checked
 *
 * Return: 0 or 1 (success)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
