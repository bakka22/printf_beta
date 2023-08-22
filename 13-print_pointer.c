#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
*print_pointer - print a pointer in hexadecimal
*@n : pointer converted to long unsigned it
*@buffer : local buffer on printf
*@j : index for buffer
*@count : number of charcters printed
*Rerutn: nothing
*/
void print_pointer(unsigned long int n, char *buffer, int *j, int *count)
{
	hex_rep arr[6] = {
		{10, 'a'},
		{11, 'b'},
		{12, 'c'},
		{13, 'd'},
		{14, 'e'},
		{15, 'f'}
};

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
