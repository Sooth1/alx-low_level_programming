#include "main.h"

/**
 * *_strcat - appends the src string to the dest string
 *
 * @dest: char is checked
 * @src: char is checked
 * Description: This will append the src string to the dest string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *first = dest;

	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (first);
}
