#include "main.h"

/**
* _puts - check if charcter is an alphabet
* @str : pointer argument
* Return: 1 if alphabet and 0 otherwise
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
 		if (*j == 1023)
			*j = 0;
	}
}
