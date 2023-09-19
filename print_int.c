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
* count_digits - Count the digits in a number.
* @num: The number to count digits for.
*
* Return: The number of digits.
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
* extract_digit - Extract a specific digit from a number.
* @num: The number to extract from.
* @index: The index (from right, starting at 1) of the digit to extract.
*
* Return: The desired digit.
*/
int extract_digit(unsigned int num, int index)
{
int i;

for (i = 0; i < index - 1; i++)
{
num /= 10;
}
return (num % 10);
}

/**
* print_number - Print an unsigned integer.
* @number: The number to print.
*
* Return: The number of digits printed.
*/
int print_number(unsigned int number)
{
int count = count_digits(number);
int i;

for (i = count; i > 0; i--)
{
int digit = extract_digit(number, i);
_putchar(digit + '0');
}
return (count);
}

/**
* toInt - Print an integer as a string.
* @value: The integer.
*
* Return: The number of digits printed.
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
