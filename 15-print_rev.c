#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void print_rev(char *s, char *buffer, int *j, int *count)
{
	int len = 0, index = 0;
	char tmp;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
	{
		tmp = s[index];
		buffer[*j] = tmp;
		(*j)++;
		(*count)++;
		if (*j == 1023)
			reset(buffer, j);
	}
}
