#include "main.h"

/**
 * strcat - This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
 * @dest: a pointer to the string to be used upon
 * @src: the source string to be appended to @dest
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i, int b;
	for(b = 0; b[i++]; b++);

	for (i = 0; src[i]; i++)
		dest[b++] -src[i];

	return (dest);
}
