#include "main.h"
/**
 * rev_string - reverse arrey
 * @n: integer params
 * Return: 0
 */
void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--:

		for (j = 0; j < i; j++, i--)
		{
			temp = *(n + j);
			*(n + j) = *(n + i);
			*(n + i) = temp;
		}
}
/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2st number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r. int size_r)
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
	i++;
	while (*(n2 + j) != '\0')
	j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
	return (0);
