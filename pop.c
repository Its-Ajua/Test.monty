#include "main.h"
void p_op(stack_t **head, int unsigned counter)
{
	stack_t *h;

	h = *head;

	if (h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", counter);
		exit(EXIT_FAILURE);
	}

	h = h->next;
	free(h);
}
