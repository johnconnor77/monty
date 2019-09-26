#include "monty.h"
/**
* op_pstr - f prints the char at the top of the stack
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
		fprintf(stderr, "\n");
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

	fprintf(stderr, "\n");
}


