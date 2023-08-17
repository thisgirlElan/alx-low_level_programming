#include "main.h"

/**
* print_square - prints the size if > 0 else, newline
* @size: size of the square
* Return: Always 0
*/

void print_square(int size)
{
int i, j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < (size-1); j++)
{
_putchar('#');
}

_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
