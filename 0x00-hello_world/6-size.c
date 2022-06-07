#include <stdio.h>

/**
 *main - print data type size
 *
 *
 *Return: Always 0 (Success)
 */

int main(void)
{

	/* Sizeof operator evalute the size of the variable */
	printf("Size of int:%ld bytes\n", sizeof(int));
	printf("size of float: %ld bytes\n", sizeof(float));
	printf("size of long int:%ld bytes\n", sizeof(long int));
	printf("size of char:%ld bytes\n", sizeof(char));
	printf("size of long long int: %ld bytes\n", sizeof(long long int));
	return (0);
}

