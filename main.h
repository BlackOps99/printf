#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* Printing functions */
int _printf(const char *format, ...);
int _putchar(char c);

/* Conversion handlers */
int toChar(va_list value);
int toString(va_list value);
int toRatio(void);
int toInt(va_list value);
int toDecimal(va_list value);
int toBin(va_list value);

#endif /* MAIN_H */
