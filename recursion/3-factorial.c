#include "main.h"
/**
 * factorial - count factors in strigns
 * @n: conten to check for factorial
 * Return: return number according to the string
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
