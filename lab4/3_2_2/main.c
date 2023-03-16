#include <stdio.h>
#include <stdlib.h>
int* fun(int *a, int *b)
{
    if (*a < *b)
        return a;
    return b;

}
int main()
{
    int a = 10, b = 14;
    printf("Adres a %p\n", &a);
    printf("Adres b %p\n", &b);
    printf("%p\n",fun(&a,&b));
    return 0;
}
