#include <stdio.h>
#include <stdlib.h>
int * foo(int n)
{
    return malloc(n*sizeof(int));
}
int main()
{
    int * wsk2 = foo(6);
    printf("%p\n",wsk2);
    free (wsk2);
    return 0;
}
