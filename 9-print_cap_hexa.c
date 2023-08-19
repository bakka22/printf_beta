#include "main.h"
#include <stdio.h>
void print_cap_hexa (unsigned int n)
{
	hex_rep arr[6] = {
		{10, 'A'},
		{11, 'B'},
		{12, 'C'},
		{13, 'D'},
		{14, 'E'},
		{15, 'F'}
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
		print_cap_hexa(n / 16);
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