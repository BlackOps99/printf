#include "main.h"
char *convert(unsigned long int num, int base, int lowercase);
/**
 * toBin - unsigned int to converted it to binary
 * @value: unsigned integer
 * Return: binary
 */
int toBin(va_list value)
{
	unsigned int num = va_arg(value, unsigned int);
	char *str = convert(num, 2, 0);

	int len;

	for (len = 0; str[len] != '\0'; len++)
		_putchar(str[len]);

	return (len);
}
/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		  ? "0123456789abcdef"
		  : "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
