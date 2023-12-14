#include "monty.h"

/**
 * is_empty_line - Checks if a line contains delimiters
 * @line: A pointer to the line
 * @delims: A string 
 *
 * Return: If only contains delimiters - 1
*/
int is_empty_line(char *line, char *delims)
{
	int i, j;

	for (i = 0; line[i]; i++)
	{
		for (j = 0; delims[j]; j++)
		{
			if (line[i] == delims[j])
				break;
		}
		if (delims[j] == '\0')
			return (0);
	}

	return (1);
}

