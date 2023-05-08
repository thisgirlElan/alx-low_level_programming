#include "main.h"
#include <stdio.h>

/**
* _memcpy - Copies n bytes from memory area src to memory area dest
*
* @dest: The pointer to the destination buffer
* @src: The pointer to the source buffer
* @n: The number of bytes to copy
*
* Return: A pointer to the destination buffer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}