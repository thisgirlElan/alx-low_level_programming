#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to get the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}

return (len);
}

/**
* _strcpy - copies src string and returns dest pointer
* @dest: dest char
* @src: src char
*
* Return: pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';

return (dest);

}

/**
* dog_t - creates a new dog
* @name: name
* @age: age
* @owner: owner
*
* Return: pointer to new dog, NULL otherwise.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
if (name == NULL || owner == NULL)
{
return (NULL);
}

dog_t *newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}

newDog->name = malloc(_strlen(name) + 1);
newDog->owner = malloc(_strlen(owner) + 1);

if (newDog->name == NULL || newDog->owner == NULL)
{
free(newDog->name);
free(newDog->owner);
free(newDog);
return (NULL);
}

_strcpy(newDog->name, name);
_strcpy(newDog->owner, owner);
newDog->age = age;

return (newDog);
}
