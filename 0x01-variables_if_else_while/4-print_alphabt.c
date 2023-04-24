#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints alphabets except q and e
 * followed by a new line
 * Return: 0
 */
int main(void)
{
char a = 'a';

for (a = 'a'; a <= 'z'; a++)
{
if (a != 'q' && a != 'e')
{
putchar(a);
}
}

putchar('\n');
return (0);
}
