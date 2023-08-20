#include "main.h"
#include <stdio.h>
#include <unistd.h>
int main(void)
{
	int i;
	char test[2040];

	for (i = 0; i < 2039; i++)
		test[i] = 'h';

	test[i] = '\0';
	/*_printf("hniudenuncjniofjfjicnjfcfoidjsidmkncjncifjlkdscmdndfjkhijdkdndcjhfiehfjenmdns,cnjfhkjdufbvfbvjsdkjcnjfvukvkjf %s", test);*/
	/*_printf("\n%d", _printf("%s hello %s %d no no %d %c %s", "hell no", "fucker", 213144, 63424, 'x', test));*/
	_printf("%s",test);
		return (0);
}