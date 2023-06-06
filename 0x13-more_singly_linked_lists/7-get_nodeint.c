#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list based on the given index
* @head: pointer to the head of the list
* @index: index
*
* Return: NULL if the node does not exist || the current node if the count matches the index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int count = 0;

while (current != NULL)
{
if (count == index)
{
return (current);
}
current = current->next;
count++;
}

return (NULL);
}
