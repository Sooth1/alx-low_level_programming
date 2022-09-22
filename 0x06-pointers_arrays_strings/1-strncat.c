#include "main.h"

/**
 * _strncat - appends the src string to the dest string
 *
 * @dest: char is checked
 * @src: char is checked
 * @n: we append by
 *
 * Description: This will append the src string to the dest string
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *first = dest;

	while (*dest)
		dest++;
	for (; n > 0; n--)
	{
		if (*src)
		{
			*dest = *src;
			dest++;
			src++;
		}
		else
			break;
	}
	return (first);
}
