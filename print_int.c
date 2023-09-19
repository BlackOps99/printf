#include "main.h"

/**
 * print_int - prints integer or decimal (they're the same in C).
 * @args: argument to print
 * Return: number of characters printed
 */
int print_int(va_list args)
{
int n = va_arg(args, int);
int num, last_digit = n % 10, digit;
int count = 0;  // To count number of characters printed
int exp = 1;

if (last_digit < 0)
{
_putchar('-');
count++;
}
n /= 10;  // Move to next digit

if (n == 0)
{
_putchar('0' + last_digit);
count++;
return count;
}

// Construct the number without the last digit
num = n;
while (num)
{
count++;
exp *= 10; 
num /= 10;
}

exp /= 10; // Adjust for last loop iteration
while (n)
{
digit = n / exp;
_putchar('0' + digit);
n -= digit * exp;
exp /= 10;
}
_putchar('0' + last_digit);
count++;

return count;
}
