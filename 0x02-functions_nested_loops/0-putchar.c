#include <stdio.h>

/*
 * main - Entry Point
 *
 * Decription - print _putchar
 *
 * return - Alway 0 (SUCCESS)
 */

int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++);
	{

		_putchar(text[1]);
	}
	_putchar('\n');

	return (0);
}
