#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 *@str: followed by a new line
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		putchar(*(str + i));
	}
	putchar('\n');
}
