#include "main.h"
/**
 * main - mscadhcdc
 * Return: 0
 */
void print_alphabet_x10(void)
{
int i;
int j;

for (i = 0; i<= 10; i++)
{
char ch = 'a';
for(j = ch; ch <= 'z'; ch++)
{
_putchar(ch);
}

_putchar('\n');

};


}
