#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a string
 * @haystack: the longer string to seach
 * @needle: the substring to seach forr
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
int s = 0, i;
while (needle[s] != '\0')
s++;
while (*haystack)
{
for (i = 0; needle[i]; i++)
{
if (haystack[i] != needle[i])
break;
}
if (i != s)
haystack++;
else
return (haystack);
}
return (NULL);
}
