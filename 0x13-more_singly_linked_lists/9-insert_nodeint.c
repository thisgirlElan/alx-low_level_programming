#include "lists.h"

/**
* insert_nodeint_at_index -  inserts a new node at a given position in a listint_t linked list
* @head: A pointer to the head of the list
* @idx: index
* @n: integer
*
* Return: NULL if pointer is null || if it fails else address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
if (head == NULL)
{
return (NULL);
}

if (idx == 0)
{
return add_nodeint(head, n);
}

listint_t *current = *head;
unsigned int count = 0;

while (current != NULL && count < idx - 1)
{
current = current->next;
count++;
}

if (current == NULL)
{
return (NULL);
}

listint_t *new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->next = current->next;

current->next = new_node;

return (new_node);
}
