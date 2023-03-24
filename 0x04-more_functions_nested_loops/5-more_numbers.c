#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * Return: 0 (Success)
 */

void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
	}
}
