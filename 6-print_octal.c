	#include "main.h"
#include <stdio.h>
/**
*print_octal - print int in octal form
*@n : number to be printed
*@buffer : local buffer on printf
*@j : index to buffer
*@count : number of charcters printed
*Return: nothing
*/
void print_octal(unsigned int n, char *buffer, int *j, int *count)
{
	if (n < 8)
	{
		buffer[*j] = (48 + (n % 8));
		(*j)++;
		(*count)++;
		if (*j == 1022)
			reset(buffer, j);
	}
	else
	{
		print_octal(n / 8, buffer, j, count);
		buffer[*j] = (48 + (n % 8));
		(*j)++;
		(*count)++;
		if (*j == 1022)
			reset(buffer, j);
	}
}
