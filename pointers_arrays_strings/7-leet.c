#include "main.h"
/**
 * *leet - encode the string with 1337
 * @p : string to encode
 * Return: return the string encode
 */
char *leet(char *p)
{
int i = 0, j;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
while (p[i])
{
for (j = 0; j <= 7; j++)
{
if (p[i] == leet[j] ||
p[i] - 32 == leet[j])
p[i] = j + '0';
}
i++;
}
return (p);
}
