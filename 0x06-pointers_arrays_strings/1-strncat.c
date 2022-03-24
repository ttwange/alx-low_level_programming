<<<<<<< HEAD
#incclude "main.h"

=======
#include "main.h"

/**
 *_strncat - concatenates strings
 *@dest: destination
 *@src: source
 *@n: integer
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c1 = 0, c2 = 0;

	while (*(dest + c1) != '\0')
	{
		c1++;
	}

	while (c2 < n)
	{
		*(dest + c1) = *(src + c2);
		if (*(src + c2) == '\0')
			break;
		c1++;
		c2++;
	}
	return (dest);
}
>>>>>>> 1c0890cf032f68042a10d657dfee1a20ff68ba33
