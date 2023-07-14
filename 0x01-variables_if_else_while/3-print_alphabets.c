#include <stdio.h>
/**
*main - Entry point of the program
*
*Return: Always 0 (Success)
*/
int main(void)
{	char CHAR;

	for (CHAR = 'a'; CHAR <= 'z'; CHAR++)
		putchar(CHAR);
	for (CHAR = 'A'; CHAR <= 'Z'; CHAR++)
		putchar(CHAR);
	putchar('\n');

	return (0);
}
