#include <stdio.h>
#include <stdlib.h>
int silnia (unsigned int n)
{
    if (n<2)
        return 1;
    return n*silnia(n-1);
}
int main()
{
    int n;
    printf("Podaj n: ");
    scanf("%i",&n);
    printf("Silnia n to: %d\n",silnia(n));
    return 0;
}
