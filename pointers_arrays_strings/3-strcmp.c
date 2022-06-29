#include "main.h"
/**
 * _strcmp - compare 2 strings
 * @s1 : first string for compare
 * @s2 : second string for compare
 * Return: return solution of compare
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
