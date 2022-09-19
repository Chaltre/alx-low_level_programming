#include"main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string parameter input
 * Return: no return
 */

void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}

	for (i--; i >= 0; i--)
		putchar(s[count]);
	putchar('\n');
}

