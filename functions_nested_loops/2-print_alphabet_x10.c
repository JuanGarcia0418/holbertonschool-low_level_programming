#include "main.h"
/**
  * print_alphabet_x10 - Make alphabet x10 times
  */
void print_alphabet_x10(void)
{
char alp;
int num = 0;
while (alp <= 9)
{
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
num++;
}
}
