#include "main.h"
/**
 * _strcpy - copy string
 * @dest : variable where copy
 * @src : variable de copy
 * Return: return variable with content
 */
char *_strcpy(char *dest, char *src)
{
int cou = 0;
while (src[cou])
{
dest[cou] = src[cou];
cou++;
}
return (dest);
}
