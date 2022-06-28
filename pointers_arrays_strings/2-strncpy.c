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
  i = 0;
  while (i < n && *(src + i))
    {
      *(dest + i) = *(src + i);
	i++;
    }
  while (i < n)
    {
      *(dest + i) = '\0';
      i++;
    }
  return (dest);
}
