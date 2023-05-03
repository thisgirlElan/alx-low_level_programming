#include "main.h"

/**
* puts2 - prints characters of a string starting in a newline
* @str: char string
*
* Return: 0 success.
*/
void puts2(char *str)
{
int i = 0;

while (*(str + i) != '\0')
{
if (i % 2 == 0)
{
_putchar(*(str + i));
}
i++;
}
_putchar('\n');

}
