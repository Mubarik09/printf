#include <stdarg.h>
#include "main.h"
/**
 * conversion - function to handle some specifiers
 * @args: variadic argument
 * Return: length pf characters printed on success
 */
int conversion(va_list args, ...)
{
int value[100];
int i;
int length = 0;
int num = va_arg(args, int);
va_list par;
va_start(par, args);
int base = va_arg(par, int);
char letter;

while (num >= 1)
{
value[length] = num % base;
length++;
num /= base;
}

for (i = length - 1; i >= 0; i--)
{
if (value[i] > 9)
{
letter = va_arg(par, int);
if (letter == 'X')
{
_putchar(value[i] + '7');
}
else if (letter == 'x')
{
_putchar(value[i] + 'W');
}
}
else
{
_putchar(value[i] + '0');
}
}

va_end(par);
return (length);
}

