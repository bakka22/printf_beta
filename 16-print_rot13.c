#include <stdio.h>
#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

void print_rot13(char *s, char *buffer, int *j, int *count)
{
	int n = 0, i;
	char tmp;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + n) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + n) == alphabet[i])
			{
				tmp = rot13[i];
				buffer[*j] = tmp;
				(*j)++;
				(*count)++;
				if (*j == 1023)
					reset(buffer, j);
				break;
			}
		}
		n++;
	}
}
