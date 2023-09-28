#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 *
 * Return: converted decimal number or 0 if there is an unconvertible char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int len = 0;

	if (b == NULL)
		return (0);

	/* Calculate the length of the binary string */
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	/* Convert binary to decimal */
	for (int i = 0; b[i] != '\0'; i++)
	{
		total = total * 2 + (b[i] - '0');
	}

	return (total);
}
