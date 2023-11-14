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
 

	

