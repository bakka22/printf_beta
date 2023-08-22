#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
*printer - print number int hexa
*@n : the number to be printed
*@buffer : local buffer on printf
*@j : index of buffer
*@count : number of charcters printed
*@arr : array of hex_rep structure
*Return: nothing
*/
void printer(unsigned int n, char *buffer, int *j, int *count, hex_rep arr[6])
{
	int i;

	if (n % 16 < 10)
	{
		buffer[*j] = (48 + (n % 16));
		(*j)++;
		(*count)++;
		if (*j == 1022)
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
				if (*j == 1022)
					reset(buffer, j);
				break;
			}
		}
	}

}
