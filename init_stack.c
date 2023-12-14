#include "monty.h"

/**
 * init_stack - e nodes.
 * @stack: A poitack.
 *
 * Return: If an error occurs - EXIT
 */
int init_stack(stack_t **stack)
{
	stack_t *s;

	s = malloc(sizeof(stack_t));
	if (s == NULL)
		return (malloc_error());

	s->n = STACK;
	s->prev = NULL;
	s->next = NULL;

	*stack = s;

	return (EXIT_SUCCESS);
}
