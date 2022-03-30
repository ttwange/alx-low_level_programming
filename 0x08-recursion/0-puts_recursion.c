#include "main.h"

/**
 *
 *_puts_recursion - prints a string
 *@s: characters
 *Return: nothing
 */

void _puts_recursion(car *s)
{
  if(*s != '\0')
  {
    _putchar(*s);
    _puts_recursion(s + 1);
  }
  else
    
    _putchar('\n');
}
