#include "main.h"
/**
 * toString - function that print string
 * @value: the value that will be work with it
 * Return: length of str
 */
int toString(va_list value)
{
	int i, len = 0;

	char *str = va_arg(value, char *);

	if (str == NULL)
	{
		str = "(null)";
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);

			len++;
		}

		return (len);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);

		len++;
	}

	return (len);
}
