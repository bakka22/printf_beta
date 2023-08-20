#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int _printf(const char *format, ...)
{
	int i, count, j;
	va_list args;
	char *buffer;

	count = 0;
	buffer = malloc(sizeof(char) * 1025);
	j = 0;
	va_start(args, format);
	for (i = 0; format[i] != '\0' && i < 1024; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			buffer[j] = va_arg(args, int);
			i++;
			count++;
			j++;
			if (j == 1023)
				reset(buffer, &j);
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			_puts(va_arg(args, char *), buffer, &j, &count);
			i++;
		}
		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			print_number(va_arg(args, int), buffer, &j, &count);
			i++;
		}
		else
		{
			buffer[j] = format[i];
			count++;
			j++;
			if (j == 1023)
				reset(buffer, &j);
		}
	}
	printf("(%d,  %d,  %d)",_strlen(buffer), count, j);
	write(1, buffer, _strlen(buffer));
	free(buffer);
	va_end(args);
	return (count);
}