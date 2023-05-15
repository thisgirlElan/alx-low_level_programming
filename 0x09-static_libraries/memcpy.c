#include "main.h"

/**
 * _memcpy - Copies `n` bytes from the memory area pointed to by `src`
 *           to the memory area pointed to by `dest`.
 * @dest: A pointer to the memory area to which the bytes should be copied.
 * @src: The memory area from which the bytes should be copied.
 * @n: The number of bytes to be copied.
 *
 * Return: A pointer to the destination memory area `dest`.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index = 0;

while (index < n) {
dest[index] = src[index];
index++;
}

return (dest);
}
