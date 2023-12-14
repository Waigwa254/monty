#include "monty.h"

/**
 * get_numbase_len - gets
 * @num: n
 * @base: b
 *
 * Return: integer
 */
int get_numbase_len(unsigned int num, unsigned int base)
{
	int len = 1;

	while (num > base - 1)
	{
		len++;
		num /= base;
	}
	return (len);
}
