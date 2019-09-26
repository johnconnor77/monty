#include "monty.h"
/**
* op_pop - function that delete top value
* @stack: double linkes list that allocate data
* @line_number: line of file that have been read
*/
void op_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *copystack = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	if (copystack->next != NULL)
		(*stack)->prev = NULL;
	else
		*stack = NULL;
	free(copystack);
}



