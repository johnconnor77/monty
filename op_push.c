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

	newnode = malloc(sizeof(stack_t));
	if (!newnode)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	/* strtok see's the entire program */
	auxstrtok = strtok(NULL, DELIMITER);
	if (!auxstrtok || !_isdigit(auxstrtok))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
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
}
