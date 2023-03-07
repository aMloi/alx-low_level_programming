#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

/* determine the length of the string */
while (*(s + len) != '\0')
{
len++;
}
