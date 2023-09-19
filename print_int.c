#include "main.h"

/**
* print_int - Prints an integer or decimal (since they're treated the same in C).
* @args: The integer to print
* 
* Return: The number of characters printed
*/
int print_int(va_list args)
{
int n;
int num;
int last_digit;
int digit;
int count = 0;  /* To count number of characters printed */
int exp = 1;

n = va_arg(args, int);
last_digit = n % 10;

if (last_digit < 0)
{
_putchar('-');
count++;
}
n /= 10;  /* Move to next digit */

if (n == 0)
{
_putchar('0' + last_digit);
return (count + 1);
}

/* Construct the number without the last digit */
num = n;
while (num)
{
count++;
exp *= 10;
num /= 10;
}

exp /= 10; /* Adjust for last loop iteration */
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
