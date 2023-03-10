#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string to be added to
 * @src: second string to be added
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	for (; *ptr != '\0'; ptr++)
		;
	for (; *src != '\0'; src++)
	{
		*ptr = *src;
		ptr++;
	}
	*ptr = *src;
	return (dest);
}
