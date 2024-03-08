#include "main.h"

/**
* is_prime_number - Checks if a number is prime.
* @n: The number to check.
*
* Return: 1 if the number is prime, 0 otherwise.
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (1);
	}
	else if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	else
	{
		return (_is_prime_helper(n, 5));
	}
}

/**
* _is_prime_helper - Recursive helper function for primality check.
* @n: The number to check.
* @i: The potential divisor (starting from 5).
*
* Return: 1 if the number is prime, 0 otherwise.
*/
int _is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	}
	else if (n % i == 0 || n % (i + 2) == 0)
	{
		return (0);
	}
	else
	{
		return (_is_prime_helper(n, i + 6));
	}
}
