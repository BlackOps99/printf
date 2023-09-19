#include "main.h"
/**
 * toInt - Print an integer as a string
 * @value: The integer
 *
 * Return: The number of digits printed
 */
int toInt(va_list value)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n = va_arg(value, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9;)
		div *= 10;

	for (; div != 0;)
	{
		len += putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
