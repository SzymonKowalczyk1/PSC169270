#include <stdio.h>
#include <stdlib.h>
double *fun (int n)
{
    double *wsk = malloc(n *sizeof(double));
    return wsk;
}
int main()
{
    double * wsk2 = fun(6);
    printf("%p\n",wsk2);
    return 0;
}
