#include "main.h"
#include <stdio.h>
void print_hexa (unsigned int n)
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
			_putchar(48 + (n % 16));
		}
		else
		{
			for (i = 0; i < 6; i++)
			{
				if ((n % 16) == (arr[i].n))
				{
					_putchar(arr[i].rep);
					break;
				}
			}
		}
	}
	else
	{
		print_hexa(n / 16);
		if (n % 16 < 10)
		{
			_putchar(48 + (n % 16));
		}
		else
		{
			for (i = 0; i < 6; i++)
			{
				if ((n % 16) == (arr[i].n))
				{
					_putchar(arr[i].rep);
					break;
				}
					
			}
		}
	}
}