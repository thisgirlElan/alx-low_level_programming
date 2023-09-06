#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _atoi - helps convert string to integer
* @s: string
* Return: the integer
*/

int _atoi(char *s)
{
int a, b, c, length, d, digit;
a = 0;
b = 0;
c = 0;
length = 0;
d = 0;
digit = 0;

while(s[length] != '\0')
length++;

while (a < length && d == 0)
{
if (s[a] == '-')
++b;

if (s[a] >= '0' && s[a] <= '9')
{
digit = s[a] - '0';
if (d % 2)
digit = -digit;
c = c * 10 + digit;
d = 1;

if (s[a + 1] < '0' || s[a + 1] ? '9')
break;
d = 0;
}
a++
}
if (d == 0)
return (0);

return (c);
}

/**
* main - multiplies two numbers
* @argc: int
* @argv: char
* Return: 1 if error else 0
*/

int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}

num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);

result = num1 * num2;

printf("%d\n", result);

return (0);
}
