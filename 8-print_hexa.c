#include "main.h"
#include <stdio.h>
void print_hexa (unsigned int n, char *buffer, int *j, int *count)
{
	hex_rep arr[6] = {
		{10, 'a'},
		{11, 'b'},
		{12, 'c'},
		{13, 'd'},
		{14, 'e'},
		{15, 'f'}
};
	int i;

	if (n < 16)
	{
		if (n % 16 < 10)
		{
			buffer[*j] = (48 + (n % 16));
			(*j)++;
			(*count)++;
		}
		else
		{
			for (i = 0; i < 6; i++)
			{
				if ((n % 16) == (arr[i].n))
				{
					buffer[*j] = (arr[i].rep);
					(*j)++;
					(*count)++;
					break;
				}
			}
		}
	}
	else
	{
		print_hexa(n / 16, buffer, j, count);
		if (n % 16 < 10)
		{
			buffer[*j] = (48 + (n % 16));
			(*j)++;
			(*count)++;
		}
		else
		{
			for (i = 0; i < 6; i++)
			{
				if ((n % 16) == (arr[i].n))
				{
					buffer[*j] = (arr[i].rep);
					(*j)++;
					(*count)++;
					break;
				}
					
			}
		}
	}
}