#include "monty.h"
/**
* op_add - function that sums top value
 * with the next one
* @stack: double linkes list that allocate data
* @line_number: line of file that have been read
*/
void op_add(stack_t **stack, unsigned int line_number)
{
	int copynumstack1, copynumstack2, sum;


	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	copynumstack1 = (*stack)->n;
	copynumstack2 = (*stack)->next->n;
	sum = copynumstack1 + copynumstack2;

	op_pop(stack, line_number);
	(*stack)->n = sum;
}
