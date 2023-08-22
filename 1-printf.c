#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
*_printf - prints formated text
*@format: string and format specifiers to be printed
*@...: arguments to be formatted and printed
*Return: return the number of characters printed to stdout
*/
int _printf(const char *format, ...)
{
	int i, count, j;
	va_list args;
	char *buffer;

	count = 0;
	buffer = malloc(sizeof(char) * 1024);
	j = 0;
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			buffer[j] = va_arg(args, int);
			i += 2;
			count++;
			j++;
			if (j == 1022)
				reset(buffer, &j);
		}
		else if	(format[i] == '%')
		{
			director(args, buffer, &j, &count, format[i + 1], &i);
			if (format[i] == '\0')
				break;
		}
		buffer[j] = format[i];
		count++;
		j++;
		if (j == 1022)
			reset(buffer, &j);
	}
	write(1, buffer, _strlen(buffer));
	free(buffer);
	va_end(args);
	return (count);
}
