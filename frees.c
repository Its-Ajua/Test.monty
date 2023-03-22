#include "main.h"

void frees_list(stack_t *head)
{
	stack_t *val;

	val = head;

	while (head)
	{
		head = head->next;
		free(val);
	}
}
