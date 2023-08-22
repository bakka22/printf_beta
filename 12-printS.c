#include "main.h"

/**
* printS - print a string
*@str : the string too be printed
*@buffer : local buffer on printf
*@j : index of buffer
*@count : number of charcters printed
* Return: nothing
*/
void printS(char *str, char *buffer, int *j, int *count)
{
	char *p;

	p = str;
	while (1)
	{
		if (*p == '\0')
			break;
		if ((*p > 0 && *p < 32) || *p >= 127)
		{
			buffer[*j] = '\\';
			(*j)++;
			if (*j == 1022)
				reset(buffer, j);

			buffer[*j] = 'x';
			(*j)++;
			if (*j == 1022)
				reset(buffer, j);

			(*count) += 2;
			if (*p <= 15)
			{
				buffer[*j] = '0';
				(*j)++;
				if (*j == 1022)
					reset(buffer, j);

				(*count)++;
			}
			print_cap_hexa(*p, buffer, j, count);
			p += 1;
		}
		buffer[*j] = *p;
		p += 1;
		(*j)++;
		(*count)++;
		if (*j == 1022)
			reset(buffer, j);
	}
}
