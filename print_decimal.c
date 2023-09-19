#include "main.h"
/**
 * toDecimal - write the Decimal numbers
 * @value: Decimal
 * Return: Decimal
 */
int toDecimal(va_list value)
{
	int n = va_arg(value, int);
	int i = 0;
	int exp = 1;
	int should_invert = 0;

	if (n < 0)
	{
		should_invert = 1;
		n = -n;
		i++;
	}

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n / exp != 0)
	{
		exp *= 10;
	}

	do {
		exp /= 10;
		int digit = n / exp;
		_putchar(should_invert ? '9' - digit : digit + '0');
		i++;
		n %= exp;
	} while (exp > 1);

	return (i);
}
