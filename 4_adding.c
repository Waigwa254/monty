#include "monty.h"

/**
 * adder - topp values are addedd
 * @stack - satck
 * @line_number: lin number
 * Description: des
 */

void adder(stack_t **stack, unsigned int line_number)
{
if ((*stack)->next == NULL || (*stack)->next->next == NULL)
{
set_op_tok_error(short_stack_error(line_number, "add"));
return;
}
(*stack)->next->next->n += (*stack)->next->n;
monty_pop(stack, line_number);
}
