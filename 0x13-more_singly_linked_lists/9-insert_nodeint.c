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
listint_t *new_node, *current;
unsigned int count = 0;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

current = *head;
while (current != NULL)
{
if (count == idx - 1)
{
new_node->next = current->next;
current->next = new_node;
return (new_node);
}
current = current->next;
count++;
}

free(new_node);
return (NULL);
}
