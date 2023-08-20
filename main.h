#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);
void _putchar();
int _strlen(char *s);
void reset(char *buffer, int *j);
void _puts(char *str, char *buffer, int *j, int *count);
void print_number(int n, char* buffer, int *j, int *count);
void print_binary(unsigned int n, char *buffer, int *j, int *count);
void print_octal(unsigned int n, char *buffer, int *j, int *count);
void print_unsigned(unsigned int n, char *buffer, int *j, int *count);
void print_hexa(unsigned int n, char *buffer, int *j, int *count);
void print_cap_hexa(unsigned int n, char *buffer, int *j, int *count);
typedef struct hex_rep {
	unsigned int n;
	char rep;
}hex_rep;
#endif
