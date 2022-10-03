#include "main.h"

/**
 * _strlen - function that returns length.
 * @s: use to find the length of a string.
 * Return: 0
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}
