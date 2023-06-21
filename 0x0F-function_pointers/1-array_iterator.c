#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function provided as a parameter
 *  on each element of an array
 * @array: is pointer to int
 * @action: a pointer to the function
 * @size: size of the array
 *
 * Return: Nothing.
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
