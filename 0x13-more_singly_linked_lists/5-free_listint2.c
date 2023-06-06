#include "lists.h"

/**
* free_listint2 - Frees a listint_t list and sets the head to NULL.
* @head: pointer to the head of the list
*
* Return: Success 0
*/

void free_listint2(listint_t **head)
{
listint_t *current;

while (*head != NULL)
{
current = *head;
*head = (*head)->next;
free(current);
}

*head = NULL;
}
