#include "main.h"
#include <stdio.h>
#include <unistd.h>
int main(void)
{
	int i;
	for (i = 0; i <= 100; i++)
	{
		print_cap_hexa(i);
		printf("  %X\n", i);
	}
		return (0);
}