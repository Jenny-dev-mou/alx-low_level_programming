#include <unistd.h>

/**
 *  _putchar.c writes the character c to stdout
 *   @c: the character to print
 *
 *   return: on success 1.
 *   on error, -1 is returned, anderrn o is set appropriately.
 */
int _putchar.c(char c)
{
	return (write(1, &c, 1));
}	
