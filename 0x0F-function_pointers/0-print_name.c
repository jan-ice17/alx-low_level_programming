#include "function_pointers.h"

/**
*print_name --the func prints a name
*@name--name which print
*@f--function which print name
*/

void print_name(char *name, void (*f)(char *))
{

if (name == NULL || f == NULL)
return;

f(name);

}
