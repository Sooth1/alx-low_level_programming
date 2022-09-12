#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, i, k, j;

	for (c = 47; c <= 58; c++)
	{
		for (i = 47; i <= 58; i++)
		{
			for (k = 47; k <= 58; k++)
			{
				for (j = 47; j <= 58; j++)
				{
					if (((k + j) > (c + i) && k >= c) || c < k)
					{
						putchar(c);
						putchar(i);
						putchar(' ');
						putchar(k);
						putchar(j);
	if (c + i + k + j == 227 && c == 57)
					  {	  break;
						}
	else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
