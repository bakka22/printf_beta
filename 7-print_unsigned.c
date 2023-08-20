#include "main.h"

/**
* print_number - check if charcter is an alphabet
* @n: the length of the line
* Return: 1 if alphabet and 0 otherwise
*/
void print_unsigned(unsigned int n, char *buffer, int *j, int *count)
{
	unsigned int n1;

	n1 = n;

	if (n1 / 10)
	{
		print_unsigned(n1 / 10, buffer, j, count);
	}

	buffer[*j] = (n1 % 10 + '0');
	(*j)++;
	(*count)++;
}
