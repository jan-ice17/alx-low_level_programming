#include "function_pointers.h"

/**
*int_index - searche for integer
*@array: the array containing elements
*@size: no of elements in array
*@cmp: function to compare values
*
*Return: returns -1 if no element match
* or when size is less than zero
*
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int index = 0;

if (array == NULL || cmp == NULL)
return (-1);

for (; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}

return (-1);

}
