#include "main.h"
/**
 * puts2 - numbers of 1 to 9
 * @str: variable of pointer
 */
void puts2(char *str)
{
int num = 0, len = 0;
while (str[num++])
len++;
for (num = 0; num < len; num += 2)
_putchar(str[num]);
_putchar('\n');
}
