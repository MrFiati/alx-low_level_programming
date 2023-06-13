#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function creates an array of chars
 * @size: the size of the memory to print
 *@c: character
 *
 * Return: NULL if 0 or fail else return ptr
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(*s));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
