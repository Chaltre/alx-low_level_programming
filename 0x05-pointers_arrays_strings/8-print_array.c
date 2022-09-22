#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *  @a: input array.
 *  @n: input n elements
 *  Return: no return.
 */
void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		printf("%d", *(a + z));
		if (z != (n - 1))
			printf(", ");
	}
	printf("\n");
}