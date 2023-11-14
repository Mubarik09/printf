#include <unistd.h>
/**
 * _putchar - function for printing to stout
 * @c: character to be printed
 * return: printed text on stout on success
 */
void _putchar(char c)
{
write(1, &c, 1);
}
