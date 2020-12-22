#include "monty.h"
/**
 *pall- prints stack from top
 *@stack: double pointer to a double linked list
 *@line_number: unused
 *Description: main entry to program
 *Return: success/failure
**/
void pall(stack_t **stack, unsigned int __attribute__((unused))line_number)
{
	stack_t *traverse = *stack;

	if (stack == NULL || *stack == NULL)
		return;
	while (traverse != NULL)
	{
		printf("%d\n", traverse->n);
		traverse = traverse->next;
	}
}
