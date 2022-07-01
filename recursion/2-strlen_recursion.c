#include "main.h"
/**
 * _strlen_recursion - count content of a string
 * @s: pointer with the string
 * Return: Return number of content
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s)
{
i++;
i += _strlen_recursion(s + 1);
}
return (i);
}
