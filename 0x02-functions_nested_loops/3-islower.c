#include "main.h"
/**
 * _islower - states whether lower or not
 * @c: passes value to function
 *
 * Return: 1 if lower 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
