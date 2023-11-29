#include "function_pointers.h"

/**
 *array_iterator - executes function for array
 *@array: -array to be used
 *@action: -action to be executed
 *@size: -the sizze of an array
 *
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;

while (size-- > 0)
{
action(*array);
array++;
}

}
