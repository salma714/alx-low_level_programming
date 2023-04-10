#include "main.h"
#include <stdio.h>
/**
 * _strstr - a function that locates a substring.
 * @haystack: an occurrence of the substring
 * @needle: a string
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i, n;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (n = 0; needle[n] != '\0'; n++)
		{
			if (haystack[i] == needle[n])
				return (haystack + i);
		}
	}
	return (NULL);
}
