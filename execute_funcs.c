#include "monty.h"

/**
* exec_functions - executes funcs if needed
* @opcode: code from user input
* @stack: *stack pointer
* @line_number: line number from input
* Description: executes funcs if needed
* Return: success/failure
*/
int exec_functions(char *opcode, stack_t **stack, unsigned int line_number)
{
int itr;

	instruction_t opcodes[] = {
		{"pall", pall},
	/*
		*{"pint", pint},
		*{"pop", pop},
		*{"swap", swap},
		*{"add", add},
		*{"nop", nop},
	*/
		{NULL, NULL}
	};

for (itr = 0; opcodes[itr].opcode != NULL; itr++)
{
if (strcmp(opcode, opcodes[itr].opcode) == 0)
{
(opcodes[itr].f)(stack, line_number);
return (EXIT_SUCCESS);
}
}
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
exit(EXIT_FAILURE);
}
