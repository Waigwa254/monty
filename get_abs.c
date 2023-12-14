#include "monty.h"

/**
* _abs - gets absolute value of int
* @i: integer
*
* Return: unsigned integer abs
*/
unsigned int _abs(int i)
{
	if (i < 0)
		return (-(unsigned int)i);
	return ((unsigned int)i);
}
