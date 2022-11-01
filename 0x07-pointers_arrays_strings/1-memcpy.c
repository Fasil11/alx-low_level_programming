#include "main.h"

/**
 *_memcpy - copies @n bytes from tnhe memory area pointed
 *	to by @src into that pointed to by the @dest.
 *@dest: A pointer to the memory area to copy @src into.
 *@src: The source buffer to cpy character from.
 *@n: The number of bytes to copy from @src.
 *
 * Return:A pointer to the destionation buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;

	const unsisgned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}

