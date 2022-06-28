#include "main.h"
/**
 * _strncat - concatenate strings with
 * bytes
 * @dest : the first string
 * @src : the second string
 * @n : number of bytes
 * Return: a pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i++])
j++;
for (i = 0; src[i] && i < n; i++)
dest[j++] = src[i];
return (dest);
}
