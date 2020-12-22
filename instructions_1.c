#include "monty.h"
/**
 *push- makes a node that becomes the head of a 2x linked list
 *@stack: double pointer to a double linked list
 *@line_number: the current line number
 *@n: content to populate linked list with
 *Return: void
**/
void push(stack_t **stack, unsigned int line_number, char *n)
{
	stack_t *new_node = NULL;
	int itr;

	if (n == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	for (itr = 0; n[itr] != '\0'; itr++)
	{
		if (n[0] == '-' && itr == 0)
			continue;
		if (isdigit(n[itr]) == 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = atoi(n);
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*stack != NULL)
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}

/**
 *push- makes a node that becomes the head of a 2x linked list
 *@stack: double pointer to a double linked list
 *@line_number: the current line number
 *@n: content to populate linked list with
 *Return: void
**/
void pint(stack_t **stack, unsigned int line_number)
{

}