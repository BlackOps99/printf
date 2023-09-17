#include "main.h"

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
		if (*current == '%' && *(current + 1) != '\0')
		{
			current++;
			len_of_str += handle_print(current, ap);
		}
		else
		{
			_putchar(*current);
			len_of_str++;
		}
		current++;
	}

	va_end(ap);
	return (len_of_str);
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
