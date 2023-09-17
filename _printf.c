#include "main.h"

int handle_print(const char *to_type, va_list value);

/**
 * _printf - function that prints all types of output
 * @format: the format that will be worked with
 * Return: length of format
 */
int _printf(const char *const format, ...)
{
	convert_match m[] = {
	    {"%s", toString},
	    {"%c", toChar},
	    {"%%", toRatio},
	    {"%i", toInt}};

	int len_of_str = 0;
	int i = 0;
	int j = 0;

	va_list ap;

	va_start(ap, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		va_end(ap);
		return (-1);
	}

Here:
	while (format[i] != '\0')
	{
		j = 3;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len_of_str += m[j].f(ap);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len_of_str++;
		i++;
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
