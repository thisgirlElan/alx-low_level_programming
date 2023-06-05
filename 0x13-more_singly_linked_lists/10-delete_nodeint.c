#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at a given index in a listint_t linked list
* @head: A pointer to the head of the list
* @index: index
*
* Return: -1 if the head pointer || the list is empty || index > node else 1 to indicate success
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
if (head == NULL || *head == NULL)
{
return (-1);
}

listint_t *current = *head;
listint_t *previous = NULL;
unsigned int count = 0;

while (current != NULL && count < index)
{
previous = current;
current = current->next;
count++;
}

if (current == NULL)
{
return (-1);
}

if (previous == NULL)
{
*head = current->next;
}
else
{
previous->next = current->next;
}

free(current);

return (1);
}
