#include "monty.h"
void push(stack_t **stack, unsigned int line_number, char *n)
{
	stack_t *new_node = NULL;
	stack_t *head = NULL;
	line_number = line_number;
	if (head == NULL)
	{
		new_node = malloc(sizeof(stack_t));
		if (new_node == NULL)
		{
			printf("Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		new_node->n = atoi(n);
		new_node->next = NULL;
		new_node->prev = NULL;
		head = new_node;
	printf("%d\n", new_node->n);
		exit(EXIT_SUCCESS); /* not sure about this */
	}
	else
	{
		new_node = malloc(sizeof(stack_t));
		if (new_node == NULL)
		{
			printf("Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		new_node->n = atoi(n);
		new_node->next = head;
		new_node->prev = NULL;
		head->prev = new_node;
		head = new_node;
	printf("%d\n", new_node->n);
		exit(EXIT_SUCCESS);
	}
	*stack = new_node;
}
