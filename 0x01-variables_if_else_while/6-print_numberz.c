#include <stdio.h>

/**
 * main - print single digit numbers with putchar
 *
 * Return: 0
 */
int main(void)
{
int num;

for (num = 48; num < 58; num++)
{
putchar(num);
}

putchar('\n');

return (0);
}
