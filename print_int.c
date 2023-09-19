#include "main.h"
/**
 * toInt - Print an integer as a string
 * @value: The integer
 *
 * Return: The number of digits printed
 */
int toInt(va_list value)
{
	int n = va_arg(value, int);
	int count = 0;
	int numDigits = 0;
	int temp = n;
	int divisor = 1;
	int digit, i;

	if (n < 0)
	{
		n = -n;
		putchar('-');
		count++;
	}

	if (n == 0)
	{
		putchar('0');
		return (1);
	}

	while (temp > 0)
	{
		temp /= 10;
		numDigits++;
	}
	for (i = 1; i < numDigits; i++)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		digit = n / divisor;

		putchar('0' + digit);
		count++;
		n -= digit * divisor;
		divisor /= 10;
	}
	return (count);
}
