#include "main.h"
/**
 * rev_string - reverse string in other string
 * @s : string to reverse
 */
void rev_string(char *s)
{
int i = 0, j = 0;
char str[1026];
while (*(s + i))
{
*(str + i) = *(s + i);
i++;
}
i = i - 1;
while (i >= 0)
{
*(s + i) = *(str + j);
j++;
i--;
}
}
