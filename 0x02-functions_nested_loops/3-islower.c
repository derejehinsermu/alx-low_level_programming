
#include "main.h"

/**
 * _islower - Short description, single line
 * @c: checks input of function
 *  Return: returns 1 if `c` is lowercase
 *         otherwise always 0 (Success)
 */
int _islower(int c)

{

if (c > 'a' && c < 'z')
{
return (1);
}

else
{
return (0);
}

}
