#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - main block
*
* Description: prints all single digit numbers of base 10
* starting from 0, followed by a new line.
* Return: 
*/
int main(void)
{
char ch;
for (ch = '0'; ch <= '9'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
