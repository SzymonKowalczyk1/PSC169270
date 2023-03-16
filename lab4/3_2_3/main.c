#include <stdio.h>
#include <stdlib.h>
void fun (int *x, int *y)
{
  int temp = 0;
  temp = *x;
  *x = *y;
  *y = temp;
}
int main()
{
    int x = 10, y = 6;
    fun (&x,&y);
    printf ("%d\n", x);
    printf ("%d\n", y);
    return 0;
}
