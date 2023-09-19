#include "main.h"
/**
 * toBin - unsigned int to converted it to binary
 * @value: unsigned integer
 * Return: binary
 */
int toBin(va_list value)
{
	unsigned int n, m, i;
	unsigned int a[32];
	unsigned int sum = 0;
	int Len = 0;

	n = va_arg(value, unsigned int);
	m = 2147483648;
	a[0] = n / m;

	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}

	for (i = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			char z = '0' + a[i];

			_putchar(z);

			Len++;
		}
	}

	return (Len);
}
