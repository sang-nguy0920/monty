#include "monty.h"
/**
* main - main entry to program
* @argc: num of args
* @argv: *pointer to array of args
* Description: main entry to program
* Return: success/failure
*/

int main(int argc, char *argv[])
{
	FILE *fp;
	stack_t *stack = NULL;
	char *line = NULL;
	char *opcode;
	char *n;
	unsigned int line_number;
	size_t len = 0;
	ssize_t read;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	line_number = 0;
	while ((read = getline(&line, &len, fp)) != -1)
	{
		line_number++;
		opcode = strtok(line, "\n ");
		if (opcode == NULL || strncmp(opcode, "#", 1) == 0)
			continue;
		if (strcmp(opcode, "push") == 0)
		{
			n = strtok(NULL, "\n ");
			push(&stack, line_number, n);
		}
		else
			exec_functions(opcode, &stack, line_number);
	}
	free(stack);
	free(line);
	free(fp);
	return (EXIT_SUCCESS);
}
