#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times \ should be printed
* Return: Always 0
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}

for (int row = 0; row < n; row++)
{
for (int num_lines = 0; num_lines < row; num_lines++)
{
_putchar(' ');
}
}
_putchar('\\');
_putchar('\n');
}
