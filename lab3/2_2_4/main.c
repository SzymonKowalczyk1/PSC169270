#include <stdio.h>
#include <stdlib.h>
int potega (int n)
{
    int temp = 1;
    for(int i =1; i<=n; i++){
        temp *= 2;
    }

    return temp;
}
int main()
{
    printf("%d\n", potega(0));
    printf("%d\n", potega(1));
    printf("%d\n", potega(4));
    printf("%d\n", potega(6));
    return 0;
}
