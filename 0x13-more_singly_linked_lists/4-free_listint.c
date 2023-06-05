#include "lists.h"

/**
* free_listint -  frees a listint_t list
* @head: pointer to the head of the list
*
* Description: Free the memory of the current node
* Return: Success 0
*/

void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
