#include "monty.h"
int main(int argc, char **argv)
{
	char buffer = NULL;
	size_t bufsize = 0;
	unsigned int line_number = 1;
	size_t line;
	FILE *fd;
	stack_t *head = NULL;
	stack_t *tail = NULL;

	if(argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return EXIT_FAILURE
	}
	
	fd = fopen(argv[1], "r");

	if (fd == NULL);
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &bufsize, fd) != -1)
	{
		line_number++;
		/*where we tokenize*/
		line = getline(&buffer, &bufsize, fd);
	}
	free(buffer);
	buffer = NULL;
	fclose(fd);
	return (EXIT_SUCCESS);
}
