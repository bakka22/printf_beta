#include "main.h"
void print_binary(unsigned int n, char *buffer, int *j, int *count)
{
	int i, x;
	char arr[33];

	x = 0;
	for (i = 31; i >= 0; i--)
	{
		arr[x] = (48 + ((n >> i) & 1));
		x++;
	}
	arr[32] = '\0';
	x = 0;
	for (i = 0; i < 32; i++)
	{
		if (arr[i] == '1')
		{
			for (x = 0; arr[x + i ] != '\0'; x++)
			{
				buffer[*j] = arr[i + x];
				(*j)++;
				(*count)++;
			}
			return ;
		}
		else
			continue;
	}
	buffer[*j] = '0';
	(*j)++;
	(*count)++;
}