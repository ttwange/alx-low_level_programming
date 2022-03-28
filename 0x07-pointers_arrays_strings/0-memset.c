#include <stdio.h>
/**
 *_memset - fill the memory with a constant
 *@s:pointer to memory
 *@b:thing to write 
 *@n:bytes
 *Return: 
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

 for (i = 0; i < nn; i++)
 {
	*(s +i) = b;
 }
return (s); 
}
