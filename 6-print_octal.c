#include "main.h"
#include <stdio.h>
void print_octal(unsigned int n, char *buffer, int *j, int *count)
{
	if (n < 8)
	{
		buffer[*j] = (48 + (n % 8));
		(*j)++;
		(*count)++;
	}
	else
	{
		print_octal(n / 8, buffer, j, count);
		buffer[*j] = (48 + (n % 8));
		(*j)++;
		(*count)++;
	}
}