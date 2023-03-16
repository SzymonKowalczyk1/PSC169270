#include <stdio.h>
#include <stdlib.h>
void fun(int const *x, int *const y) //wskaznik na zmienna
{
    *y = *x;
}
int main()
{
    int x =8, y=3;
    printf("x=%d, y=%d\n",x,y);
    fun(&x,&y);
    printf("x=%d, y=%d\n",x,y);
    return 0;
}
