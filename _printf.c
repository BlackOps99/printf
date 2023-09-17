#include "main.h"

int isCharInArray(char searchValue);
int handle_print(const char *to_type, va_list value);

/**
 * _printf - function that prints all types of output
 * @format: the format that will be worked with
 * Return: length of format
 */
int _printf(const char *format, ...)
{
	int len_of_str = 0;
	const char *current;
	const char *setn;

	va_list ap;

	va_start(ap, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		va_end(ap);
		return (-1);
	}

	current = format;

	while (*current != '\0')
	{
		if (*current == '%' && isCharInArray(*(current + 1)) != 0)
		{
			setn = current + 1;
			len_of_str += handle_print(setn, ap);
			current = current + 2;
		}
		else
		{
			_putchar(*current);
			len_of_str++;
			current++;
		}
	}

	va_end(ap);
	return (len_of_str);
}
/**
 * isCharInArray - function that check if correct format
 * @searchValue: type char
 * Return: 1 if found else 0
 */
int isCharInArray(char searchValue)
{
	int i = 0;

	char array[3] = {
	    'c',
	    's',
	    '%'};

	for (i = 0; i < 3; i++)
	{
		if (array[i] == searchValue)
		{
			return (1);
		}
	}
	return (0);
}
/**
 * handle_print - function that handles the type format
 * @to_type: type char pointer
 * @value: type va_list that contains the value
 * Return: The number of characters printed.
 */
int handle_print(const char *to_type, va_list value)
{
	switch (to_type[0])
	{
	case 'c':
		return (toChar(value));
	case 's':
		return (toString(value));
	case '%':
		return (toRatio());
	case 'd':
	case 'i':
		return (toInt(value));
	default:
		return (0);
	}
}
