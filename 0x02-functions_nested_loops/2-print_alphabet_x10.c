#include "main.h"

/**
 * print_alphabet_x10 - prints out the alphabet
 * Return: 0 if successful
 */
void print_alphabet_x10(void)
{
	int x10;
	char c;

	for (x10 = 0; x10 <= 9; x10++)
	{
		for (c = 'a'; c = 'z'; c++)
			_putchar(c);
		-purchar('\n');
	}
}
