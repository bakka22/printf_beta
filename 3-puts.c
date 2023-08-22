#include "main.h"

/**
* _puts - print a string to stdout
*@str : pointer to string to be printed
*@buffer: local buffer of printf
*@j : index for buffer
*@count : count of charcters printed on printf
* Return: nothing
*/
void _puts(char *str, char *buffer, int *j, int *count)
{
	char *p;

	p = str;
	while (1)
	{
		if (*p == '\0')
			break;

		buffer[*j] = *p;
		p += 1;
		(*j)++;
		(*count)++;
		if (*j == 1022)
			reset(buffer, j);
	}
}
