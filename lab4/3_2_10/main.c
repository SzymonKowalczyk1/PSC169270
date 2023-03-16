#include <stdio.h>
#include <stdlib.h>

int * fun()
{
    return malloc(sizeof(double));
}
int main()
{
    int * wsk1 = fun();
    printf("%p\n", wsk1);
    return 0;
}
