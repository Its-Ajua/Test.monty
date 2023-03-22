#include "main.h"

void frees_list(stack_t **head, int unsigned counter)
{
	stack_t *val;
	(void) counter;

	val = *head;

	while (val)
	{
		*head = val->next;
		free(val);
	}
}
