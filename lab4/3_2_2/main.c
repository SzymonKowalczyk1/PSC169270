#include <stdio.h>
#include <stdlib.h>
int fun(int *a, int *b)
{
    if (*a < *b)
        return *a;
    return *b;

}
int main()
{
    int a = 10, b = 14;
    printf("%d\n", fun(&a,&b));
    return 0;
}
