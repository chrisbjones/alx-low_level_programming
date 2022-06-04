#include <stdio.h>
/**
 * main - entry block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0 SUCCESS
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
