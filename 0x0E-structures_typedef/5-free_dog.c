#include <stdio.h>
#include <stdlib.h>
#include"dog.h"

/**
* free_dog - frees allocated memory of struct dog
* @d: struct
*/

void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}

free(d->name);
free(d->owner);
free(d);
}
