#include "main.h"

/**
 * _strncat - concatenates two strings only taking n bytes from src
 * @dest: first string to be added to
 * @src: second string to be added
 * @n: number of bites to use from src
 * Return: (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	for (; *ptr != '\0'; ptr++)
		;
	for (; *src != '\0'; src++)
	{
		if (n == 0)
			break;
		*ptr = *src;
		ptr++;
		n--;
	}
	return (dest);
}
