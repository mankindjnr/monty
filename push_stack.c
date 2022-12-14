#include "monty.h"

/**
 *main - entry point to push in to stack function
 */
int main(int argc, char **argv)
{
	int entry2;
	stack_t *temp, *pointer;

	entry2 = atoi(argv[1]);

	if (argc < 2 || !isdigit(entry2))
	{
		fprintf(stderr, "L<line_number>: usage: push integer\n");
		exit(EXIT_FAILURE);
	}

	pointer = malloc(sizeof(stack_t));

	if (pointer == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	if (temp == NULL)
	{
		pointer->n = entry2;
		pointer->next = NULL;
		temp = pointer;
	}
	else
	{
		pointer->n = entry2;
		pointer->next = temp;
		temp = pointer;
	}

	return (EXIT_SUCCESS);
}
