#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints its name, followed by a new line
 * @argument_count: amount of arguments
 * @argument_values: the array of arguments
 * Return: 0
 */
int main(int argument_count, char *argument_values[])
{
	if (argument_values[0] != NULL)
		printf("%d\n", argument_count - 1);
	return (0);
}

