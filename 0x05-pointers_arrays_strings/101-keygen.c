#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 25

/**
 * main - generates random password
 *
 * Return: 0
 */

int main(void)
{
int i, password[PASSWORD_LENGTH];

srand((unsigned int)time(NULL));

for (i = 0; i < PASSWORD_LENGTH; i++)
{
password[i] = rand() % 94 + 33;
}

printf("Password: ");
for (i = 0; i < PASSWORD_LENGTH; i++)
{
printf("%c", password[i]);
}
printf("\n");

return 0;
}
