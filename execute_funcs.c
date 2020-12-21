#include "monty.h"
/**
* monty_num_functions - check num of functions
* @functions : counts num of functions
* Description: check num of funcs
* Return: num of functions
*/

int monty_num_functions(funcs_s functions[])
{
unsigned int i;

i = 0;
while (functions[i].name != NULL)
i++;

return (i);
}

/**
* exec_functions - executes funcs if needed
* @tokens: tokens to compare to see if they are funcs
* Description: executes funcs if needed
* Return: args
*/
int exec_functions(char **tokens)
{
int stat;
unsigned int len, num, i;

	funcs_s functions[] = {
		{"push", hsh_exit},
		{"pall", hsh_env},
		{"pint", hsh_cd},
		{"pop", hsh_setenv},
		{"swap", hsh_unsetenv},
		{"add", hsh_unsetenv},
		{"nop", hsh_unsetenv},
		{NULL, NULL}
	};

if (tokens[0] == NULL)
return (1);

len = strlen(tokens[0]);

num = monty_num_functions(functions);
for (i = 0; i < num; i++)
{
if (strncmp(tokens[0], functions[i].name, len) == 0)
{
stat = (functions[i].p)();
return (stat); /*return builtin function */
}
}
return (1);
}