#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * @c: is the character we need to be cheked
 * Return: returns 1 if c is lowercase otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
