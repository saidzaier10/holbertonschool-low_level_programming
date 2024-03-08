#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiplies two command-line argument numbers.
* @argc: Argument count, including program name.
* @argv: Argument vector, expects two numbers for multiplication.
*
* Description: If exactly two arguments are provided (excluding the program
* name), this program calculates and prints their product. Otherwise, it
* outputs "Error" and returns 1. The arguments are converted from strings
* to integers using atoi.
*
* Return: 0 on success, 1 if incorrect number of arguments.
*/
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
