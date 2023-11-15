#include "main.h"
#include <stdarg.h>
/**
 * do_c - format conversion of character
 * @args: variadic argument
 * Return: print char to stdout on success
 */
void do_c(va_list args)
{
char letter;
letter = va_arg(args, int);
_putchar(letter);
}

/**
 * do_s - format conversion for string
 * @args: variadic argument
 * Return: printed string to stdout on success
 */
int do_s(va_list args)
{
char *str;
int length = 0;
str = va_arg(args, char *);
while (*str != '\0')
{
_putchar(*str);
length++;
str++;
}
return (length);
}

/**
 * printNumber - functions convert int to char and print
 * @args: variadic argument
 * Return: length of number on success
 */
int printNumber(va_list args)
{
int length = 0;
int num = va_arg(args, int);
int divisor = 1;
if (num < 0)
{
_putchar('-');
num = -num;
}
while (num / divisor > 10)
{
divisor *= 10;
}
while (divisor > 0)
{
_putchar(num / divisor + '0');
length++;
num %= divisor;
divisor /= 10;
}
return (length);
}








