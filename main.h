#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
void _putchar(char c);
int _strlen(char *s);
void reset(char *buffer, int *j);
void _puts(char *str, char *buffer, int *j, int *count);
void print_number(int n, char *buffer, int *j, int *count);
void print_binary(unsigned int n, char *buffer, int *j, int *count);
void print_octal(unsigned int n, char *buffer, int *j, int *count);
void print_u(unsigned int n, char *buffer, int *j, int *count);
void print_hexa(unsigned int n, char *buffer, int *j, int *count);
void print_pointer(unsigned long int n, char *buffer, int *j, int *count);
void print_cap_hexa(unsigned int n, char *buffer, int *j, int *count);
void printS(char *str, char *buffer, int *j, int *count);
/**
*struct hex_rep - bind a base 10 number with a base 16 char
*@n: base 10 number
*@rep : base 16 char
*/
typedef struct hex_rep
{
	unsigned int n;
	char rep;
} hex_rep;
void printer(unsigned int n, char *buffer, int *j, int *count, hex_rep arr[6]);
void director(va_list args, char *buffer, int *j, int *count, char c, int *i);
#endif
