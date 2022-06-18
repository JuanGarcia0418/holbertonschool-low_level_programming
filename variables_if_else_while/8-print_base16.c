#include <stdio.h>
/**
 * main - print numbers al letters
 * Return:0
 */
int main(void)
{
int num;
char alp;
for (num = 48; num < 57; num++)
{
putchar(num);
}
for (alp = 'a'; alp <= 'f'; alp++)
{
putchar(alp);
}
putchar('\n');
return (0);
}
