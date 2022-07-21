#include "main.h"
/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: destination
 * Return: flip_num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, flip_num = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			flip_num += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (flip_num);
}
