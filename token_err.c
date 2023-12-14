#include "monty.h"
#include <string.h> 

/**
 * token_arr_len - Gtoks.
  * Return: Lengh
 */
unsigned int token_arr_len(void)
{
	unsigned int toks_len = 0;

	while (op_toks[toks_len])
		toks_len++;
	return (toks_len);
}
