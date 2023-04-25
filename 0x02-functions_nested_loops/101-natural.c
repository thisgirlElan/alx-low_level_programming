#include <stdio.h>

/**
* main - prints sum of multiples of 3 or 5 below 1024
*excluding 1024 and a new line
*
* Return: 0
*/

int main(void)
{
int i, sum = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
{
sum += i;
}

}

printf("%d\n", sum);

return 0;

}
