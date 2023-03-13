#include "main.h"
/**
 *puts_half - djxsdjh jdscsdjhcs
 *@str: kdvxjkfhv kxfnvfv
 *
 *Return: always none
 *
 *
 *
 */
void puts_half(char *str)
{
{
int le = 0;
int i;

while (str[le] != '\0')
{
le++;
}

if (le % 2 == 0)
{
for (i = le / 2; i < le; i++)
{
_puts("%c", str[i]);
}
}
else
{
for (i = (le + 1) / 2; i < le; i++)
{
_puts(str[i]);
}
}

_puts('\n');
}


}
