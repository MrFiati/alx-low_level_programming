#include "main.h"

/**
 * _strncpy - copy two strings only taking n bytes from src
 * @dest: first string to be added to
 * @src: second string to be added
 * @n: number of bites to use from src
 * Return: concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	for (; n != 0 && *src != '\0'; n--, src++)
	{
		*ptr = *src;
		ptr++;
	}
	for (; n != 0 && *ptr != '\0'; n--, ptr++)
		*ptr = '\0';
	return (dest);
}
