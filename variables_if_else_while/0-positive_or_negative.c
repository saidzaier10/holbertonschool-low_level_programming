#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	if (n > 0)
		printf("%dis positive\n", n)
	else if  (n == 0)
		printf("%dis zero\n", n)
	else (n < 0)
		printf("%dis negative\n", n)

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
