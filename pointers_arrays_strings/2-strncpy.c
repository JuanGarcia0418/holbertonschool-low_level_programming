#include "main.h"
/**
 * _strncpy - copy strings
 * @dest : first part of string
 * @src : second part of string
 * @n : number of bytes
 * Return: return a string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (i = 0 ; i < n; i++)
dest[i] = '\0';
return (dest);
}
