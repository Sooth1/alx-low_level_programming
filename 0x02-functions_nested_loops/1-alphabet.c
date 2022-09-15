#include "main.h"

/**
 * Print Alphabets - lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
