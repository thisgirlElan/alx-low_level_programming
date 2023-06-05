#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) in a listint_t linked list
* @head: a pointer to the head of the list
*
* Return: 0 if list is empty else sum
*/

int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}
