#include "main.h"
/**
 * _pow_recursion - return value of string in x and y
 * @x: base of number
 * @y: exponent
 * Return: return operation completed
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
