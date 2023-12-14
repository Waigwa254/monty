#include "monty.h"
#include <string.h>

void free_stack(stack_t **stack);
int init_stack(stack_t **stack);
int check_mode(stack_t *stack);

/**
* free_stack - frees a stack_t stack
* @stack: A pointer to the top or
*         bottom (queue)
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

/**
* init_stack - initializes a stack_t stack with beginning
*              stack and ending queue nodes
* @stack: pointer to an unitialized stack_t stack
*
* Return: error occurs - EXIT_FAILURE
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

/**
* check_mode - checks if linked list is in stack or queue mode
* @stack: poiinter to the top (stack) or bottom (queue)
*
* Return: If the stack_t is in stack mode - STACK (0)
*         If the stack_t is in queue mode - QUEUE (1)
*/
int check_mode(stack_t *stack)
{
	if (stack->n == STACK)
		return (STACK);
	else if (stack->n == QUEUE)
		return (QUEUE);
	return (2);
}
