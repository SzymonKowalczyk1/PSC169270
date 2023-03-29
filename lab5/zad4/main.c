#include <stdio.h>
#include <stdlib.h>
int foo(const int *wsk1, int * const wsk2) {
    return *wsk1 - *wsk2;
}
int main()
{
    int a = 5;
    int b = 3;
    printf("%d\n",foo(&a,&b));
    return 0;
}
