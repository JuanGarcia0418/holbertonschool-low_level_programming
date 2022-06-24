#include "main.h"
/**
 * puts_half - print part of string
 * @str : variable with numbers
 */
void puts_half(char *str)
{
int pri, cou = 0;
while (*(str + cou))
cou++;
pri = cou / 2;
if (pri % 2)
while (pri < cou)
{
_putchar(*(str + pri));
pri++;
}
_putchar('\n');
}
