#include "main.h"
#include <unistd.h>
#include <stdlib.h>
void reset(char *buffer, int *j)
{
	int i;
	write(1, buffer, 1024);
	for (i = 0; i < 1024; i++)
	{
		buffer[i] = 0;
	}
	(*j) = 0;
}