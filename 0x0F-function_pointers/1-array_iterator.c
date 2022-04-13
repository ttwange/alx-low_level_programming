#include "function_pointers.h"

/**
 * array_iterator - xecutes a function given as a parameter on each
 * element of an array.
 * @array: array of intege
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t p;

if (array != NULL && action != NULL)
{
	for (p = 0; p < size; p++)
		action(array[p]);
}
}
