#include <stdio.h>

/**
* main - Print the number of arguments passed into the program.
* @argc: Number of command-line arguments, including the program name.
* @argv: Array of character pointers listing all the arguments.
*        This parameter is marked as unused with __attribute__((unused)).
* Return: Always 0.
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
