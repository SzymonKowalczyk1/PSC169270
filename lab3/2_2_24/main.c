#include <stdio.h>
#include <stdlib.h>
int zadanie(int n)
{
    if (n == 0 || n == 1){
        return 1;
    }
    int suma = 2;
    for (int i = 2; i <= n; i++) {
        suma += zadanie(i - 1);
    }
    return suma -1;
}



int main()
{
    printf("%d\n", zadanie(0));
    printf("%d\n", zadanie(2));
    printf("%d\n", zadanie(3));
    printf("%d\n", zadanie(4));
    printf("%d\n", zadanie(5));
    return 0;
}
