#include "main.h"

/**
* flip_bits - Counts the number of bits to flip to get from one num to another.
* @n: The first number.
* @m: The second number.
*
* Return: The number of bits that must be flipped to convert n to m.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m; /* XOR to find differing bits */

	unsigned int count = 0;

	/* Count the set bits in xor (differing bits) */
	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
