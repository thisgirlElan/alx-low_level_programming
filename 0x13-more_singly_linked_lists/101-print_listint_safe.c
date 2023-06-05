#include "lists.h"

/**
* print_listint_safe - prints a listint_t linked list
* @head: A pointer to the head of the list
*
* Return: The number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head;
const listint_t *fast = head;
size_t count = 0;

while (fast != NULL && fast->next != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;

slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
count++;
exit(98);
}
}

if (fast != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
}

return (count);
}
