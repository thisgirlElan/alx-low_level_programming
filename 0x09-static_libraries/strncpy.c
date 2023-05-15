#include "main.h"

/**
* _strncpy - Copies the first `n` characters of the string `src`
*            to the buffer pointed to by `dest`.
* @dest: A pointer to the buffer to which the string should be copied.
* @src: The string to be copied.
* @n: The maximum number of characters to copy from `src`.
*
* Return: A pointer to the destination string `dest`.
*/
char *_strncpy(char *dest, char *src, int n)
{
int index = 0;

while (src[index] != '\0' && index < n) {
dest[index] = src[index];
index++;
}

while (index < n) {
dest[index] = '\0';
index++;
}

return (dest);
}
