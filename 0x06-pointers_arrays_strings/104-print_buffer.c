#include "main.h"
#include <stdio.h>

/**
* print_buffer -  print the content of size bytes of the buffer pointed by b
* @b: destination string
* @size: source string
*
* Return: pointer to dest
*/

void print_buffer(char *b, int size)
{
int i, j;

if (size <= 0)
{
printf("\n");
return;
}

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = 0; j < 10; j++)
{
if (i+j < size)
{
printf("%02x", b[i+j]);
}
else
{
printf("  ");
}
if (j % 2 == 1)
{
printf(" ");
}
}
for (j = 0; j < 10; j++)
{
if (i+j < size)
{
if (b[i+j] >= 32 && b[i+j] <= 126)
{
printf("%c", b[i+j]);
}
else
{
printf(".");
}
}
else
{
printf(" ");
}
}
printf("\n");
}
}
