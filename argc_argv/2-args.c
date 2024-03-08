#include <stdio.h>

/**
 * main - Prints all command-line arguments.
 * @argc: The number of command-line arguments, including the program name.
 * @argv: An array of character pointers listing all the arguments.
 *        Each argument is printed to the standard output.
 *
 * This program iterates through all command-line arguments passed to it,
 * including the name of the program itself, and prints each one on a
 * new line to the standard output. It demonstrates the usage of
 * argc for determining the number of arguments and argv for accessing
 * the actual argument values.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
return (0);
}
