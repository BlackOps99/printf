#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int toChar(va_list value);
int toString(va_list value);
int toRatio(void);

#endif
