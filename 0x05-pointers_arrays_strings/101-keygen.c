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
char password[PASSWORD_LENGTH + 1];
int i, rand_num;

srand(time(NULL));

for (i = 0; i < PASSWORD_LENGTH; i++)
{
rand_num = rand() % 62;
if (rand_num < 26)
{
password[i] = 'a' + rand_num;
}
else if (rand_num < 52)
{
password[i] = 'A' + rand_num - 26;
}
else
{
password[i] = '0' + rand_num - 52;
}
}

password[PASSWORD_LENGTH] = '\0';

printf("%s\n", password);

return (0);
}
