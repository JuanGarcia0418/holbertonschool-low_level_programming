#include "main.h"
/**
  * print_alphabet_x10 - Make alphabet x10 times
  */
void print_alphabet_x10(void)
{
char a;
int n = 0;
for (n = 0; n < 10; n++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
