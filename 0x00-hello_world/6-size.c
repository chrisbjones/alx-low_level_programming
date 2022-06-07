#include <stdio.h>

/**
 *main - print data type size
 *
 *
 *Return: (0) if proper
 */

int main()
{
	int integerType;
	float floatType;
	double doubleType;
	char charType;

	/* Sizeof operator evalute the size of the variable */
	printf("Size of int: %ld bytes\n", sizeof (integerType));
	printf("size of float: %ld bytes \n", sizeof (floatType));
	printf("size of double: %ld bytes \n", sizeof (doubleType));
	printf("size of char: %ld bytes\n", sizeof (charType));
			   
	return (0);
}

