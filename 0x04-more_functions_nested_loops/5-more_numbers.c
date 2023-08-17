#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line.
*
* Return: Always 0
*/

void more_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
int number;
for (number = 0; number <= 14; number++)
{
if (number > 9)
{
print_digit(number / 10);
}
print_digit(number % 10);
}
_putchar('\n');
}
}

void print_digit(char num)
{
_putchar('0' + num);
}
