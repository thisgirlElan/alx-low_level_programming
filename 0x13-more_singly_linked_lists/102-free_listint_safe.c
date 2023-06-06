#include "lists.h"

/**
* free_listint_safe - Frees a listint_t list safely
* @h: A pointer to the head of the list
*
* Return: The size of the list that was freed
*/

size_t free_listint_safe(listint_t **h)
{
listint_t *current = *h;
listint_t *temp = NULL;
size_t count = 0;

while (current != NULL)
{
count++;
if (current->next >= current)
{
temp = current->next;
free(current);
*h = NULL;
return count;
}
temp = current;
current = current->next;
free(temp);
}

*h = NULL;

return (count);
}
