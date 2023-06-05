#include "lists.h"

/**
* struct listint_s - singly linked list
* @head: pointer to the head of the list
* @next: points to the next node
*
* Description: Set the head pointer to NULL
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
