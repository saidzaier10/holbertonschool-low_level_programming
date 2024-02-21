#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	if (n > 0)
		printf("%dis positive"\n)
	if (n == 0)
		printf("%dis zero"\n)
	if (n < 0)
		printf("%dis negative"\n)

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
