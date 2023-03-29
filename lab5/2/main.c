#include <stdio.h>
#include <stdlib.h>
int foo(int (*fun1)(int), int (*fun2)(int), int n)
{
    return fun1(n) + fun2(n);
}
int kwadrat(int x) {
    return x * x;
}

int szescian(int x) {
    return x * x * x;
}

int main()
{
    printf("%d\n", foo(kwadrat, szescian, 4));
    printf("%d\n", foo(kwadrat, szescian, 6));
    return 0;
}
