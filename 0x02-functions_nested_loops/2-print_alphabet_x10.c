#include "main.h"
/**
* print_alphabet_x10 - prints alphabets 10 times
*
* Return: always 0
*/
void print_alphabet_x10(void)
{
	int c;
	char l;

	for (c = 1; c <= 10; c++)
	{
	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	}

}
