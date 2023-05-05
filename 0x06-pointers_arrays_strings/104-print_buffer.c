#include "main.h"
#include <stdio.h>

/**
* print_buffer - prints the content of a buffer
* @b: pointer to the buffer
* @size: size of the buffer
*
* Return: void
*/
void print_buffer(char *b, int size)
{
int i, j;

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);

for (j = i; j < i + 10; j++)
{
if (j < size)
printf("%02x", b[j]);

else
printf("  ");

if (j % 2 == 1)
printf(" ");
}
for (j = i; j < i + 10; j++)
{
if (j >= size)
break;

if (b[j] >= ' ' && b[j] <= '~')
putchar(b[j]);

else
putchar('.');

}
putchar('\n');
}
if (size <= 0)
putchar('\n');
}
