	#include "main.h"
#include <stdio.h>
#include <unistd.h>
int main(void)
{
	/*int i;
	char test[2040];

	for (i = 0; i < 2039; i++)
		test[i] = 'h';*/
	int *p, i, *p2;

	i = 5;
	p = &i;
	p2 = NULL;
	/*_printf("hniudenuncjniofjfjicnjfcfoidjsidmkncjncifjlkdscmdndfjkhijdkdndcjhfiehfjenmdns,cnjfhkjdufbvfbvjsdkjcnjfvukvkjf %s", test);*/
	/* _printf("%S hello %S %d no no %d %c %S", "hell no", "fucker", 213144, 63424, 'x', test);*/
	/*_printf("%s",test);*/
	/*_printf("%u", 8271663812918832321);*/
	/*printf("%u", 8271663812918832321);*/
	_printf("%p", p2);
	printf("%p\n", p2);
	_printf("%p", p);
	printf("%p", p);
		return (0);
}