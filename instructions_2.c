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
/**
 *_div- subtracts top two nodes then pops top node
 *@stack: double pointer to double linked list
 *@line_number: current line number
 *Return: void
**/
void _div(stack_t **stack, unsigned int line_number)
{
	int val_store = (*stack)->n;
	unsigned int x = line_number;

	if (val_store == 0)
	{
		fprintf(stderr, "L%d: division by 0\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack == NULL) | ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", x);
		exit(EXIT_FAILURE);
	}
	pop(stack, line_number);
	(*stack)->n /= val_store;
}
/**
 *_mul- multiplies top two nodes then pops top node
 *@stack: double pointer to double linked list
 *@line_number: current line number
 *Return: void
**/
void _mul(stack_t **stack, unsigned int line_number)
{
	int val_store = (*stack)->n;
	unsigned int x = line_number;

	if ((*stack == NULL) | ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", x);
		exit(EXIT_FAILURE);
	}
	pop(stack, line_number);
	(*stack)->n *= val_store;
}
/**
 *_mod- uses modulus operation top two nodes then pops top node
 *@stack: double pointer to double linked list
 *@line_number: current line number
 *Return: void
**/
void _mod(stack_t **stack, unsigned int line_number)
{
	int val_store = (*stack)->n;

	if (val_store == 0)
	{
		fprintf(stderr, "L%d: division by 0\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack == NULL) | ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	pop(stack, line_number);
	(*stack)->n %= val_store;
}
