#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double foo(int n, int tab[])
{
    double temp = 1.0;
    for (int i = 0; i < n; i++)
    {
        temp *= tab[i];
    }

return pow(temp, 1.0 /n);
}
int main()
{
    int tab[] = {1,2,3};
    printf("Srednia:%f\n", foo(3, tab));
}
