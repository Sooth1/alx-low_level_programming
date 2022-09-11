#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z = 48;

	while (z < 58)
	{
		putchar(z);
		if (z != 57)
		{
			putchar(',');
			putchar(' ');
		}
		z++;
	}
	putchar('\n');
	return (0);
}
