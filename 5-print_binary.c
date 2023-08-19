#include "main.h"
void print_binary(unsigned int n)
{
	int i, j;
	char arr[33];

	j = 0;
	for (i = 31; i >= 0; i--)
	{
		arr[j] = (48 + ((n >> i) & 1));
		j++;
	}
	arr[32] = '\0';
	j = 0;
	for (i = 0; i < 32; i++)
	{
		if (arr[i] == '1')
		{
			for (j = 0; arr[j + i ] != '\0'; j++)
			{
				_putchar(arr[i + j]);
			}
			return;
		}
		else
			continue;
	}
	_putchar('0');
}