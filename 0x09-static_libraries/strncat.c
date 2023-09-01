#include "main.h"

/**
* _strncat - concatenates n bytes of two strings
* @dest: pointer to the destination string
* @src: pointer to the source string
* @n: the number of bytes to concatenate
*
* Return: pointer to the destination string
*/
char *_strncat(char *dest, char *src, int n)
{
char *dest_start = dest;

while (*dest != '\0')
{
dest++;
}

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

*dest = '\0';

return (dest_start);
}
