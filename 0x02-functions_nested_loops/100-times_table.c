#include "main.h"

/**
* print_times_table - prints multiples of n
*prints nothing if n > 15 || n < 0
*
* Return: 0
*/
void print_times_table(int n)
{
int num;
int mult;
int prod;

if (n >= 0 && n <= 15)
{
for (num = 0; num < count; num++)
{
_putchar('0');
for (mult = 0; mult < count; mult++)
{
_putchar(',');
_putchar(' ');
prod = num * mult;

if (prod <= 99)
_putchar(' ');

if (prod <= 9)
_putchar(' ');

if (prod >= 100)
{
_putchar((prod / 100) + '0');
_putchar(((prod / 10)) % 10 + '0');
}
else if (prod <= 99 && prod >= 10)
{
_putchar((prod / 10) + '0');
}
else
{
_putchar((prod % 10) + '0');
}

}

_putchar('\n');

}

}

}
