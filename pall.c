#include "monty.h"
/**
* pall - prints stack from top
* @argc: num of args
* @argv: *pointer to array of args
* Description: main entry to program
* Return: success/failure
*/
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
