#include "main.h"

/**
* print_triangle - prints the size if > 0 else, newline
* @size: size of the triangle
* Return: Always 0
*/
void print_triangle(int size)
{
int row, hash, space;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 1; row <= size; row++)
{
for (space = size - row; space >= 1; space--)
{
_putchar(' ');
}
for (hash = 1; hash <= row; hash++)
{
_putchar('#')
}
_putchar('\n')
}

}

}
