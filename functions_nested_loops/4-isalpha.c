#include "main.h"
/**
 * _isalpha - check uppercase
 * @c : variable of letter
 * Return: 0 and 1 result
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
