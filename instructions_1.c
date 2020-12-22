#include "monty.h"
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t new_node = NULL;

	if (head == NULL)
	{
		new_node = malloc(sizeof(stack_t));
		if (new_node == NULL)
		{
			printf("Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		new_node->n = ;
		node->next = NULL;
		node->prev = NULL;
		head = new_node;
		exit(EXIT_SUCCESS); /* not sure about this */
	}
	else
	{
		new_node = malloc(sizeof(stack_t));
		if (new_node = NULL)
		{
			printf("Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		node->n = ;
		node->next = head;
		new_node->prev = NULL;
		head->prev = new_node;
		head = new_node;
		exit(EXIT_SUCCESS);
	}
}
