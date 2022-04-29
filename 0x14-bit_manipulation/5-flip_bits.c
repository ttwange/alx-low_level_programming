#include "main.h"

/**
 * int flip_bits - flip to get one number to another
 * @n: unsined long integer
 * @m: unsigned long integer
 *
 * return: number of bits 
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t;
	unsigned int h = 0;


	t = n ^m;

	while(t)
	{
		h += t & 1;
		t >>= 1;
	}
return (t);
}
