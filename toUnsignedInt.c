#include "main.h"
/**
 * toUnsignedInt - function that handles Unsigned int
 * @value: the value that will be work with it
 * Return: The number of characters printed.
 */
int toUnsignedInt(va_list value)
{
	unsigned int n = va_arg(value, unsigned int);
	int count = 0;
	unsigned int divisor = 1;
	int digit;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		digit = (n / divisor) % 10;
		_putchar(digit + '0');
		count++;
		divisor /= 10;
	}

	return (count);
}
