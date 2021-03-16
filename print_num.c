#include "holberton.h"
/**
* putchar_int - prints integers
* @n: number.
* @len: string length
*
* Return: new length of the string.
*/
int putchar_int(int n, int len)
{
unsigned long num;

if (n < 0)
{
len += _putchar(45);
num = -(unsigned int)n;
}
else
{
num = n;
}
len += print_numbers(num, 10, "0123456789");

return (len);
}
