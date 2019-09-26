#include "monty.h"
/**
* get_op - function for tracking the correct one
* @input: pointer char that contains what comes from inline
* Return: the correctly instruction for following
*/
instruction_t *get_op(const char *input)
{
	int i = 0;
	instruction_t *opt = NULL;
	instruction_t ops[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"nop", op_nop},
		{"sub", op_sub},
		{"div", op_div},
		{"mul", op_mul},
		{"mod", op_mod},
		{"pchar", op_pchar},
		{"pstr", op_pstr},
		{NULL, NULL}
	};

	while (ops[i].opcode && strcmp(ops[i].opcode, input) != 0)
		i++;

	opt = malloc(sizeof(instruction_t));
	if (opt == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	opt->opcode = ops[i].opcode;
	opt->f = ops[i].f;
	return (opt);
}
