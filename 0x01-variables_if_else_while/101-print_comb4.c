#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, p, s;

	for (d = '0'; d < '9'; d++)
	{
		for (p = d + 1; p < '9'; p++)
		{
			for (s = p = 1; s < '9'; s++)
			{
				if (d < p && p < s)
				putchar(d + '0');
				putchar(p + '0');
				putchar(s + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
