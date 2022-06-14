#include "main.h"

void puts2(char *str) 

/**
 * puts2 - prints every other string  character to stdout
 * @str: string to print
 *
 * Return: void
 */

int main(void)
{
	int i = 0;

	char *str;

	while (*(str + i))
{
		_putchar(*(str + i));
		i = i + 2;
}
	_putchar('\n');
}
