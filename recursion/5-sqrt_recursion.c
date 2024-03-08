#include "main.h"

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number to find the square root of.
*
* Return: The square root of n, or -1 if n does not have a natural square root.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (_check_sqrt(n, 1));
	}
}

/**
* _check_sqrt - Helper function to check potential square root candidates.
* @n: The number to find the square root of.
* @guess: The current guess for the square root.
*
* Return: The square root if found, -1 otherwise.
*/
int _check_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (_check_sqrt(n, (guess + (n / guess)) / 2));
	}
}
