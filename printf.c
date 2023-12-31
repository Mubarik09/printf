#include "main.h"
#include <stdarg.h>
/**
 * _printf - function for print text following format specifiers if any
 * @format: pointer to the string to be printed
 * Return: count of characters printed on success
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%' && *(format + 1) == 'c')
{
do_c(args);
count++;
format++;
}
else if (*format == '%' && *(format + 1) == 's')
{
count += do_s(args);
format++;
}
else if (*format == '%' && *(format + 1) == '%')
{
_putchar('%');
format++;
count++;
}
else if (*format == '%' && (*(format + 1) == 'd' ||*(format + 1) == 'i'))
{
count += printNumber(args);
format++;
}
else if (*format == '%' && *(format + 1) == 'b')
{
count += conversion(args, 2);
format++;
}
else if (*format == '%' && *(format + 1) == 'o')
{
count += conversion(args, 8);
format++;
}
else if (*format == '%' && *(format + 1) == 'x')
{
count += conversion(args, 16, 'x');
format++;
}
else if (*format == '%' && *(format + 1) == 'X')
{
count += conversion(args, 16, 'X');
format++;
}
else
{
_putchar(*format);
count++;
}
format++;
}
va_end(args);
return (count);
}

