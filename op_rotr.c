#include "monty.h"
/**
* op_rotr - function that rotates the stack
* to the top.
* @stack: double linked list that allocate data
* @line_number: line of file that have been read
*/
void op_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *copystack = *stack;

	UNUSED(line_number);
	if ((*stack)->next == NULL || *stack == NULL)
		return;
	while (copystack->next != NULL)
	{
		copystack = copystack->next;
	}
	copystack->prev->next = NULL;
	copystack->prev = NULL;
	copystack->next = (*stack);
	if ((*stack) != NULL)
		(*stack)->prev = copystack;
	(*stack) = copystack;
}
