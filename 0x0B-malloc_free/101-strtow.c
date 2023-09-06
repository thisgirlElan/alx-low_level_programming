#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* **strtow -  returns a pointer to an array of strings (words)
* @str: char
* Return: NULL if str == NULL or str == ""
*/

int is_space(char c)
{
return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char* str)
{
int count = 0;
int in_word = 0;

while (*str)
{
if (!is_space(*str))
{
if (!in_word)
{
in_word = 1;
count++;
}
}
else
{
in_word = 0;
}
str++;
}

return (count);
}

char **strtow(char *str)
{
if (str == NULL || strcmp(str, "") == 0)
return (NULL);

int num_words = count_words(str);
char **words = (char **)malloc((num_words + 1) * sizeof(char *));

if (words == NULL)
return (NULL);

int word_index = 0;
int word_length = 0;
int in_word = 0;

while (*str)
{
if (!is_space(*str))
{
if (!in_word)
{
in_word = 1;
word_length = 0;
char *start = str;
while (*str && !is_space(*str))
{
word_length++;
str++;
}
words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
if (words[word_index] == NULL)
{
for (int i = 0; i < word_index; i++)
free(words[i]);
free(words);
return (NULL);
}
strncpy(words[word_index], start, word_length);
words[word_index][word_length] = '\0';
word_index++;
}
}
else
{
in_word = 0;
str++;
}
}

words[num_words] = NULL;

return (words);
}
