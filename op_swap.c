#include "monty.h"
/**
* op_swap - function that changes the top value
 * with the next one, just values not address
* @stack: double linkes list that allocate data
* @line_number: line of file that have been read
*/
void op_swap(stack_t **stack, unsigned int line_number)
{
	int copynumstack = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	copynumstack = (*stack)->next->n;
	(*stack)->next->n = (*stack)->n;
	(*stack)->n = copynumstack;

}

