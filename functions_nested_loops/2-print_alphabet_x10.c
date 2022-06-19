#include "main.h"
/**
  * print_alphabet_x10 - Make alphabet x10 times
  */
void print_alphabet_x10(void)
{
char a;
int n = 0;
while (a <= 9)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
n++;
}
}
