#include "main.h"
/**
 * *string_toupper - change lowercase to uppercase
 * @ptr : pointer with the content
 * Return: return string in uppercase
 */
char *string_toupper(char *ptr)
{
int i = 0;
while (*(ptr + i))
{
if (*(ptr + i) >= 'a' && *(ptr + i) <= 'z')
*(ptr + i) -= 'a' - 'A';
i++;
}
return (ptr);
}
