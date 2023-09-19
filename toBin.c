#include "main.h"
/**
 * toBin - unsigned int to converted it to binary
 * @val: unsigned integer
 * Return: binary
 */
int toBin(va_list val)
{
	unsigned int length, power_of_two, index, digit, value, number;
	int character_count = 0;

	number = va_arg(val, unsigned int);

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	value = number;
	length = 0;

	while (value != 0)
	{
		value /= 2;
		length++;
	}

	power_of_two = 1;

	for (index = 1; index <= length - 1; index++)
		power_of_two *= 2;

	for (index = 1; index <= length; index++)
	{
		digit = number / power_of_two;
		_putchar(digit + '0');
		character_count++;
		number -= digit * power_of_two;
		power_of_two /= 2;
	}

	return (character_count);
}
