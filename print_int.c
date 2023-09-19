#include "main.h"
/**
 * toInt - Print an integer as a string
 * @value: The integer
 * Return: The number of digits printed
 */
int toInt(va_list value)
{
	int len, powten, j, digit, res, count = 0, num;

	res = va_arg(value, int);

	if (res == 0)
	{
		_putchar('0');
		return (1);
	}

	if (res < 0)
	{
		_putchar('-');
		count++;
	}
	num = res;
	len = 0;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	powten = 1;
	for (j = 1; j <= len - 1; j++)
		powten *= 10;
	for (j = 1; j <= len; j++)
	{
		digit = res / powten;
		if (res < 0)
			_putchar((digit * -1) + 48);
		else
			_putchar(digit + '0');
		count++;
		res -= digit * powten;
		powten /= 10;
	}
	return (count);
}
