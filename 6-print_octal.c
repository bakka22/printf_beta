#include "main.h"
#include <stdio.h>
void print_octal(unsigned int n)
{
	if (n < 8)
	{
		_putchar(48 + (n % 8));
	}
	else
	{
		print_octal(n / 8);
		_putchar(48 + (n % 8));
	}
}