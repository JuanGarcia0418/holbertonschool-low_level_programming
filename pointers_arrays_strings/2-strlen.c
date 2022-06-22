#include "main.h"
/**
 * _strlen - count characters
 * @s : variable of count
 * Return: return count
 */
int _strlen(char *s)
{
int cou = 0;
while (*s++)
cou++;
return (cou);
}
