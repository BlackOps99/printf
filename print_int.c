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
int num, digit, count = 0;
unsigned int un_n;

if (n < 0)
{
un_n = -n;
_putchar('-');
count++;
}
else
{
un_n = n;
}

if (un_n == 0)
{
_putchar('0');
count++;
return (count);
}

num = un_n;
while (num != 0)
{
num /= 10;
count++;
}

while (count > 0)
{
digit = un_n;
for (int i = 0; i < count - 1; i++)
{
digit /= 10;
}
_putchar((digit % 10) + '0');
count--;
}

return (un_n < 0 ? count + 1 : count);
}
