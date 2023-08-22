#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
*print_cap_hexa - print number in capital hexadicimal form
*@n : number to be printed
*@buffer : local buffer on printf
*@j : index to buffer
*@count : the number of charcters printed
*Return: nothing
*/
void print_cap_hexa(unsigned int n, char *buffer, int *j, int *count)
{
	hex_rep arr[6] = {
		{10, 'A'},
		{11, 'B'},
		{12, 'C'},
		{13, 'D'},
		{14, 'E'},
		{15, 'F'}
};

	if (n < 16)
	{
		printer(n, buffer, j, count, arr);
	}
	else
	{
		print_cap_hexa(n / 16, buffer, j, count);
		printer(n, buffer, j, count, arr);
	}
}
