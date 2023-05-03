#include "main.h"

/**
* puts_half - prints second half of the string
* @str: char string
*
* Return: 0 success.
*/
void puts_half(char *str)
{
int length = 0, n, i;

while (*(str + length) != '\0')
{
length++;
}

n = (length % 2 == 0) ? length / 2 : (length - 1) / 2;

for (i = n; i < length; i++)
{
_putchar(*(str + i));
}
_putchar('\n');

}
