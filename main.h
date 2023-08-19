#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);
void _putchar();
void _puts(char *str);
void print_number(int n);
void print_binary(unsigned int n);
void print_octal(unsigned int n);
void print_unsigned(unsigned int n);
void print_hexa(unsigned int n);
void print_cap_hexa(unsigned int n);
typedef struct hex_rep {
	unsigned int n;
	char rep;
}hex_rep;
#endif
