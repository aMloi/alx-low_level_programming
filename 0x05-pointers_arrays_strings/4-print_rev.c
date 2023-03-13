#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
char *str = s;
while (*s != '\0')
s++;
while (s >= str)
{
_puts(*(--s));
}
_puts('\n');
}
