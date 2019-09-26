#include "monty.h"
/**
* op_pint - function that prints top value
* @stack: double linkes list that allocate data
* @line_number: line of file that have been read
*/
void op_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *copystack = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", copystack->n);
}
