#include "monty.h"


/**
 *free_dlistint - program thisgs
 *Result: always return 0
 *@head: pointer to structure
 *Return: value depending on function
 */
void free_stacklist(stack_t *head)
{
	stack_t *copy = head;
	stack_t *next;

	while (copy != NULL)
	{
		next = copy->next;
		free(copy);
		copy = next;
	}
	head = NULL;
}
