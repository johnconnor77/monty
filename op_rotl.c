#include "monty.h"
/**
* op_rotl - function that rotates the stack
* to the bottom
* @stack: double linkes list that allocate data
* @line_number: line of file that have been read
*/
void op_rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *copystack = *stack;

	UNUSED(line_number);
	if ((*stack)->next == NULL || *stack == NULL)
		return;
	while (copystack->next != NULL)
	{
		copystack = copystack->next;
	}
	copystack->next = (*stack);
	(*stack)->prev = copystack;
	(*stack) = (*stack)->next;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
