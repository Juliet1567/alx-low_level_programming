#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c - character to print
 * Return: On success 1
 * on errror, -1 is returned and errmo is set appropriately
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

