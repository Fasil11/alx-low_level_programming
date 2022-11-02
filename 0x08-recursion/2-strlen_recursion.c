#include "main.h"


/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Teh string to  be measured.
 *
 * Return: The length of the string.
 */
void _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
