#include <stdio.h>
/**
 * main - start of code
 * Return: number if true
 */
int main(void)
{
int nums;
for (nums = 1; nums <= 100; nums++)
{
if (nums % 15 == 0)
printf("Fizzbuzz");
else if (nums % 3 == 0)
printf("Fizz");
else if (nums % 5 == 0)
printf("Buzz");
else
printf("%i", nums);
if (nums < 100)
printf(" ");
}
printf("\n");
return (0);
