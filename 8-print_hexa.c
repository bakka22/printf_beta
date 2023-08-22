#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
*print_hexa - print int in hexadecimal form
*@n : number to be printed
*@buffer : local buffer to printf
*@j : index for buffer
*@count : number of charcters printes
*Return: nothing
*/
void print_hexa(unsigned int n, char *buffer, int *j, int *count)
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
		print_hexa(n / 16, buffer, j, count);
		printer(n, buffer, j, count, arr);
	}
}
