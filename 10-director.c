#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
/**
*director2 - direct to the correct function for format specifier
*@args : argument of printf
*@buffer : local buffer on printf
*@j : index for buffer
*@c : format specifier
*@count : number of charcters printed
*@i : iterator of format argument on printf
*Return: nothing
*/
void director2(va_list args, char *buffer, int *j, int *count, char c, int *i)
{
		switch (c)
		{
			case '%':
				buffer[*j] = '%';
				(*j)++;
				(*count)++;
				(*i) += 2;
				if (*j == 1023)
					reset(buffer, j);
				break;
			case 'd':
				print_number(va_arg(args, int), buffer, j, count);
				(*i) += 2;
				break;
			case 'i':
				print_number(va_arg(args, int), buffer, j, count);
				(*i) += 2;
				break;
			case 's':
				_puts(va_arg(args, char *), buffer, j, count);
				(*i) += 2;
				break;
			case 'S':
				printS(va_arg(args, char *), buffer, j, count);
				(*i) += 2;
				break;
			case 'u':
				print_u(va_arg(args, unsigned int), buffer, j, count);
				(*i) += 2;
				break;
			case 'o':
				print_octal(va_arg(args, unsigned int), buffer, j, count);
				(*i) += 2;
				break;
			case 'r':
				print_rev(va_arg(args, char *), buffer, j, count);
				(*i) += 2;
				break;
			case 'R':
				print_rot13(va_arg(args, char *), buffer, j, count);
				(*i) += 2;
				break;
		}
}
/**
*director - direct to the correct function for format specifier
*@args : argument of printf
*@buffer : local buffer on printf
*@j : index for buffer
*@count : number of charcters printed
*@c : format specifier
*@i : iterator of format argument on printf
*Return: nothing
*/
void director(va_list args, char *buffer, int *j, int *count, char c, int *i)
{
	void *mid;

	switch (c)
	{
		case 'x':
			print_hexa(va_arg(args, unsigned int), buffer, j, count);
			(*i) += 2;
			break;
		case 'X':
			print_cap_hexa(va_arg(args, unsigned int), buffer, j, count);
			(*i) += 2;
			break;
		case 'b':
			print_binary(va_arg(args, unsigned int), buffer, j, count);
			(*i) += 2;
			break;
		case 'p':
			mid = va_arg(args, void *);
			if (mid == NULL)
			{
				_puts("(nil)", buffer, j, count);
				(*i) += 2;
				return;
			}
			else
			{
				_puts("0x", buffer, j, count);
				print_pointer((unsigned long int)mid, buffer, j, count);
				(*i) += 2;
				break;
			}
		default:
			director2(args, buffer, j, count, c, i);
	}

}
