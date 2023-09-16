#include "main.h"
/**
 * toChar - function that print char
 * @value: the value that will be work with it
 * Return: length of char
 */
int toChar(va_list value)
{
	int c = va_arg(value, int);

	_putchar(c);

	return (1);
}
