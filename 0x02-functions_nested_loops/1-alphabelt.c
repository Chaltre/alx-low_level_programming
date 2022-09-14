#include "main.h"
/**
 * print_alphabelt - function to print abc
 *
 * Return: 0
 */
void print_alphabelt(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
