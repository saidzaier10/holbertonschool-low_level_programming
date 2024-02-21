#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("Taille d'un char : %lu octet(s)\n", sizeof(char));
	printf("Taille d'un int : %lu octet(s)\n", sizeof(int));
	printf("Taille d'un long int : %lu octet(s)\n", sizeof(long int));
	printf("Taille d'un long long int : %lu octet(s)\n", sizeof(long long int));
	printf("Taille d'un float : %lu octet(s)\n", sizeof(float));

	return (0);
}

