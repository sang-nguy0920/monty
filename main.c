#include "monty.h"
int main(void)
{
	char buffer = NULL;
	size_t bufsize = 0;
	unsigned int line_number = 0;
	size_t line;
	FILE *fp = fopen(*.m);

	if(!fp)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return EXIT_FAILURE
	}
	line = _getline(stdin);
	while (line >= 0)
	{
		line_number++;
		/*where we tokenize*/
		line = getline(&buffer, &bufsize, fp);
	}
	free(buffer);
	buffer = NULL;
	fclose(fp);
	return (EXIT_SUCCESS);
}
