#include "monty.h"

/**
 * check_mode - mode 
 * @stack: A po
 * Return: If
 */
int check_mode(stack_t *stack)
{
if (stack->n == STACK)
return (STACK);
else if (stack->n == QUEUE)
return (QUEUE);
return (2);
}
