#include <unistd.h>

/**
 * _putchar - vrites a character to stdout
 * @c: The character to print
 * Return: on success 1.
 * On error, -1 is returned and error is set appropriately.
 */
int _putchar(char c){
       write(1, &c, 1);
	return (0);
}	
