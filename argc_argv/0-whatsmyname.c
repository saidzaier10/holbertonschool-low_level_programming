#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program. Prints all command-line arguments.
 * @argc: The count of command-line arguments. Includes the name of the program
 * @argv: An array of character pointers listing all the arguments
 *        argv[0] is the program name, argv[1] is the first argument, and so on
 *
 * This program takes any number of command-line arguments, including the name
 * of the program itself, and prints each one on a new line. It demonstrates
 * basic usage of command-line arguments in a C program.
 *
 * Return: Always returns 0 to signify successful execution.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	printf("%s\n", argv[i]);
	return (0);
}
