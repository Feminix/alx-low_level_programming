#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to unsigned int
 * @m: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *m)
{
	int y;
	unsigned int dec_val = 0;

	if (!m)
		return (0);

	for (y = 0; m[y]; y++)
	{
		if (m[y] < '0' || m[y] > '1')
			return (0);
		dec_val = 2 * dec_val + (m[y] - '0');
	}

	return (dec_val);
}
