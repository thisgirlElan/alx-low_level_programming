#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
char *letters = "aAeEoOtTlL";
char *replacements = "4433007711";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = replacements[j];
break;
}
}
}

return (str);
}
