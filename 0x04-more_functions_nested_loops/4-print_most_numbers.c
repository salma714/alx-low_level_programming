#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		while (c != 2 || c != 4)
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
}
