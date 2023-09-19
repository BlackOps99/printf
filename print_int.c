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
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		i++;
	}
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	int num_digits = 0;
	int temp = n;

	while (temp != 0)
	{
		temp /= 10;
		num_digits++;
	}

	char buffer[12];

	buffer[num_digits] = '\0';

	for (int j = num_digits - 1; j >= 0; j--)
	{
		buffer[j] = (n % 10) + '0';
		n /= 10;
	}

	for (int j = 0; j < num_digits; j++)
	{
		_putchar(buffer[j]);
		i++;
	}
	return (i);
}
