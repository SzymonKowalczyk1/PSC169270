#include <stdio.h>
#include <stdlib.h>

double fun(double(*w)(int),int n)
{
return w(n);
}
double pom(int arg)
{
    return (double)(arg+3);
}

int main()
{
    printf("%lf\n",fun(pom, 5));
    return 0;
}
