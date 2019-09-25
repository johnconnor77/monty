#include "monty.h"
/**
* op_push - function that pushes an element to the stack
* @stack: double linked list that allocate data
* @line_number: line of file that have been read
*/
void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *newnode = NULL;
	int n;
	char *auxstrtok;
	unsigned int j = 0;

	newnode = malloc(sizeof(stack_t));
	if (!newnode)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	auxstrtok = strtok(NULL, DELIMITER);
	if (auxstrtok  == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	for (j = 0; j < strlen(auxstrtok); j++)
		if (isdigit(auxstrtok[j]) == 0)
		{
			fprintf(stderr, "L%d: usage: push integer", line_number);
			exit(EXIT_FAILURE);
		}

	n = atoi(auxstrtok);
	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->n = n;
	if (*stack == NULL)
	{
		*stack = newnode;
		return;
	}
	newnode->next = *stack;
	(*stack)->prev = newnode;
	*stack = newnode;
	return;


}

