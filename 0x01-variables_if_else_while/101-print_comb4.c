#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, p, s;

	for (d = 0; d < 10; d++)
	{
		for (p = 1; p < 10; p++)
		{
			for (s = 2; s < 10; s++)
			{
				if (d < p && p < s)
				{
					putchar(d + '0');
					putchar(p + '0');
					putchar(s + '0');
					if (d + p + s != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
