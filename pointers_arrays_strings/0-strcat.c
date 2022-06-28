#include "main.h"
/**
 * _strcat - content of string
 * @dest : first part of a string
 * @src : second part of a string
 * Return: first part of string
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = j = 0;
while (*(dest + i))
i++;
while ((*(dest + i) = *(src + j)))
{
i++;
j++;
}
return (dest);
}
