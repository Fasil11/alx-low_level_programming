#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 *	pointed to by @s with the constant byte @c.
 *  @s: A pointer to the array memory filled.
 *  @c: The character to fill the memory area with.
 *  @n:  The number of bytes to be filled.
 *  description _memset: over there
 *
 *  Return: A pointer to the filled memory area @s.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memeory);
}