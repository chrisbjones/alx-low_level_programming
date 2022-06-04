#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry block
 * Description: Print all numbers of base 10, starting from 0.
 * Return: 0 Success
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%i", a);
	}
	putchar('\n');

	return (0);
}
