#include "monty.h"


/**
* free_stack - Frees a stack_t stack.
* @stack: A pointer to the top or bottom of stack
*/
void free_stack(stack_t **stack)
{
	stack_t *tmp = *stack;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
