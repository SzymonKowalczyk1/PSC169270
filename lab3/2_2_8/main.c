#include <stdio.h>
#include <stdlib.h>

int pierwiastek(int n)
{
    int i = 0;
    while (i*i <= n) {
        i++;
    }
    return i - 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("Pierwiastek n to: %d\n",pierwiastek(n));
    return 0;
}
