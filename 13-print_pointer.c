#include "main.h"
#include <stdio.h>
#include <stddef.h>
void print_pointer (long unsigned int n, char *buffer, int *j, int *count)
{
	hex_rep arr[6] = {
		{10, 'a'},
		{11, 'b'},
		{12, 'c'},
		{13, 'd'},
		{14, 'e'},
		{15, 'f'}
};
	/*int i;
	char nil[6] = "(nil)";*/

	/*if (n1 == NULL)
	{
		for (i = 0; nil[i] != '\0'; i++)
		{
			buffer[*j] = nil[i];
			(*j)++;
			(*count)++;
			if (*j == 1023)
				reset(buffer, j);
		}
		return;
	}*/
	if (n < 16)
	{
		printer(n, buffer, j, count, arr);
	}
	else
	{
		print_pointer(n / 16, buffer, j, count);
		printer(n, buffer, j, count, arr);
	}
}