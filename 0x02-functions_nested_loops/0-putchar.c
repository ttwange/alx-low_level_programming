#include<stdio.h>

/**
 * main - a program that prints _putchar
 *
 * return: 0
 */

int main(void){
 	char txt[8] ="_putchar";
	int i;

	for (i=0; i<8; i++)
	{
		putchar(txt[i]);

	}
	putchar('\n');
	return (0);
}
