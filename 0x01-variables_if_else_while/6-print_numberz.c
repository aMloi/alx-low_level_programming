#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 0;

while (a <= 9)
{
putchar(a + '0');
a++;
}

putchar('\n');
return (0);
}
