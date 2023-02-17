#include <stdio.h>

/**
 * main - Prints all lowercase letters of the alphabet except for 'e' and 'q'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
	}
letter++;
}

return (0);
}
