#include "main.h"

/*
 * print_alphabet - in lowercase
 *
 * Return: Alway 0 (SUCCESS)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');

}
