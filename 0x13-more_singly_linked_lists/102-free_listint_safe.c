#include "lists.h"

/**
* free_listint_safe - Frees a listint_t list safely
* @h: A pointer to the head of the list
*
* Return: The size of the list that was freed
*/

size_t free_listint_safe(listint_t **h)
{
listint_t *slow, *fast;
size_t count = 0;

if (h == NULL || *h == NULL)
return (0);

slow = *h;
fast = (*h)->next;

while (fast != NULL && fast->next != NULL)
{
if (slow == fast)
{
slow = slow->next;
count++;
break;
}

slow = slow->next;
fast = fast->next->next;
count++;
}

while (slow != NULL)
{
listint_t *temp = slow;
slow = slow->next;
free(temp);
count++;
}

*h = NULL;

return (count);
}
