#include "main.h"
/**
 * countDigits - calculate the number of digits in an integer
 * @n: The integer
 * Return: The number of digits
 */
int countDigits(int n)
{
	int count = 0;

	while (n != 0)
	{
		n /= 10;
		count++;
	}

	return (count);
}
/**
 * toInt - Print an integer as a string
 * @value: The integer
 *
 * Return: The number of digits printed
 */
int toInt(va_list value)
{
	int num = va_arg(value, int);
	int numDigits, isNegative, i, index;
	char *buffer;

	if (num == 0)
	{
		putchar('0');
		return (1);
	}

	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}

	numDigits = countDigits(num);
	buffer = (char *)malloc((numDigits + isNegative + 1) * sizeof(char));

	if (buffer == NULL)
		return (0);

	index = numDigits + isNegative;

	while (num > 0)
	{
		buffer[index] = '0' + (num % 10);
		num /= 10;
		index--;
	}

	if (isNegative)
		buffer[0] = '-';

	for (i = 0; i < numDigits + isNegative; i++)
	{
		_putchar(buffer[i]);
	}
	free(buffer);
	return (numDigits + isNegative);
}
