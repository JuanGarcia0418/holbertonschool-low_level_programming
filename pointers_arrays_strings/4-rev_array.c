#include "main.h"
/**
 * reverse_array - print reverse content of a array
 * @a : is a pointer to content
 * @n : is the number of the content
 */
void reverse_array(int *a, int n)
{
int i = 0, t;
n = n - 1;
while (i < n)
{
t = *(a + i);
*(a + i) = *(a + n);
*(a + n) = t;
i++;
n--;
}
}
