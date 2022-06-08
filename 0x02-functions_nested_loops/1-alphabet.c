#include <stdio.h>

/*
 * main - Entry Point
 *
 * Description - prints the alphabet, in lowercase
 *
 * return - Alway 0 (SUCCESS)
 */

int main(void)
{
	int ch;

	putchar("\nLowercase characters : \n");
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	return (0);
}
