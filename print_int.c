#include "main.h"

int print_number(unsigned int number);
int count_digits(unsigned int num);
int extract_digit(unsigned int num, int index);

/**
 * toInt - Print an integer as a string
 * @value: The integer
 *
 * Return: The number of digits printed
 */
int toInt(va_list value)
{
	int n = va_arg(value, int);
	unsigned int un_n;

	if (n < 0)
	{
		un_n = -n;
		_putchar('-');
	}
	else
	{
		un_n = n;
	}

	if (un_n == 0)
	{
		_putchar('0');
		return (1);
	}

	return (print_number(un_n));
}

/**
 * print_number - Prints an unsigned integer
 * @number: The unsigned integer
 *
 * Return: The number of digits printed
 */
int print_number(unsigned int number)
{
	int count = count_digits(number);
	int i = 0;

	for (i = count; i > 0; i--)
	{
		int digit = extract_digit(number, i);

		_putchar(digit + '0');
	}

	return (count);
}

/**
 * count_digits - Counts the number of digits in a number
 * @num: The number
 *
 * Return: The number of digits
 */
int count_digits(unsigned int num)
{
	int digits = 0;

	while (num)
	{
		digits++;
		num /= 10;
	}
	return (digits);
}

/**
 * extract_digit - Extracts the desired digit from a number
 * @num: The number
 * @index: The index (from the right, starting with 1)
 *
 * Return: The desired digit
 */
int extract_digit(unsigned int num, int index)
{
	int i = 0;

	for (i = 0; i < index - 1; i++)
	{
		num /= 10;
	}

	return (num % 10);
}
