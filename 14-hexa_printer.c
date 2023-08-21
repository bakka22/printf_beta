#include "main.h"
#include <stdio.h>
#include <stddef.h>
void printer(unsigned int n, char *buffer, int *j, int *count, hex_rep arr[6])
{
	int i;

	if (n % 16 < 10)
	{
		buffer[*j] = (48 + (n % 16));
		(*j)++;
		(*count)++;
		if (*j == 1023)
			reset(buffer, j);
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
				if (*j == 1023)
					reset(buffer, j);
				break;
			}
		}
	}

}
