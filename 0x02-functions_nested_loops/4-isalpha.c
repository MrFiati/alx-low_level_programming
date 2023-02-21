#includi "main.h"
/**
 * _isalpha - states whether letter or not
 * @c: passes value to function
 *
 * Return: 1 if alpha 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
