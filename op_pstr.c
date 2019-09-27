#include "monty.h"
/**
* op_pstr - function that prints each element from
* the stack it's ascii code, otherwise kill program
* @stack: double linkes list that allocate data
* @line_number: line of file that have been read
*/
void op_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *copystack = *stack;
	int n;

	UNUSED(line_number);

	if (*stack == NULL)
	{
		printf("\n");
	}
	while (copystack && copystack->n != '\0')
	{
		n = copystack->n;

		if (!isascii(n))
		{
			break;
		}
		printf("%c", n);

		copystack = copystack->next;
	}

	printf("\n");
}


