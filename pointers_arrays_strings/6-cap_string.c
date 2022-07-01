#include "main.h"
/**
 * *cap_string - change string to uppercase
 * @ptr: pointer with content
 * Return: string in uppercase
 */
char *cap_string(char *ptr)
{
int i = 0;
while (ptr[i])
{
while (!(ptr[i] >= 'a' && ptr[i] <= 'z'))
i++;
if (ptr[i - 1] == ' ' ||
ptr[i - 1] == '\t' ||
ptr[i - 1] == '\n' ||
ptr[i - 1] == ',' ||
ptr[i - 1] == ';' ||
ptr[i - 1] == '.' ||
ptr[i - 1] == '!' ||
ptr[i - 1] == '?' ||
ptr[i - 1] == '"' ||
ptr[i - 1] == '(' ||
ptr[i - 1] == ')' ||
ptr[i - 1] == '{' ||
ptr[i - 1] == '}' ||
i == 0)
ptr[i] -= 32;
i++;
}
return (ptr);
}
