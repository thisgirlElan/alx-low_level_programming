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
unsigned int count = 0;

while (head != NULL)
{
if (count == index)
{
return (head);
}
count++;
head = head->next;
}

return (NULL);
}
