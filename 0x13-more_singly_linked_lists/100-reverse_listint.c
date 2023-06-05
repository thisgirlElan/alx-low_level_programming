#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list
* @head: A pointer to the head of the list
*
* Return: the head pointer if the list is empty || has one node else the tail node as the head
*/

listint_t *reverse_listint(listint_t **head)
{
if (head == NULL || *head == NULL || (*head)->next == NULL)
{
return (*head);
}

listint_t *prev = NULL;
listint_t *current = *head;

while (current != NULL)
{
listint_t *next = current->next;

current->next = prev;

prev = current;
current = next;
}

*head = prev;

return (*head);
}
