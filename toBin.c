#include "main.h"
/**
 * toBin - unsigned int to converted it to binary
 * @value: unsigned integer
 * Return: binary
 */
int toBin(va_list value)
{
	unsigned int result = va_arg(value, unsigned int);

	int i;

	int leadingZero = 1;

	for (i = 31; i >= 0; i--)
	{
		char bit = ((result >> i) & 1) + '0';

		if (bit == '1')
		{
			leadingZero = 0;
		}

		if (!leadingZero)
		{
			_putchar(bit);
		}
	}

	return (countBits(result));
}

/**
 * countBits - calculate the number of binary
 * @num: unsigned integer
 * Return: number of binary
 */
int countBits(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num >>= 1;
	}

	return (count);
}
