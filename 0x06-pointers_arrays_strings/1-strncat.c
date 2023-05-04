#include "main.h"

/**
* _strncat - takes in two strings and concatenates at most n characters of src to the end of dest.
* @dest: destination buffer
* @src: source string
* @n: integer
*
* Return: pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
while (dest[i] != '\0')
i++;

j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';

return (dest);
}
