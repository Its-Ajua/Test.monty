#include "main.h"

int main(int argc, char *argv[])
{
	FILE *file;
	size_t counter = 0;
	ssize_t line = 1;
	char *arr;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file <file>");
		exit(EXIT_FAILURE);
	}

	while (line > 0)
	{
		line = fget(&arr, &counter, file);
		free(arr);
	}

	fclose(file);

return (0);
}
