#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list
* @head: A pointer to the head of the list
*
* Return: the head pointer if the list is empty || has one node else the tail node as the head
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;
listint_t *next;

while (current != NULL)
{
next = current->next;
current->next = prev;
prev = current;
current = next;
}

*head = prev;
return (*head);
}
