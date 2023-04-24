#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 * followed by a new line
 * Return: 0
 */
int main(void)
{
char a = 'a';

while (a <= 'z')
{
putchar(a);
a++;
}

putchar('\n');
return (0);
}
