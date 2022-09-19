include "main.h"
/**
 * swap_int - swaps the values of two integers
 * using of two input parameters.
 * @a: parameter 1
 * @b: parameter 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
return(0)
}
