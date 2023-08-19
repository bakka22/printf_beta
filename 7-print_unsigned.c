#include "main.h"

/**
* print_number - check if charcter is an alphabet
* @n: the length of the line
* Return: 1 if alphabet and 0 otherwise
*/
void print_unsigned(unsigned int n)
{
	unsigned int n1;

	n1 = n;

	if (n1 / 10)
	{
		print_unsigned(n1 / 10);
	}

	_putchar(n1 % 10 + '0');
}
