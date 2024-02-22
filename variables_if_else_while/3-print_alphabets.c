#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
		putchar(lowercase++);

	while (uppercase <= 'Z')
		putchar(uppercase++);

	putchar('\n');

	return (0);
}

