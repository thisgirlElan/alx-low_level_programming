#include "main.h"

/**
* print_number - prints an integer
* @n: integer 
*
* Return: Always 0.
*/

void print_number(int n)
{
unsigned int i = n;

if (n < 0)
{
_putchar('-');
i = -i;
}
else
{
i = i;
}


if (i > 9)
{
print_number(i / 10);
}
_putchar(i % 10 + '0');

}
