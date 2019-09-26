#include "monty.h"
/**
* op_pall - function that prints all the values
* on the stack starting from the top of the stack.
* @stack: double linkes list that allocate data
* @line_number: line of file that have been read
*/
void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *copystack = NULL;
	
	UNUSED(line_number);
	copystack = *stack;
	while (copystack)
	{
		printf("%d\n", copystack->n);
		copystack = copystack->next;
	}
}
