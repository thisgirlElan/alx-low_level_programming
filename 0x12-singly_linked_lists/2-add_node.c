#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a list_t list.
* @head: A pointer to the pointer to the list_t list.
* @str: The string to be added to the list.
*
* Return: If the function fails - NULL.
* else - The address of the new element.
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
unsigned int len = 0;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str != NULL)
{
while (str[len])
len++;

new_node->len = len;
new_node->next = *head;
*head = new_node;
}
else
{
free(new_node);
return (NULL);
}

return (new_node);
}
