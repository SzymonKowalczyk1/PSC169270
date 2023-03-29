#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool foo(int (*fun1)(int), int (*fun2)(int), unsigned int n) {
    for (int i = 0; i <= n; i++) {
        if (fun1(i) != fun2(i)) {
            return false;
        }
    }
    return true;
}
int kwadrat(int x) {
    return x * x;
}

int szescian(int x) {
    return x * x * x;
}

int main() {
    printf("%d\n", foo(kwadrat, szescian, 1));
    printf("%d\n", foo(kwadrat, szescian, 5));
    return 0;
}
