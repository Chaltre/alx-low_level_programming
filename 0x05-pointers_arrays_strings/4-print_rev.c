#include"main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string parameter input
 * Return: no return
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	for (--i; i >= 0; --i)
		putchar(s[i]);
	putchar('\n');
}
