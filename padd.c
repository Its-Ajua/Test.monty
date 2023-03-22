#include "main.h"
void p_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int amount = 0, temp;

	h = *head;

	while (h)
	{
		h = h->next;
		amount++;
	}

	if (amount < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short", amount);
		exit(EXIT_FAILURE);
	}

	temp = h->n + h->next->n;
	h->next->n = temp;
	*head = h->next;
	free(h);
}
