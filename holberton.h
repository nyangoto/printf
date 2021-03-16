#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>

int print_string(va_list args, int len);
int _printf(const char *format, ...);
int print_char(va_list args, int len);
int print_num(va_list args, int len);
int _putchar(char c);
int get_print_func(char c, char b, va_list args, int len);

#endif /* HOLBERTON_H */
