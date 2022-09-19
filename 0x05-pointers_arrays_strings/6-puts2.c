#include"main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int x = 0;

	while (x >= 0)
	{
		if (str[x] == '\0')
		{
			putchar('\n');
			break;
		}
		if (x % 2 == 0)
			putchar(str[x]);
		x++;
	}
}
