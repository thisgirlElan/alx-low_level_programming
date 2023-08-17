#include "main.h"

/**
* print_line - draws a straight line on the terminal
* @n: number of times _ should be printed
* Return: Always 0
*/
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}

for (int lines = 0; lines < n; lines++)
{
_putchar('_');
}
_putchar('\n');
}
