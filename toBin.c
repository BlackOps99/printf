#include "main.h"
/**
 * toBin - unsigned int to converted it to binary
 * @value: unsigned integer
 * Return: binary
 */
int toBin(va_list value)
{
	unsigned int result = va_arg(value, unsigned int);
	int len = 0;
	int flag = 0;

	for (int i = 31; i >= 0; i--)
	{
		int bit = (result >> i) & 1;

		if (bit || flag)
		{
			_putchar(bit + '0');
			len++;
			flag = 1;
		}
	}

	if (len == 0)
	{
		_putchar('0');
		len = 1;
	}

	return (len);
}
