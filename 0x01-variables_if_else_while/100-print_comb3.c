#include <stdio.h>
/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
	int i;
	int j;

	for (i = 10; i <= 19; i++)
	{
		for (j = 10; j <= 19; j++)
		{
			if ((j % 10) > (i % 10))
			{	
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
 				if (i != 18 || j != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}	

		}	
	}
putchar('\n');
return (0);
}
