#include "lists.h"

/**
* main - Prints sentence
*
* Return: 0.
*/

int main(void)
{
list_t *head = NULL;

add_node(&head, "Holberton");
add_node(&head, "School");
add_node_end(&head, "of");
add_node_end(&head, "Engineering");

print_list(head);
free_list(head);

return (0);
}
