#include "main.h"

/**
* print_triangle - prints the size if > 0 else, newline
* @size: size of the triangle
* Return: Always 0
*/

void print_triangle(int size)
{
int row, space;
if (size > 0)
{
for (row = 1; row <= size; row++)
{
for (space = (size - row); space >= 1; space--)
{
_putchar(' ');
}

for (space = 0; space < row; space++)
{
_putchar('#');
}

if (row == size)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
