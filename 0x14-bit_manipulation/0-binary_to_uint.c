#include "main.h"
#include <stddef.h>

/**
* binary_to_uint - vonverts a binary number to an unsigned int
* @b: binary number
* Return: the converted number or 0 if it fails
*/
unsigned int binary_to_uint(const char *b)
{

	unsigned int unit, place;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++);
	len--;

	for (place = 1, unit = 0; len >= 0; len--)
	{
		if (b[len] == '0')
		{
			place *= 2;
			continue;
		}
	else if (b[len] == '1')
	{
		unit += place;
		place *= 2;
		continue;
	}
	return (0);
	
	}
	return (unit);
}
