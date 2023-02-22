#include "holberton.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: one night in bangkok and the worlds your oyster
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int v;

	v = n % 10;
	if (v < 0)
		v = -v;
	_putchar('0' + v);
	return (v);
}
