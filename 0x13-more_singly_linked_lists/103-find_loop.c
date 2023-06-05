#include "lists.h"

/**
* find_listint_loop - finds the loop in a listint_t linked list
* @head: A pointer to the head of the list
*
* Return: The address of the node where loop starts || NULL
*/

listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return slow;
}
}

return NULL;
}
