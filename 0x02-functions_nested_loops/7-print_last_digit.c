#include "main.h"

/**
* print_last_digit - prints the last digit of a number
*
* Return: the the value of the last digit
*/

int print_last_digit(int a)
{
int last_digit = a % 10;

if (last_digit < 0)
{
last_digit *= -1;
}

_putchar(last_digit + '0');

return (last_digit);

}
