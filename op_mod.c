#include "monty.h"
/**
* op_mod - function that mod top next value
* with the previous one
* @stack: double linkes list that allocate data
* @line_number: line of file that have been read
*/
void op_mod(stack_t **stack, unsigned int line_number)
{
	int copynumstack1, copynumstack2, div;


	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	copynumstack1 = (*stack)->n;
	copynumstack2 = (*stack)->next->n;
	div = copynumstack2 % copynumstack1;

	op_pop(stack, line_number);
	(*stack)->n = div;
}

