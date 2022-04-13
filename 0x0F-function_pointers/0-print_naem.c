#include "function_pointers.h"

/**
 *print_name: function to print name
 *
 *Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{ 
  if( f != NULL)
          f(name);
}
