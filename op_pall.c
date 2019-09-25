#include "monty.h"
void op_pall(stack_t **stack, unsigned int line_number)
{
    UNUSED(line_number);
    stack_t *copystack = NULL;

    copystack = *stack;
    while(copystack)
    {
            printf("%d\n",copystack->n);
            copystack = copystack->next;
    }
    return;
}

