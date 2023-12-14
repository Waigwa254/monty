#include "monty.h"

/**
 * malloc_error - error prnt
 * Return: fails
 *
 */
int malloc_error(void)
{
fprintf(stderr, "Error: malloc failed\n");
return (EXIT_FAILURE);
}

/**
 * no_int_error - Prges.
 * @line_number: Lin
 * Return: failss
 */
int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
