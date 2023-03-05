#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("Podaj n: ");
    scanf ("%i",&n);
    printf("Podaj m: ");
    scanf("%i",&m);
    for (int i = n; i < m; i+=n)
        printf("%d \n",i);
    return 0;
}
