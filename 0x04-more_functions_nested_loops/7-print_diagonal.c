#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times \ should be printed
* Return: Always 0
*/
void print_diagonal(int n)
{
int row, num_lines;
if (n > 0)
{
for (row = 0; row < n; row++)
{
for (num_lines = 0; num_lines < row; num_lines++)
{
_putchar(' ');
}
_putchar('\\');
if (row == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
