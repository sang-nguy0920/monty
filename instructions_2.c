#include "monty.h"
/**
 *sub- subtracts top two nodes then pops top node
 *@stack: double pointer to double linked list
 *@line_number: current line number
 *Return: void
**/
void sub(stack_t **stack, unsigned int line_number)
{
	int val_store = (*stack)->n;

	if ((*stack == NULL) | ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	pop(stack, line_number);
	(*stack)->n -= val_store;
}