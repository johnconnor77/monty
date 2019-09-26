#include "monty.h"
/**
* op_sub - function that subs top next value
* with the previous one
* @stack: double linkes list that allocate data
* @line_number: line of file that have been read
*/
void op_sub(stack_t **stack, unsigned int line_number)
{
	int copynumstack1, copynumstack2, res;


	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	copynumstack1 = (*stack)->n;
	copynumstack2 = (*stack)->next->n;
	res = copynumstack2 - copynumstack1;

	op_pop(stack, line_number);
	(*stack)->n = res;
}
