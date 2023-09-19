#include "main.h"
/**
 * toBin - unsigned int to converted it to binary
 * @val: unsigned integer
 * Return: binary
 */
int toBin(va_list val)
{
	int num = va_arg(val, unsigned int);
	int i = 0;
	int count = 0;
	int j;
	int binary[32];

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (num > 0)
		{
			binary[i] = num % 2;
			num = num / 2;
			i++;
		}
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(binary[j] + '0');
			count++;
		}
	}
	return (count);
}
