#include <stdio.h>
#include <stdlib.h>
double * foo (int n)
{
    return malloc (n*sizeof(double));

}

int main()
{
    printf("%d\n", foo(5));
    return 0;
}
