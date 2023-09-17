#include "main.h"

/**
* toInt - Print an integer as a string
* @value: The integer
*
* Return: The number of digits printed
*/
int toInt(va_list value)
{
int n = va_arg(value, int);
int count = 0;
unsigned int un_n, num, tmp;

un_n = n;
if (un_n < 0)
{
_putchar('-');
un_n = -n;
count++;
}
if (un_n == 0)
{
_putchar('0');
return (++count);
}

for (tmp = un_n; tmp != 0; tmp /= 10)
{
count++;
}

for (num = 1; count - 1 > 0; num *= 10, count--)
{
}

for (; num > 0; num /= 10)
{
_putchar((un_n / num) % 10 + '0');
}

return (n < 0 ? count + 1 : count);
}
