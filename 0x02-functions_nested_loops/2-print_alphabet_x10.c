#include "main.h"
/**
 * print_alphabet_x10 - function to print abc 10 times
 * Description: using the print_alphabet_x10
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char i, c;

	for (i = '0'; i <= '9'; i++);
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
