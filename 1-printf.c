#include "main.h"
#include <stdarg.h>
int _printf(const char *format, ...)
{
	int i, count;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
			count++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			_puts(va_arg(args, char *));
			i++;
			count++;
		}
		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			print_number(va_arg(args, int));
			i++;
			count++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}