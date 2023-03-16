#include <stdio.h>
#include <stdlib.h>

int fun (int *a, int *b)
{
    if (*a > *b)
        return *b;
     return *a;

}

int main()
{
    int a = 8, b=3;
    printf("%d\n",fun(&a,&b));
    return 0;
}
