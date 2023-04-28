#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int i, number = 612852475143;

for (i = 3; i < 782849; i = i + 2)
{
while ((number % i == 0) && (number != i))
{
number = number / i;
}
}

printf("%lu\n", number);

return (0);
}
