#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - print result of the number either positive , negative or zero
 *
 *return: always 0.
 **/

int main(void)
{
	int n;

	srand(time(0));
	n rand() - RAND_MAX / 2;

	if (n > 0)
	printf("%d is positive\n");
        else if (n == 0)
	printf ("%dis zero\n");
	else
        printf ("%dis negative\n");
	return (0);
}
