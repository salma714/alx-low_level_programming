#include "main.h"

/**
 * print_sign - a function that prints the sign of a number.
 * @n: the number
 * Return: returns 1 if n is positive, returns 0 if n zero,
 * returns -1 if n is nevative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
