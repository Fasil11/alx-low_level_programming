#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c :the characters to print
 *
 * Return: On sucess 1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
