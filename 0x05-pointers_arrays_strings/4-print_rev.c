#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to string to be printed
 */
void print_rev(char *s)
{
int len = 0;

while (*(s + len) != '\0')
{
len++;
}

while (len > 0)
{
_puts(*(s + --len));
}

_puts('\n');
}

