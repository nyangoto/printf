#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>

unsigned int find_length(unsigned int n, int base);
int print_numbers(unsigned long n, unsigned int base, const char *digits);
int putchar_int(int n, int len);
int print_string(va_list args, int len);
int _printf(const char *format, ...);
int print_char(va_list args, int len);
int print_num(va_list args, int len);
int _putchar(char c);
int get_print_func(char c, char b, va_list args, int len);

#endif /* HOLBERTON_H */
