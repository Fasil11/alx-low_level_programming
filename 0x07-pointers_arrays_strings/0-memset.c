#include "main.h"

/**
 * _memset - Entry point
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
