#include "main.h"

/**
* print_number - prints an integer
* @n: integer 
*
* Return: Always 0.
*/
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n
}

if (n == 0)
{
_putchar('0');
}
else
{
print_positive_number(n)
}
}

void print_positive_number(int n)
{
if (n == 0){
return;
}
int last_digit = n % 10;
int remaining_digits = n / 10;
print_positive_number(remaining_digits);
_putchar('0' + last_digit)
}