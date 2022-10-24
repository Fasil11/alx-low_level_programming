#include <unistd.h>

/**
 * _putchar writes character to c stdout
 * @c: char to be printed
 * Return: On success 1
 */

int _putchar(char C)
{

	return(write(1, &c, 1));
}
