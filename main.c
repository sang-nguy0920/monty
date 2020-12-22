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
char *code_name;
int *n;
unsigned int line_number;
size_t len = 0; ssize_t read;

if (argc != 2)
{
printf("USAGE: monty file\n");
exit(EXIT_FAILURE);
}
fp = fopen(argv[1], "r");
if (fp == NULL)
{
printf("Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
line_number = 0;
while((read = getline(&line, &len, fp)) != -1)
{
line_number++;
code_name = strtok(line, "\n ");
if (code_name == NULL || strncmp(code_name, "#", 1) == 0)
continue;
if (strcmp(code_name, "push") == 0)
{
n = strtok(NULL, "\n ");
push(&stack, line_number, n);
}
else
exec_functions(code_name, &stack, line_number);
}
/* free shit with func */
return (EXIT_SUCCESS);
}
