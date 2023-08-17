#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line.
*
* Return: Always 0
*/

void more_numbers(void)
{
int number, row, tens, units;

for (row = 0; row < 10; row++)
{
for (number = 0; number <= 14; number++)
{
tens = number / 10;
units = number % 10;
if (number > 9)
{
_putchar(tens + '0');
}
_putchar(units + '0');
}
_putchar(10);
}
}
