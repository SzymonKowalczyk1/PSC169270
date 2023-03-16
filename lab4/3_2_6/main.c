#include <stdio.h>
#include <stdlib.h>
int fun (int n, int *w)
{
    *w = n;
}
int main()
{
    int w;
    int n = 30;
    fun (n, &w);
    printf("w:  %i",n);
}
